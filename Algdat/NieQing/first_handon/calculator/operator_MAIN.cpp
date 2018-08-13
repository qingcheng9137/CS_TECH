/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

#include<iostream>
#include"operator.h"

using namespace std;

int main()
{
	Opera o;
	o.get();
	switch (o.get_c())
	{
	case '+':o.add(); break;
	case '-':o.red(); break;
	case '*':o.mul(); break;
	case '/':o.div(); break;
	case '%':o.quyu(); break;
	}
	system("pause");
	return 0;
}