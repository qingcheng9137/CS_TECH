/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/


#include<iostream>
#include"operator.h"
using namespace std;

void Opera::get()
{
	cout << "��������Ҫ�����ʽ�ӣ�" << endl;
	cin >> a >> c >> b;
}
void Opera::add()
{
	cout << a + b << endl;
}

void Opera::div()
{
	cout << a / b << endl;
}

void Opera::mul()
{
	cout << a*b << endl;
}

void Opera::red()
{
	cout << a - b << endl;
}

void Opera::quyu()
{
	cout << a%b << endl;
}