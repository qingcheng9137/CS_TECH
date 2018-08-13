/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//展示堆栈遍历模板函数，类似的,queue也一样

//PrintStack()函数参数是复制类型，不能是引用类型，如果是引用类型，则pop之后，原来的堆栈发生了改变，不符合情况。

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
		d.push(ni + 1);//那你的浮点堆栈，浮点到底是个啥！！
	}
	PrintStack(d);
	cout << endl;
	system("pause");
	return 0;
}*/