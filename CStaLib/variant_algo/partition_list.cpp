///*************************************************************************************/
///*************************************** 2018.4.10 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////ʹ��partition()����ʵ�֣�list������������С��4���������ֳ������֣����������Ԫ��С��4
////�������ʵ�������������
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
//	srand((unsigned)time(NULL));		//��Ҫͷ�ļ�stdio.h
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