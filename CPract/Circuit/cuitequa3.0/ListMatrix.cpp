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
/*声明三个矩阵*/
MatrixXf M_ListM(2 * nBran + nNode, 2 * nBran + nNode);
MatrixXf M_Col(2 * nBran + nNode, 1);
MatrixXf M_Ans(2 * nBran + nNode, 1);

typedef vector<char> VEC_CHA;
typedef vector<int> VEC_INT;
typedef vector<double> VEC_DOU;
//typedef vector<CResistor> CRE_VEC;
//typedef vector<CVoltage> CVO_VEC;

/*enter:输入函数*/
int enter()
{
	/*声明变量*/
	VEC_CHA vtype;
	VEC_INT vfr;
	VEC_INT vto;
	VEC_DOU vva;
	//CRE_VEC vresistor;
	int nMax = 1;
	/*支路数*/
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
	/*初始化M_Col*/
	for (int ni = 1; ni <= 2 * nBran + nNode; ni++)
	{
		M_Col(ni, 1) = 0;
	}

	/*初始化矩阵*/
	/*I  0 -A^T
	Yb Zb 0
	0  A  0*/

	/*I,Yb*/
	for (int ni = 1; ni <= nBran; ni++)
	{
		M_ListM(ni, ni) = 1;
		M_ListM(ni + nBran, ni) = 1;
	}
	/*第一行的0*/
	for (int nj = nBran + 1; nj <= 2 * nBran; nj++)
	{
		for (int ni = 1; ni <= nBran; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*-A^T初始化*/
	for (int nj = 2 * nBran + 1; nj <= 2 * nBran + nNode; nj++)
	{
		for (int ni = 1; ni <= nBran; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*A^T初始化*/
	for (int nj = 2 * nBran + 1; nj <= 2 * nBran + nNode; nj++)
	{
		for (int ni = nBran + 1; ni <= 2 * nBran; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*第二行的0*/
	for (int nj = 2 * nBran + 1; nj <= 2 * nBran + nNode; nj++)
	{
		for (int ni = nBran + 1; ni <= 2 * nBran; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*第三行最后一个0*/
	for (int nj = 1; nj <= nBran; nj++)
	{
		for (int ni = 2 * nBran; ni <= 2 * nBran + nNode; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*第三行第一个0*/
	for (int nj = 2 * nBran + 1; nj <= 2 * nBran + nNode; nj++)
	{
		for (int ni = 2 * nBran + 1; ni <= 2 * nBran + nNode; ni++)
		{
			M_ListM(ni, nj) = 0;
		}
	}
	/*读入文件*/
	for (int nj = 1; nj <= nBran; nj++)
	{
		fin >> vtype[nj] >> vfr[nj] >> vto[nj] >> vva[nj];
		/*读入-A^T,A^T*/
		M_ListM(2 * nBran + vfr[nj], nj + nBran) = 1.0;
		M_ListM(2 * nBran + vto[nj], nj + nBran) = -1.0;
		M_ListM(nj, vfr[nj] + 2 * nBran) = -1.0;
		M_ListM(nj, vto[nj] + 2 * nBran) = 1.0;
		/*节点数遍历*/
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
		/*元件类型*/
		if (vtype[nj] == 'r')
		{
			/*Zb矩阵中填入-R*/
			M_ListM(nBran + nj, nBran + nj) = -vva[nj];
		}
		else if (vtype[nj] == 'v')
		{
			/*右侧列向量填满*/
			M_Col(2 * nBran + nj, 1)= vva[nj];
			/*Zb矩阵中填入0（对应电压源）*/
			M_ListM(nBran + nj, nBran + nj) = 0;
		}
	}
	/*得到节点数*/
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