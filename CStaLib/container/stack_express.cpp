/*************************************************************************************/
/*************************************** 2018.4.09 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//利用stack实现检查输入流()[]是否匹配
/*算法：
1.初始化堆栈为空，合法表达式标识flag=true
2.循环读括号表达式的每一个元素
3.如果是左括号，把它压倒栈中
4.如果是右括号，读栈的内容：如果栈空，则表达式不正确；如不空，读取栈顶元素，如果是)[]则flag=
false，跳到6；若是(则弹出栈顶元素
5.如果堆栈为空，则所有的左括号都找到了与之匹配的右括号，则是合法；如果不为空，则false
6.标识flag返回调用程序*/

/*#include "iostream"
#include "string"
#include "stack"
using namespace std;

class CExpress
{
private:
	string m_strExpress;
public:
	CExpress(string strExpress) :m_strExpress(strExpress){}
	bool IsValid()
	{
		bool flag = true;//假设表达式都正确
		char ch = 0;
		char chstack = 0;
		stack<char>sta_char;//堆栈初始化为空
		int size = m_strExpress.length();//得到字符串长度

		for (int ni = 0; ni < size; ni++)
		{
			ch = m_strExpress.at(ni);//读取字符，很棒的处理
			if (ch == '(' || ch == '[')//左括号，压进去
			{
				sta_char.push(ch);
			}
			if (ch == ')' || ch == ']')
			{
				if (sta_char.empty())//如果栈空
				{
					flag = false;
					break;
				}
				else
				{
					chstack = sta_char.top();//如果栈不空
					if (chstack == '('&&ch == ')')
					{
						sta_char.pop();
					}
					else if (chstack == '['&&ch == ']')
					{
						sta_char.pop();
					}
					else
					{
						flag = false;
						break;
					}
				}
			}
		}
		if (flag == true && !sta_char.empty())//栈中多余的左括号，置错误标识
		{
			flag = false;
		}
		return flag;
	}
};

int main()
{
	CExpress c1(")[]");
	CExpress c2("([]");
	CExpress c3("()[]");
	c1.IsValid() == true ? cout << "c1 is right" << endl : cout << "c1 is wrong" << endl;
	c2.IsValid() == true ? cout << "c2 is right" << endl : cout << "c2 is wrong" << endl;
	c3.IsValid() == true ? cout << "c3 is right" << endl : cout << "c3 is wrong" << endl;
	system("pause");
	return 0;
}*/