///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////�ϲ�����ʾ��
////�˴�a,b�������򣬽��Ҳ�����򣬲��ܹ�һ������һ������ͬ��inplace_merge��������
////Ҳ����ͬ��
//
//#include "stdafx.h"
//
//int main()
//{
//	int a[] = { 1, 3, 5, 7 };
//	int b[] = { 2, 4, 6, 8 };
//	int result[8];
//	cout << "ԭʼa[]:" << endl;
//	copy(a, a + 4, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "ԭʼb[]:" << endl;
//	copy(b, b + 4, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	merge(a, a + 4, b, b + 4, result);
//	//����a,b���ǽ������������Ӧ���ǣ�merge(a,b,result,greater<int>())
//	cout << "a,b merge֮��" << endl;
//	copy(result, result + 8, ostream_iterator<int>(cout, "\t"));
//	cout << endl << endl;
//
//	int c[8] = { 1, 3, 5, 8, 2, 5, 6, 7 };
//	cout << "ԭʼc[]��" << endl;
//	copy(c, c + 8, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	inplace_merge(c, c + 4, c + 8);
//	cout << "c[] inplace_merge��" << endl;
//	copy(c, c + 8, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	system("pause");
//	return 0;
//}