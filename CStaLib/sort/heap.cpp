///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////heap相关操作
////如果有一个关键码的集合K={k0,k1,k2,…kn}，把它的所有元素按照完全二叉树的顺序存储方式存放在
////一个一维数组中，并且满足ki<=k(2i+1)且ki<=k(2i+2)（或者都大于等于）
//
//#include "stdafx.h"
//
//int main()
//{
//	int a[] = { 1, 4, 2, 10, 6, 5, 9, 7, 8, 3 };
//	cout << "原始a[]: ";
//	copy(a, a + 10, ostream_iterator<int>(cout, "\t"));
//	
//	vector<int>v1(a, a + 10);
//	/*这里调用了make_heap的第二个参数模板。这个函数的作用是把随机迭代器之间的
//	  元素按照operator<排序，形成一个堆*/
//	make_heap(v1.begin(), v1.end(), greater<int>());	//建立一个最小堆
//	cout << "最小堆: ";
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	vector<int>v2(a, a + 10);
//	make_heap(v2.begin(), v2.end(), less<int>());	//建立一个最大堆
//	cout << "最大堆: ";
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	/*这个函数的功能：并不是真的把最大或者最小的元素从堆中弹出来，而是重新排序堆。
//	  它先将first和last交换，然后将剩下的[first,last-1)的数据按照operator<
//	  再做一个堆*/
//	pop_heap(v2.begin(), v2.end());
//	cout << "堆中的最大值：";
//	cout << *(v2.end() - 1) << endl;
//	pop_heap(v2.begin(), v2.end() - 1);
//	cout << "堆中的次大值：";
//	cout << *(v2.end() - 2) << endl;
//
//	system("pause");
//	return 0;
//}