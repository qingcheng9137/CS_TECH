///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////��ת������ʾ��
//
//#include "stdafx.h"
//
//using namespace std;
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	
//	vector<int>v1(a, a + 5);
//	cout << "ԭʼ����v1:";
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	cout << "��ת����v1(reverse):";
//	reverse(v1.begin(), v1.end());
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	
//	vector<int>v2(a, a + 5);
//	reverse_copy(v2.begin(), v2.end(), v2.begin());
//	cout << "��ת����v2-->v2(reverse_copy):";
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	vector<int>v3(a, a + 5);
//	vector<int>v4;
//	reverse_copy(v3.begin(), v3.end(), back_inserter(v4));
//	cout << "��ת����v3-->v4(reverse_copy):";
//	copy(v4.begin(), v4.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	system("pause");
//	return 0;
//}