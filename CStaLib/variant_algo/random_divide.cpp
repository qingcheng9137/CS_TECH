///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////一元随机函数类。例如容器中有total个元素，要求[0,total/2]随机变化，另外一部分随机变化，但是
////不可以越界
////出现了bug:随机数组越界
//
//#include "stdafx.h"
//
//class MyRand
//{
//	int total;
//public:
//	MyRand(int total)
//	{
//		this->total = total;
//	}
//	int operator()(int n)
//	{
//		srand(time(NULL));
//		int m = rand() % n;
//		if (n >= total / 2 && m < total / 2)
//		{
//			//n是后半部分的索引，m随机数在[0,total/2]
//			m += total / 2;
//			//保证m是后半部分的索引
//		}
//		return m;
//	}
//};
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	vector<int>v(a, a + 9);
//
//	MyRand obj(9);
//	char ch;
//	while ((ch = _getch()) != 'a')
//	{
//		random_shuffle(v.begin(), v.end(), obj);
//		copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}