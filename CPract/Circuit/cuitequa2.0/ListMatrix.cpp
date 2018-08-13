/*************************************************************************************/
/*************************************** 2018.4.01 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//采用表矩阵法，描述输入的电路拓扑信息，并且对电路求解
//容器采用vector
//test_input
/*2 2*/
/*r 2 1 1 0 2 0*/

#include "iostream"
using namespace std;

#include "Eigen/Dense"
#include <Eigen/Cholesky>
using namespace Eigen;

#include "fstream"	//计划使用文件输入输出
#include "math.h"
#include "vector"

const int nsizeA = 10;
const int nsizeB = 20;
typedef vector<char>CHAR_VEC;
typedef vector<int>INT_VEC;
typedef vector<double>DOU_VEC;
//typedef vector<vector<double>>MAR_VEC;
int nNode;
int nBran;
int nNmu;						//独立节点数目
CHAR_VEC itype(nsizeA);			//定义与原件类型
INT_VEC ifrom(nsizeA);			//定义原件起始节点
INT_VEC ito(nsizeA);			//定义原件末端节点
INT_VEC icont(nsizeA);			//定义控制支路号
DOU_VEC value(nsizeA);			//定义原件值（基本是电阻）
DOU_VEC el(nsizeA);				//定义独立电压
DOU_VEC jl(nsizeA);				//定义独立电源
MatrixXf a(nsizeA, nsizeA);		//定义关联矩阵
MatrixXf yb(nsizeA, nsizeA);	//定义支路导纳矩阵
MatrixXf eb(nsizeA, nsizeA);	//定义支路电压源矩阵
MatrixXf jb(nsizeA, nsizeA);	//定义支路电流源矩阵
MatrixXf un(nsizeA, nsizeA);	//定义节点电压矩阵
MatrixXf ub(nsizeA, nsizeA);	//定义支路电压矩阵
MatrixXf ib(nsizeA, nsizeA);	//定义支路电流矩阵

								//Enter function:
int Enter()
{
	fstream fs;
	fs.open("test_input.txt", ios::in);		//打开输入文件
	if (!fs)
	{
		cout << "fail opening" << endl;
		return(1);
	}
	cout << "Please input data: node = ? branch = ?" << endl;
	fs >> nNode >> nBran;
	//初始化矩阵
	for (int ni = 1; ni <= nsizeA - 1; ni++)
	{
		for (int nj = 1; nj <= nsizeA - 1; nj++)
		{
			a(ni, nj) = 0.0;
			yb(ni, nj) = 0.0;
			eb(ni, nj) = 0.0;
			jb(ni, nj) = 0.0;
		}
	}
	cout << "Enter itype[j],ifrom[j],ito[j],value[j]";
	cout << "icont[j],el[j],jl[j],for j = 1 TO branches" << endl;
	for (int nj = 1; nj <= nBran; nj++)
	{
		fs >> itype[nj] >> ifrom[nj] >> ito[nj] >> value[nj]
			>> icont[nj] >> el[nj] >> jl[nj];
		//	确定关联矩阵a
		a(ifrom[nj], nj) = 1.0;
		a(ito[nj], nj) = -1.0;
		//	确定支路导纳矩阵yb
		if (itype[nj] == 'g')
		{
			yb(nj, nj) = value[nj];
		}
		else if (itype[nj] == 'r')
		{
			yb(nj, nj) = 1.0 / value[nj];
		}
		else if (itype[nj] == 'v')
		{
			yb(nj, icont[nj]) = value[nj];
		}
		if (itype[nj] != 'v')
		{
			eb(nj, 1) = el[nj];
			jb(nj, 1) = jl[nj];
		}
	}
	return 0;
}

//Compute function:
int Compute()
{
	MatrixXf at(nsizeA, nsizeA);		//定义关联矩阵a的转置矩阵
	MatrixXf ayb(nsizeA, nsizeA);		//定义关联矩阵和支路导纳矩阵乘积
	MatrixXf yn(nsizeA, nsizeA);		//定义节点导纳矩阵
	MatrixXf aybeb(nsizeA, nsizeA);		//定义关联矩阵a和支路导纳矩阵以及支路电压矩阵的乘积
	MatrixXf ajb(nsizeA, nsizeA);		//定义关联矩阵a和支路电流矩阵的乘积
	MatrixXf jn(nsizeA, nsizeA);		//定义节点电流矩阵
	MatrixXf yn_(nsizeA, nsizeA);		//定义yn的逆矩阵
	nNmu = nNode - 1;
	at = a.transpose();
	ayb = a*yb;				//求a*yb
	yn = a*yb*at;			//求yn
	aybeb = a*yb*eb;		//求a*yb*eb
	ajb = a*jb;				//求a*jb
	jn = a*(jb - yb*eb);	//求jn
	yn_ = yn.inverse();		//求yn的逆
	un = yn_*jn;			//求un
	ub = at*un;				//求ub

							//求jb
	for (int nj = 1; nj <= nBran; nj++)
	{
		ib(nj, 1) = -jb(nj, 1) + yb(nj, nj)*(ub(nj, 1) + eb(nj, 1));
	}
	return(0);
}

//Printout function:
int Printout()
{
	cout << "The node voltages " << endl;
	for (int nj = 1; nj <= nNmu; nj++)
	{
		cout << nj << " " << un(nj, 1) << endl;
	}
	cout << "Branches voltages and currents are: " << endl;
	for (int nj = 1; nj <= nBran; nj++)
	{
		cout << " " << nj;
		cout.width(16); cout.precision(5);
		cout << ub(nj, 1);
		cout.width(16); cout.precision(5);
		cout << ib(nj, 1) << endl;
	}
	return(0);
}

//main:function
int main()
{
	Enter();
	Compute();
	Printout();
	system("pause");
	return 0;
}
