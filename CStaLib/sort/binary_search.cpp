///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////��ʾ���ּ����ļ�����Ҫ����
////��֪list��������{1,2,2,3,3,3,4,4,4,4,}
////1.��û��Ԫ��5��
////2.��һ��Ԫ��2��λ�ã�
////3.���һ��Ԫ��3��λ�ã�
////һ���ж��ٸ�Ԫ��4��
//
//#include "stdafx.h"
//
//int main()
//{
//	int a[] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4 };
//	list<int>l(a, a + 10);
//	cout << "ԭʼ���ݣ�";
//	copy(l.begin(), l.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	/*�жϺ���binary_search*/
//	bool bExist = binary_search(l.begin(), l.end(), 5);
//	cout << "��Ԫ��5��" << (bExist == 0 ? "false" : "true") << endl;
//
//	/*���һ��Ԫ��2��λ��*/
//	list<int>::iterator first2 = lower_bound(l.begin(), l.end(), 2);
//	if (first2 != l.end())
//	{
//		/*ʹ��distance����*/
//		cout << "��һ��Ԫ��2��λ�ã�" << distance(l.begin(), first2) << endl;
//	}
//
//	/*�����һ��Ԫ��3��λ��*/
//	list<int>::iterator last3 = upper_bound(l.begin(), l.end(), 3);
//	if (last3 != l.end())
//	{
//		cout << "���һ��Ԫ��3��λ�ã�" << distance(l.begin(), --last3) << endl;
//	}
//
//	/*��һ���ִ���bug��first4,last4û�ж���*/
//	/*pair<list<int>::iterator, list<int>::iterator>p = equal_range(l.begin(), l.end(), 4);
//	if (p.first != p.second)
//	{
//		int nSize = distance(first4, last4);
//	}*/
//}
