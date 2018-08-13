/*************************************************************************************/
/*************************************** 2018.4.10 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//设计一个固定大小的优先队列类，也就是队列中元素个数只能小于某一个值
/*算法：
1.从priority_queue中派生出来FixedPriority,继承固有性质
2.在继承的类中加入限制大小的功能，要么构造函数，要么自定义函数
3.重载push函数*/

//#include "iostream"
//#include "queue"
//
//using namespace std;
//
//template<class T, class Cont = vector<T>, 
//	class Pred = less<typename Cont::value_type>>
//class FixedPriority :public priority_queue<T, Cont, Pred>
//{
//	int nLimit;
//public:
//	FixedPriority(int nLimit)	//通过构造函数设置优先队列大小
//	{
//		this->nLimit = nLimit;	//这句话的作用是，给nLimit传值。如果没有的话，nLimit默认为0
//	}
//	void SetLimitSize(int nLimit)	//通过函数设置优先队列大小
//	{
//		this->nLimit = nLimit;
//	}
//	bool Push(T&t)
//	{
//		if (nLimit > priority_queue < T, Cont, Pred>::size())
//		{
//			priority_queue<T, Cont, Pred>::push(t);
//			return true;
//		}
//		return false;
//	}
//};
//
//int main()	//测试函数
//{
//	FixedPriority<int>fp(10);
//	for (int ni = 1; ni <= 15; ni++)
//	{
//		if (!fp.Push(ni))
//		{
//			cout << "队列满了，第" << ni << "个元素没有插入" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}