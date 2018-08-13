///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////演示二分检索的几个主要函数
////已知list有序容器{1,2,2,3,3,3,4,4,4,4,}
////1.有没有元素5？
////2.第一个元素2的位置？
////3.最后一个元素3的位置？
////一共有多少个元素4？
//
//#include "stdafx.h"
//
//int main()
//{
//	int a[] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4 };
//	list<int>l(a, a + 10);
//	cout << "原始数据：";
//	copy(l.begin(), l.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	/*判断函数binary_search*/
//	bool bExist = binary_search(l.begin(), l.end(), 5);
//	cout << "有元素5吗？" << (bExist == 0 ? "false" : "true") << endl;
//
//	/*求第一个元素2的位置*/
//	list<int>::iterator first2 = lower_bound(l.begin(), l.end(), 2);
//	if (first2 != l.end())
//	{
//		/*使用distance函数*/
//		cout << "第一个元素2的位置：" << distance(l.begin(), first2) << endl;
//	}
//
//	/*求最后一个元素3的位置*/
//	list<int>::iterator last3 = upper_bound(l.begin(), l.end(), 3);
//	if (last3 != l.end())
//	{
//		cout << "最后一个元素3的位置：" << distance(l.begin(), --last3) << endl;
//	}
//
//	/*这一部分存在bug，first4,last4没有定义*/
//	/*pair<list<int>::iterator, list<int>::iterator>p = equal_range(l.begin(), l.end(), 4);
//	if (p.first != p.second)
//	{
//		int nSize = distance(first4, last4);
//	}*/
//}
