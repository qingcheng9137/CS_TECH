///*************************************************************************************/
///*************************************** 2018.4.10 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////list容器中环绕函数用法
////由于list容器内部迭代器是双向迭代器，元素4的迭代器的位置不能用middle=v2.begin()+3表示，只有随机迭代器
////比如vector中的迭代器才能够执行operator+(n)的操作，但是可以用系统函数advance实现
//
//#include "stdafx.h"
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8 };
//	cout << "原始数据a=" << endl;
//	copy(a, a + 8, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	list<int>v1(a, a + 8);
//	list<int>::iterator middle = v1.begin();
//	advance(middle, 3);
//	rotate(v1.begin(), middle, v1.end());
//	cout << "以4为中心环绕(rotate):";
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	list<int>v2(a, a + 8);
//	list<int>v3;
//	middle = v2.begin();
//	cout << "以4为中心环绕(rotate):";
//	advance(middle, 3);
//	rotate_copy(v2.begin(), middle, v2.end(), back_inserter(v3));
//	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	system("pause");
//	return 0;
//}