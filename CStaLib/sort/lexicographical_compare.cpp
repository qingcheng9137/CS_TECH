///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////չʾ�ʵ�ȽϺ���,�Ƚ��������ж�Ӧ�Ĵʵ�Ԫ�ص��Ⱥ�˳��
////lexicographical_compare�ǰ��մʵ����бȽϵĺ�����ܣ����Է������չ
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
//	cout << "ԭʼ����������" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		copy(v[i].begin(), v[i].end(), ostream_iterator<int>(cout, "\t"));
//		cout << endl;
//	}
//
//	sort(v, v + 3, mycompare);
//	cout << "������ֵ����򣩣�3��������" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		copy(v[i].begin(), v[i].end(), ostream_iterator<int>(cout, "\t"));
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}