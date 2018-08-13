///*************************************************************************************/
///*************************************** 2018.4.10 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////使用partition()函数实现：list整形容器按照小于4的条件划分成两部分，并求出多少元素小于4
////这个程序还实现了随机数数组
//
//#include "stdafx.h"
//#include "ctime"
//#include "stdio.h"
//
//int main()
//{
//	int n;
//	cout << "Input n:" << endl;
//	cin >> n;
//	srand((unsigned)time(NULL));		//需要头文件stdio.h
//	int* a = new int[n];
//	for (int ni = 0; ni < n; ni++)
//	{
//		a[ni] = rand();
//	}
//	cout << "The random array is:" << endl;
//	copy(a, a + n, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "Input the less number" << endl;
//	int c;
//	cin >> c;
//	list<int>v(a, a + n);
//	list<int>::iterator mid = partition(v.begin(), v.end(), bind2nd(less<int>(), c));
//	int nSize = distance(v.begin(), mid);
//	cout << "The answer is: ";
//	cout << nSize << endl;
//	delete a;
//	system("pause");
//	return 0;
//}