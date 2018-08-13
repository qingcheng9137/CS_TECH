///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////利用random_shuttle实现一个随机数生成器
//
//#include "stdafx.h"
//
//class MyRand
//{
//public:
//	int operator()(int n)	//n∈[1，v.size()]
//	{
//		srand(time(NULL));
//		return rand() % n;	//保证生成的随机数不大于n
//	}
//};
//
//int main()
//{
//	int a[] = { 10,23,14,56,49,50,69,48,29 };
//	vector<int>v(a, a + 5);
//	MyRand obj;
//	random_shuffle(v.begin(), v.end(), obj);
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	system("pause");
//	return 0;
//}