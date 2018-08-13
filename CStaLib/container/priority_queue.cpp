/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//演示整型序列进出优先队列
//优先队列默认容器是vector
//容器queue拥有front()函数，可以实现先进先出的显示，但是优先队列的默认容器是vector，没有front()
//仍有一些疑问

/*#include "iostream"
#include "queue"
#include "algorithm"
#include "iterator"

using namespace std;

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	priority_queue<int>pr(a, a + 9);
	pr.push(a[9]);

	cout << "进队序列：" << endl;
	copy(a, a + 10, ostream_iterator<int>(cout, "\t"));
	cout << endl;

	cout << "出队序列：" << endl;
	while (!pr.empty())
	{
		cout << pr.top() << endl;//想象成一个圆柱形的容器
		pr.pop();
	}
	system("pause");
	return 0;
}*/