/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//Make a size_fixed stack
//模板库中stack中的元素个数是没有限制的，我们现在的愿望是：既能够用上stack的固有性质，也能够加上特有的限制
//继承

/*#include "iostream"
#include "stack"
#include "deque"

using namespace std;

template<class T,class Container=deque<T>>
class mystack :public stack<T, Container>
{
private:
	int m_nMaxSize;
public:
	mystack(int maxsize)
	{
		m_nMaxSize = maxsize;
	}
	void push(const T&t)
	{
		if (stack<T, Container>::size() < m_nMaxSize)
		{
			stack<T, Container>::push(t);
		}
		else
		{
			cout << "stack is fill." << "the term " << t << " can't be pushed" << endl;
		}
	}
};

int main()
{
	mystack<int, deque<int>>obj(2);
	obj.push(1);
	obj.push(2);
	obj.push(3);
	while (!obj.empty())
	{
		cout << obj.top() << endl;
		obj.pop();
	}
	system("pause");
	return 0;
}*/