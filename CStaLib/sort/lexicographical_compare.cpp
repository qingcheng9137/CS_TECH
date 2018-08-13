///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////展示词典比较函数,比较两个序列对应的词典元素的先后顺序
////lexicographical_compare是按照词典序列比较的函数框架，可以方便地扩展
//
//#include "stdafx.h"
//
//bool mycompare(vector<int>&v1, vector<int>&v2)
//{
//	return lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end());
//}
//
//int main()
//{
//	int a[] = { 1, 2, 3 };
//	int b[] = { 10, 4, 5, 6 };
//	int c[] = { 1, 9, 4, 5 };
//
//	vector<int>v[3] = { vector<int>(a, a + 3), vector<int>(b, b + 4), vector<int>(c, c + 4) };
//	cout << "原始三个向量：" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		copy(v[i].begin(), v[i].end(), ostream_iterator<int>(cout, "\t"));
//		cout << endl;
//	}
//
//	sort(v, v + 3, mycompare);
//	cout << "排序后（字典排序），3个向量：" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		copy(v[i].begin(), v[i].end(), ostream_iterator<int>(cout, "\t"));
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}