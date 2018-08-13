/
************************************************************************************/
/*************************************** 2018.4.02 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//直流节点电压法

#include "iostream"
#include "fstream"
#include "math.h"
using namespace std;

const int nsize = 10;
const int nsize2 = 20;

typedef char vector1[nsize];
typedef int vector2[nsize];
typedef double vector3[nsize];
typedef double matrix4[nsize][nsize];
typedef double matrix5[nsize][nsize2];

int nNode;
int nBrn;
int nM1;

vector1 itype;
vector2 ifrom;
vector2 ito;
vector2 icont;
vector3 value;
vector3 el;
vector3 jl;

matrix4 a;
matrix4 yb;
matrix4 eb;
matrix4 jb;
matrix4 un;
matrix4 ub;
matrix4 ib;

int nflag;

int enter()
{
	fstream fs;
	fs.open("test_input.txt", ios::in);
	if (!fs)
	{
		cout << "open fail";
		return 1;
	}
	cout << "Please input data: node = ? nbrn = ?" << endl;
	fs >> nNode >> nBrn;
	for (int ni = 1; ni <= nsize - 1; ni++)
	{
		for (int nj = 1; nj <= nsize - 1; nj++)
		{
			a[ni][nj] = 0.0;
			yb[ni][nj] = 0.0;
			eb[ni][nj] = 0.0;
			jb[ni][nj] = 0.0;
		}
	}
	cout << "Enter itype[j],ifrom[j],ito[j],value[j]" << endl;
	cout << "icont[j],el[j],jl[j],for j :=1 TO nBrn" << endl;
	for (int nj = 1; nj <= nBrn; nj++)
	{
		fs >> itype[nj] >> ifrom[nj] >> ito[nj] >> value[nj] >> icont[nj]
			>> el[nj] >> jl[nj];
		a[ifrom[nj]][nj] = 1.0;
		a[ito[nj]][nj] = -1.0;

		if (itype[nj] == 'g')
		{
			yb[nj][nj] = value[nj];
		}
		else if (itype[nj] == 'r')
		{
			yb[nj][nj] = 1.0 / value[nj];
		}
		else if (itype[nj] == 'v')
		{
			yb[nj][icont[nj]] = value[nj];
		}
		if (itype[nj] != 'v')
		{
			eb[nj][1] = el[nj];
			jb[nj][1] = jl[nj];
		}
	}
	return 0;
}

int matmul(matrix4 a, matrix4 b, int ira, int ica, int icb, double(*pc)[nsize])
{
	int ni;
	int nj;
	int nk;
	for (ni = 1; ni <= ira; ni++)
	{
		for (nj = 1; nj <= icb; nj++)
		{
			*(*(pc + ni) + nj) = 0.0;
			for (nk = 1; nk <= ica; nk++)
			{
				*(*(pc + ni) + nj) = *(*(pc + ni) + nj) + a[ni][nk] * b[nk][nj];
			}
		}
	}
	return 0;
}

int matinv(matrix4 a, int n, double(*pb)[nsize], int &pflag)
{
	int kswap;
	int ni;
	int nj;
	int nk;
	double dpivot;
	double dtemp;
	matrix5 c;
	pflag = 1;
	for (ni = 1; ni <= n; ni++)
	{
		for (nj = 1; nj <= 2 * n; nj++)
		{
			c[ni][nj] = 0.0;
		}
	}
	for (ni = 1; ni <= n; ni++)
	{
		for (nj = 1; nj <= n; nj++)
		{
			c[ni][nj] = a[ni][nj];
		}
	}
	for (ni = 1; ni <= n; ni++)
	{
		c[ni][ni + n] = 1.0;
	}
	for (nk = 1; nk <= n; nk++)
	{
		dpivot = c[nk][nk];
		kswap = nk + 1;
		while (fabs(dpivot) < 1.0e-8)
		{
			if (kswap > n)
			{
				pflag = 0;
				cout << "Matrix inversion fails";
				break;
			}
			for (nj = 1; nj <= 2 * n; nj++)
			{
				dtemp = c[nk][nj];
				c[nk][nj] = c[kswap][nj];
				c[kswap][nj] = dtemp;
			}
			dpivot = c[nk][nk];
			kswap = kswap + 1;
		}
		for (nj = nk; nj <= 2 * n; nj++)
		{
			c[nk][nj] = c[nk][nj] / dpivot;
		}
		for (ni = nk + 1; ni <= n; ni++)
		{
			dtemp = c[ni][nk];
			for (nj = nk; nj <= 2 * n; nj++)
			{
				c[ni][nj] = c[ni][nj] - dtemp*c[nk][nj];
			}
		}
		for (ni = nk - 1; ni >= 1; ni--)
		{
			dtemp = c[ni][nk];
			for (nj = nk; nj <= 2 * n; nj++)
			{
				c[ni][nj] = c[ni][nj] - dtemp*c[nk][nj];
			}
		}
	}
	for (nk = 1; nk <= n; nk++)
	{
		for (nj = 1; nj <= 2 * n; nj++)
		{
			*(*(pb + nk) + nj) = c[nk][nj + n];
		}
	}
	return 0;
}

int compute()
{
	matrix4 at;
	matrix4 ayb;
	matrix4 yn;
	matrix4 aybeb;
	matrix4 ajb;
	matrix4 jn;
	nM1 = nNode - 1;
	for (int nj = 1; nj <= nNode; nj++)
	{
		for (int ni = 1; ni <= nBrn; ni++)
		{
			at[ni][nj] = a[nj][ni];
		}
	}
	matmul(a, yb, nM1, nBrn, nBrn, ayb);
	matmul(ayb, at, nM1, nBrn, nM1, yn);
	matmul(ayb, eb, nM1, nBrn, 1, aybeb);
	matmul(a, jb, nM1, nBrn, 1, ajb);
	for (int nj = 1; nj <= nM1; nj++)
	{
		jn[nj][1] = ajb[nj][1] - aybeb[nj][1];
	}
	matinv(yn, nM1, yn, nflag);
	if (nflag == 0)
	{
		cout << "The matrix is singular" << endl;
	}
	matmul(yn, jn, nM1, nM1, 1, un);
	matmul(at, un, nBrn, nM1, 1, ub);
	for (int nj = 1; nj <= nBrn; nj++)
	{
		if (itype[nj] != 'v')
		{
			ib[nj][1] = -jb[nj][1] + yb[nj][nj] * (ub[nj][1] + eb[nj][1]);
		}
		if (itype[nj] == 'v')
		{
			ib[nj][1] = -jb[nj][1] + yb[nj][icont[nj]] *(ub[icont[nj]][1] + eb[icont[nj]][1]);
		}
	}
	return 0;
}

int printout()
{
	cout << "The node voltages:" << endl;
	for (int nj = 1; nj <= nM1; nj++)
	{
		cout << nj << " " << un[nj][1] << endl;
		cout << "branch voltage current " << endl;
	}
	for (int nj = 1; nj <= nBrn; nj++)
	{
		cout << " "  << endl;
		cout.width(16);
		cout.precision(5);
		cout << ub[nj][1];
		cout.width(16);
		cout.precision(5);
		cout << ib[nj][1];
		cout.width(16);
	}
	return 0;
}

int main()
{
	enter();
	compute();
	printout();
	system("pause");
	return 0;
}
