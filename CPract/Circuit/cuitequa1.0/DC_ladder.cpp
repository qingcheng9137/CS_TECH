/*************************************************************************************/
/*************************************** 2018.3.30 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//直流梯形网络计算

#include "iostream"
#include "vector"

using namespace std;

int main()
{
	int nn;
	int nj;
	int nk;
	double de;
	double dee;
	double dq;
	cout << "Please input data,n = ?,e = ?" << endl;
	cin >> nn >> de;
	cout << "n = " << nn << endl;
	cout << "e = " << de << endl;
	vector<double>r(nn + 1);//此动态数组的参数可以是变量
	vector<double>i(nn + 1);
	vector<double>u(nn + 1);
	cout << "Input r[i],i = 1,……,n" << endl;
	for (nj = 1; nj <= nn; nj++)
	{
		cin >> r[nj];//保证下标从1开始来
	}
	for (nj = 1; nj <= nn; nj++)
	{
		cout << "r[" << nj << "]=" << r[nj] << endl;
	}
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
	return 0;
}
