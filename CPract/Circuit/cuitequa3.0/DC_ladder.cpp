/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//直流梯形网络计算


#include "iostream"
#include "vector"
#include "fstream"
#include "string"

const int nsize = 10;

typedef char vector1[nsize];
typedef int vector2[nsize];

using namespace std;

int main()
{
	vector1 itype;
	vector2 ifrom;
	vector2 ito;
	vector2 value;
	int nMax = 0;
	int nn;
	int nk;
	double dee;
	double dq;
	//cout << "Please input data,n = ?,e = ?" << endl;
	//cin >> nn >> de;
	//cout << "n = " << nn << endl;
	//cout << "e = " << de << endl;
	double r[100];//此动态数组的参数可以是变量（这一点非常好）
	double i[100];
	double u[100];
	int nj = 1;
	double de;
	fstream ifile;
	ifile.open("c:\file.txt", ios::in);
	if (!ifile)
	{
		cout << "open fail";
		system("pause");
		return 1;
	}
	string line;
	while (std::getline(ifile, line))
	{
		ifile >> itype[nj] >> ifrom[nj] >> ito[nj]
			>> value[nj];
		nj++;
		if (itype[nj] == 'v')
		{
			de = value[nj];
		}
		if (itype[nj] == 'r')
		{
			if (ifrom[nj] != 0 && ito[nj] != 0)
			{
				int ntemp;
				ntemp = (ifrom[nj] < ito[nj]) ? ifrom[nj] : ito[nj];
				r[2 * ntemp - 1] = value[nj];
			}
			else
			{
				int ntemp;
				ntemp = (ifrom[nj] > ito[nj]) ? ifrom[nj] : ito[nj];
				r[2 * ntemp - 2] = value[nj];
			}
		}
		{
			if (ito[nj] < ifrom[nj])
			{
				if (ifrom[nj] > nMax)
				{
					nMax = ifrom[nj];
				}
			}
			else if (ito[nj] > ifrom[nj])
			{
				if (ito[nj] > nMax)
				{
					nMax = ito[nj];
				}
			}
		}
	}
	nn = 2 * nMax - 1;


	/*cout << "Input r[i],i = 1,……,n" << endl;
	for (nj = 1; nj <= nn; nj++)
	{
		cin >> r[nj];//保证下标从1开始
	}
	for (nj = 1; nj <= nn; nj++)
	{
		cout << "r[" << nj << "]=" << r[nj] << endl;
	}*/
	u[nn] = 1.0;
	i[nn] = u[nn] / r[nn];
	i[nn - 1] = i[nn];
	u[nn - 1] = r[nn - 1] * i[nn - 1];
	for (nk = nn - 2; nk >= 2; nk = nk - 2)
	{
		u[nk] = u[nk + 1] + u[nk + 2];
		i[nk] = u[nk] / r[nk];
		i[nk - 1] = i[nk] + i[nk + 1];
		u[nk - 1] = r[nk - 1] * i[nk - 1];
	}
	dee = u[1] + u[2];
	//以下是当电势e为给定值的时候，计算各支路电流和电压
	dq = de / dee;
	cout << "branch no.current voltage" << endl;
	for (nj = 1; nj <= nn; nj++)
	{
		u[nj] = dq*u[nj];
		i[nj] = dq*i[nj];
		cout << " " << nj;
		cout.width(14);
		cout.precision(5);
		cout << i[nj];

		cout.width(14);
		cout.precision(4);
		cout << u[nj] << endl;
	}
	system("pause");
	getchar();
	return 0;
}