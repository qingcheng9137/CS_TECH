/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//չʾ��ջ����ģ�庯�������Ƶ�,queueҲһ��

//PrintStack()���������Ǹ������ͣ��������������ͣ�������������ͣ���pop֮��ԭ���Ķ�ջ�����˸ı䣬�����������

/*#include "iostream"
#include "string"
#include "vector"
#include "stack"
#include "list"

using namespace std;

template<class T,class Container>
void PrintStack(stack<T, Container>obj)
{
	while (!obj.empty())
	{
		cout << obj.top() << "\t";
		obj.pop();
	}
}

int main()
{
	stack<int, vector<int>>s;
	for (int ni = 0; ni <= 4; ni++)
	{
		s.push(ni + 1);
	}
	PrintStack(s);
	cout << endl;

	string str = "a";
	stack<string, list<string>>a;
	for (int ni = 0; ni <= 4; ni++)
	{
		a.push(str);
		str += "a";
	}
	PrintStack(a);
	cout << endl;

	stack<float, deque<float>>d;
	for (int ni = 0; ni <= 4; ni++)
	{
		d.push(ni + 1);//����ĸ����ջ�����㵽���Ǹ�ɶ����
	}
	PrintStack(d);
	cout << endl;
	system("pause");
	return 0;
}*/