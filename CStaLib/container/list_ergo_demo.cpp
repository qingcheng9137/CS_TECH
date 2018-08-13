/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//list遍历,正，反两个方向
//展示了begin,end,rbegin,rend这些函数

/*#include "iostream"
#include "list"

using namespace std;

typedef list<int>LIST_INT;

int main()
{
	LIST_INT test;
	for (int ni = 0; ni < 5; ni++)
	{
		test.push_back(ni);
	}
	//show
	LIST_INT::iterator it = test.begin();
	for (; it != test.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	LIST_INT::reverse_iterator rit = test.rbegin();
	for (; rit != test.rend(); rit++)
	{
		cout << *rit << "\t";
	}
	system("pause");
	return 0;
}*/