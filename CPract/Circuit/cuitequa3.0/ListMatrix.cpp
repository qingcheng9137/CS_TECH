/*************************************************************************************/
/*************************************** 2018.4.02 ***********************************/
/*************************************** 2018.4.03 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

#include "iostream"
#include "fstream"
#include "vector"
using namespace std;

#include "Eigen/Dense"
using namespace Eigen;

const int nsize = 10;

int nNode;
int nBran;
/*������������*/
MatrixXf M_ListM(2 * nBran + nNode, 2 * nBran + nNode);
MatrixXf M_Col(2 * nBran + nNode, 1);
MatrixXf M_Ans(2 * nBran + nNode, 1);

typedef vector<char> VEC_CHA;
typedef vector<int> VEC_INT;
typedef vector<double> VEC_DOU;
//typedef vector<CResistor> CRE_VEC;
//typedef vector<CVoltage> CVO_VEC;

/*enter:���뺯��*/
int enter()
{
	/*��������*/
	VEC_CHA vtype;
	VEC_INT vfr;
	VEC_INT vto;
	VEC_DOU vva;
	//CRE_VEC vresistor;
	int nMax = 1;
	/*֧·��*/
	fstream fin("test_input2.txt", ios::in);
	if (!fin)
	{
		cerr << "can not open file" << endl;
		return -1;
	}
	char c;
	int lineCnt = 0;
	while (fin.get(c))
	{
		if (c == '\n')
			lineCnt++;
	}
	nBran = lineCnt + 1;
	/*��ʼ��M_Col*/
	for (int ni = 1; ni <= 2 * nBran + nNode; ni++)
	{
		M_Col(ni, 1) = 0;
	}

	/*��ʼ������*/
	/*I  0 -A^T
	Yb Zb 0
	0  A  0*/

	/*I,Yb*/
	for (int ni = 1; ni <= nBran; ni++)
	{
		M_ListM(ni, ni) = 1;
		M_ListM(ni + nBran, ni) = 1;
	}
	/*��һ�е�0*/
	for (int nj = nBran + 1; nj <= 2 * nBran; nj++)
	{
		for (int ni = 1; ni <= nBran; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*-A^T��ʼ��*/
	for (int nj = 2 * nBran + 1; nj <= 2 * nBran + nNode; nj++)
	{
		for (int ni = 1; ni <= nBran; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*A^T��ʼ��*/
	for (int nj = 2 * nBran + 1; nj <= 2 * nBran + nNode; nj++)
	{
		for (int ni = nBran + 1; ni <= 2 * nBran; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*�ڶ��е�0*/
	for (int nj = 2 * nBran + 1; nj <= 2 * nBran + nNode; nj++)
	{
		for (int ni = nBran + 1; ni <= 2 * nBran; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*���������һ��0*/
	for (int nj = 1; nj <= nBran; nj++)
	{
		for (int ni = 2 * nBran; ni <= 2 * nBran + nNode; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*�����е�һ��0*/
	for (int nj = 2 * nBran + 1; nj <= 2 * nBran + nNode; nj++)
	{
		for (int ni = 2 * nBran + 1; ni <= 2 * nBran + nNode; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*�����ļ�*/
	for (int nj = 1; nj <= nBran; nj++)
	{
		fin >> vtype[nj] >> vfr[nj] >> vto[nj] >> vva[nj];
		/*����-A^T,A^T*/
		M_ListM(2 * nBran + vfr[nj], nj + nBran) = 1.0;
		M_ListM(2 * nBran + vto[nj], nj + nBran) = -1.0;
		M_ListM(nj, vfr[nj] + 2 * nBran) = -1.0;
		M_ListM(nj, vto[nj] + 2 * nBran) = 1.0;
		/*�ڵ�������*/
		{
			if (nMax < vfr[nj])
			{
				nMax = vfr[nj];
			}
			else if (nMax < vto[nj])
			{
				nMax = vto[nj];
			}
		}
		/*Ԫ������*/
		if (vtype[nj] == 'r')
		{
			/*Zb����������-R*/
			M_ListM(nBran + nj, nBran + nj) = -vva[nj];
		}
		else if (vtype[nj] == 'v')
		{
			/*�Ҳ�����������*/
			M_Col(2 * nBran + nj, 1)= vva[nj];
			/*Zb����������0����Ӧ��ѹԴ��*/
			M_ListM(nBran + nj, nBran + nj) = 0;
		}
	}
	/*�õ��ڵ���*/
	nNode = nMax;
	return 0;
}

int Compute()
{
	M_Ans = M_ListM.lu().solve(M_Col);
	return 0;
}

int Printout()
{
	cout << "The node voltages:" << endl;
	for (int nj = 1; nj <= nNode - 1; nj++)
	{
		cout << nj << " " << M_Ans(nj, 1) << endl;
	}
	return 0;
}

int main()
{
	enter();
	Compute();
	Printout();
	system("pause");
	return 0;
}