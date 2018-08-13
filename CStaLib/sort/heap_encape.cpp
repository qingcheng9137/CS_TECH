///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////进一步将4个堆操作函数封装，并且进行测试
//
//#include "stdafx.h"
//
///*参数表明这是一个默认生成最大堆的模板*/
//template<class T,class Pred=less<T>>
//class MyHeap
//{
//	Pred pr;
//	vector<T>v;
//	int ValidSize;
//public:
//	/*利用构造函数建立堆*/
//	MyHeap(T t[], int nSize) :v(t, t + nSize)
//	{
//		ValidSize = nSize;
//		make_heap(v.begin(), v.begin() + ValidSize, pr);
//	}
//
//	/*向堆中添加新的元素*/
//	void Insert(const T&t)
//	{
//		v.push_back(t);
//		ValidSize++;
//		push_heap(v.begin(), v.begin() + ValidSize, pr);
//	}
//
//	/*得到堆中最大或者最小的元素*/
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
//	/*排序*/
//	void Sort()
//	{
//		if (ValidSize > 0)
//		{
//			sort_heap(v.begin(), v.begin() + ValidSize);
//		}
//	}
//
//	/*判断堆是否为空*/
//	bool IsEmpty()
//	{
//		return ValidSize == 0;
//	}
//
//	/*遍历*/
//	void Display()
//	{
//		copy(v.begin(), v.begin() + ValidSize, ostream_iterator<T>(cout, "\t"));
//	}
//};
//
///*测试代码*/
//int main()
//{
//	int a[] = { 1, 4, 2, 10, 6 };
//	int result;
//	/*产生一个最小堆*/
//	MyHeap<int, greater<int>>m(a, 5);
//	cout << "原始堆：" << endl;
//	m.Display();
//	cout << endl;
//	m.Insert(100);
//	cout << "插入100之后的堆是：" << endl;
//	m.Display();
//	cout << endl;
//	m.Remove(result);
//	cout << "堆中最小值：" << result << endl;
//	m.Remove(result);
//	cout << "堆中次小值：" << result << endl;
//
//	system("pause");
//	return 0;
//}