///*************************************************************************************/
///*************************************** 2018.4.10 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////list�����л��ƺ����÷�
////����list�����ڲ���������˫���������Ԫ��4�ĵ�������λ�ò�����middle=v2.begin()+3��ʾ��ֻ�����������
////����vector�еĵ��������ܹ�ִ��operator+(n)�Ĳ��������ǿ�����ϵͳ����advanceʵ��
//
//#include "stdafx.h"
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8 };
//	cout << "ԭʼ����a=" << endl;
//	copy(a, a + 8, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	list<int>v1(a, a + 8);
//	list<int>::iterator middle = v1.begin();
//	advance(middle, 3);
//	rotate(v1.begin(), middle, v1.end());
//	cout << "��4Ϊ���Ļ���(rotate):";
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	list<int>v2(a, a + 8);
//	list<int>v3;
//	middle = v2.begin();
//	cout << "��4Ϊ���Ļ���(rotate):";
//	advance(middle, 3);
//	rotate_copy(v2.begin(), middle, v2.end(), back_inserter(v3));
//	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	system("pause");
//	return 0;
//}