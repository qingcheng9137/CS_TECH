/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//Make a size_fixed stack
//ģ�����stack�е�Ԫ�ظ�����û�����Ƶģ��������ڵ�Ը���ǣ����ܹ�����stack�Ĺ������ʣ�Ҳ�ܹ��������е�����
//�̳�

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