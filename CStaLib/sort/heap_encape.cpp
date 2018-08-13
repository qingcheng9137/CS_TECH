///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////��һ����4���Ѳ���������װ�����ҽ��в���
//
//#include "stdafx.h"
//
///*������������һ��Ĭ���������ѵ�ģ��*/
//template<class T,class Pred=less<T>>
//class MyHeap
//{
//	Pred pr;
//	vector<T>v;
//	int ValidSize;
//public:
//	/*���ù��캯��������*/
//	MyHeap(T t[], int nSize) :v(t, t + nSize)
//	{
//		ValidSize = nSize;
//		make_heap(v.begin(), v.begin() + ValidSize, pr);
//	}
//
//	/*���������µ�Ԫ��*/
//	void Insert(const T&t)
//	{
//		v.push_back(t);
//		ValidSize++;
//		push_heap(v.begin(), v.begin() + ValidSize, pr);
//	}
//
//	/*�õ�������������С��Ԫ��*/
//	bool Remove(T&result)
//	{
//		if (ValidSize == 0)
//		{
//			return false;
//		}
//		pop_heap(v.begin(), v.begin() + ValidSize, pr);
//		result = *(v.begin() + ValidSize - 1);
//		ValidSize--;
//		return true;
//	}
//
//	/*����*/
//	void Sort()
//	{
//		if (ValidSize > 0)
//		{
//			sort_heap(v.begin(), v.begin() + ValidSize);
//		}
//	}
//
//	/*�ж϶��Ƿ�Ϊ��*/
//	bool IsEmpty()
//	{
//		return ValidSize == 0;
//	}
//
//	/*����*/
//	void Display()
//	{
//		copy(v.begin(), v.begin() + ValidSize, ostream_iterator<T>(cout, "\t"));
//	}
//};
//
///*���Դ���*/
//int main()
//{
//	int a[] = { 1, 4, 2, 10, 6 };
//	int result;
//	/*����һ����С��*/
//	MyHeap<int, greater<int>>m(a, 5);
//	cout << "ԭʼ�ѣ�" << endl;
//	m.Display();
//	cout << endl;
//	m.Insert(100);
//	cout << "����100֮��Ķ��ǣ�" << endl;
//	m.Display();
//	cout << endl;
//	m.Remove(result);
//	cout << "������Сֵ��" << result << endl;
//	m.Remove(result);
//	cout << "���д�Сֵ��" << result << endl;
//
//	system("pause");
//	return 0;
//}