///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////���ϲ����ļ�ʾ��
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
//	cout << "ԭʼl1:";
//	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "ԭʼl2:";
//	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	//����
//	/*ע�⣺��ʱa,b��������ģ���Ϊincludes�ǰ�������<�жϵģ�����ǽ����жϣ���Ҫ
//	  ����includes�ڶ���ģ�庯������������������greater<int>()����*/
//	/*��ʵ�������õ�ʱ��ֻ��Ҫ����������<���ɣ�������Ҫ����==/
//	bool bRet = includes(l1.begin(), l1.end(), l2.begin(), l2.end());
//	cout << "l1����l2��" << (bRet == 1 ? "Yes" : "No") << endl;
//
//	//l1��l2
//	list<int>l3;
//	set_union(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(l3));
//	cout << "l1��l2:";
//	copy(l3.begin(), l3.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	//l1��l2
//	list<int>l4;
//	set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(l4));
//	cout << "l1��l2:";
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