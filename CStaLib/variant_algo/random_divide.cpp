///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////һԪ��������ࡣ������������total��Ԫ�أ�Ҫ��[0,total/2]����仯������һ��������仯������
////������Խ��
////������bug:�������Խ��
//
//#include "stdafx.h"
//
//class MyRand
//{
//	int total;
//public:
//	MyRand(int total)
//	{
//		this->total = total;
//	}
//	int operator()(int n)
//	{
//		srand(time(NULL));
//		int m = rand() % n;
//		if (n >= total / 2 && m < total / 2)
//		{
//			//n�Ǻ�벿�ֵ�������m�������[0,total/2]
//			m += total / 2;
//			//��֤m�Ǻ�벿�ֵ�����
//		}
//		return m;
//	}
//};
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	vector<int>v(a, a + 9);
//
//	MyRand obj(9);
//	char ch;
//	while ((ch = _getch()) != 'a')
//	{
//		random_shuffle(v.begin(), v.end(), obj);
//		copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}