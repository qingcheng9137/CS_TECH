/*************************************************************************************/
/*************************************** 2018.4.09 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//����stackʵ�ּ��������()[]�Ƿ�ƥ��
/*�㷨��
1.��ʼ����ջΪ�գ��Ϸ����ʽ��ʶflag=true
2.ѭ�������ű��ʽ��ÿһ��Ԫ��
3.����������ţ�����ѹ��ջ��
4.����������ţ���ջ�����ݣ����ջ�գ�����ʽ����ȷ���粻�գ���ȡջ��Ԫ�أ������)[]��flag=
false������6������(�򵯳�ջ��Ԫ��
5.�����ջΪ�գ������е������Ŷ��ҵ�����֮ƥ��������ţ����ǺϷ��������Ϊ�գ���false
6.��ʶflag���ص��ó���*/

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
		bool flag = true;//������ʽ����ȷ
		char ch = 0;
		char chstack = 0;
		stack<char>sta_char;//��ջ��ʼ��Ϊ��
		int size = m_strExpress.length();//�õ��ַ�������

		for (int ni = 0; ni < size; ni++)
		{
			ch = m_strExpress.at(ni);//��ȡ�ַ����ܰ��Ĵ���
			if (ch == '(' || ch == '[')//�����ţ�ѹ��ȥ
			{
				sta_char.push(ch);
			}
			if (ch == ')' || ch == ']')
			{
				if (sta_char.empty())//���ջ��
				{
					flag = false;
					break;
				}
				else
				{
					chstack = sta_char.top();//���ջ����
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
		if (flag == true && !sta_char.empty())//ջ�ж���������ţ��ô����ʶ
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