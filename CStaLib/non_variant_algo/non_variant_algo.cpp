/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//7个查询函数的应用
//另外还有两个count计数函数
//以及equal(),mismatch()这两个比较函数（第二个的作用是返回第一个相异的元素）

/*#include "iostream"
#include "algorithm"

using namespace std;

bool mygreater(int nm)
{
	return nm > 4;
}

int main()
{
	int a[] = { 1,2,3,3,4,5,5,6,7,8,1,2,2,3 };
	int nSize = sizeof(a) / sizeof(int);

	cout << "原始数组：" << endl;
	for (int ni = 0; ni < nSize; ni++)
	{
		cout << a[ni] << "\t";
	}
	cout << endl << endl;
	int *p1 = find(a, a + nSize, 3);//find()找到第一次出现的位置
	if (p1 != a + nSize)
	{
		cout << "(find)首次等于3的位置：" << p1 - a << "\t值：" << *p1 << endl;
	}
	int *p2 = find_if(a, a + nSize, mygreater);//find_if和find作用一样，但是参数是一个bool函数
	if (p2 != a + nSize)
	{
		cout << "(find_if)首次大于4的位置：" << p2 - a << "\t值：" << *p2 << endl;
	}
	int b[] = { 10,12,6 };
	int nSize2 = sizeof(b) / sizeof(int);
	int *p3 = find_first_of(a, a + nSize, b, b + nSize2);
	if (p3 != a + nSize)
	{
		cout << "(find_first_of)首次在a数组中发现b数组[10,12,6]中元素位置："
			<< p3 - a << "\t值" << *p3 << endl;//find_first_if涉及到两个数组
	}
	int *p4 = adjacent_find(a, a + nSize);
	if (p4 != a + nSize)
	{
		cout << "(adjacent_find)首次相邻元素相同位置：" << p4 - a << "\t值"
			<< *p4 << endl;//adjacent_find寻找相邻元素
	}
	
	int c[] = { 2,3 };
	int nSize3 = sizeof(c) / sizeof(int);
	int *p5 = find_end(a, a + nSize, c, c + nSize3);
	if (p5 != a + nSize)
	{
		cout << "最后一次匹配c数组[2,3]的位置：" << p5 - a
			<< endl;
	}

	int *p6 = search(a, a + nSize, c, c + nSize3);
	if (p6 != a + nSize)
	{
		cout << "首次匹配c数组[2,3]位置：" << p6 - a << endl;
	}

	int *p7 = search_n(a, a + nSize, 3, 2);
	if (p7 != a + nSize)
	{
		cout << "首次出现3个2的位置：" << p7 - a << endl;
	}
	system("pause");
	return 0;
}*/