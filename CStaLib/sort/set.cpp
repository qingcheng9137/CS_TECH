///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////集合操作的简单示例
//
//#include "stdafx.h"
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	int b[] = { 1, 2, 3, 6 };
//
//	list<int>l1(a, a + 5);
//	list<int>l2(b, b + 4);
//
//	cout << "原始l1:";
//	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "原始l2:";
//	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	//包含
//	/*注意：此时a,b都是升序的，因为includes是按照升序<判断的，如果是降序判断，需要
//	  运用includes第二个模板函数（）第三个参数是greater<int>()处理*/
//	/*在实例中运用的时候，只需要在类中重载<即可，而不需要重载==/
//	bool bRet = includes(l1.begin(), l1.end(), l2.begin(), l2.end());
//	cout << "l1包含l2吗？" << (bRet == 1 ? "Yes" : "No") << endl;
//
//	//l1并l2
//	list<int>l3;
//	set_union(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(l3));
//	cout << "l1并l2:";
//	copy(l3.begin(), l3.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	//l1交l2
//	list<int>l4;
//	set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(l4));
//	cout << "l1交l2:";
//	copy(l4.begin(), l4.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	//l1 merge l2
//	list<int>l5;
//	merge(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(l5));
//	cout << "l1 merge l2:";
//	copy(l5.begin(), l5.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	system("pause");
//	return 0;
//}