/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//一元多项式求和头文件
/*#include<iostream>
using namespace std;
template<class DataType>
//定义单链表结点
struct Node
{
	//数据域：非零项的系数和指数
	DataType coef, exp;
	//指针域
	Node<DataType> *next;
};
//定义存放一元多项式的类
template<class DataType>
class Linklist
{
private:
	Node<DataType> *first;
	//一元多项式的项数
	int size;
public:
	//构造函数
	Linklist();
	//初始化一元多项式
	void Init();
	//输出一元多项式
	void Print();
	//定义一元多项式的的加法操作
	Linklist<DataType> operator+(Linklist &p2);
};



//构造函数
template<class DataType>
Linklist<DataType>::Linklist()
{
	first = new Node<DataType>;
	first = NULL;
	size = 0;
}



//实现一元多项式单链表的初始化
template<class DataType>
void Linklist<DataType>::Init()
{
	cout << "多项式的元素个数为:";
	cin >> size;
	DataType x, y;
	cout << "请输入第1项的系数:";
	cin >> x;
	cout << "请输入第1项的指数:";
	cin >> y;
	Node<DataType> *m;
	m = new Node<DataType>;
	m->coef = x;
	m->exp = y;
	m->next = NULL;
	first = m;
	for (int i = 2; i <= size; i++)
	{
		cout << "请输入第" << i << "项的系数:";
		cin >> x;
		cout << "请输入第" << i << "项的指数:";
		cin >> y;
		Node<DataType> *n;
		n = new Node<DataType>;
		n->coef = x;
		n->exp = y;
		n->next = NULL;
		m->next = n;
		m = n;
	}
}



//实现一元多项式单链表实的输出
template<class DataType>
void Linklist<DataType>::Print()
{
	Node<DataType> *m = first;
	while (m != NULL)
	{
		if (m == first)
		{
			if (m->coef != 0 && m->exp != 0)
			{
				cout << m->coef << "x^" << m->exp;
			}
			else if (m->coef != 0 && m->exp == 0)
			{
				cout << m->coef;
			}
		}
		else
		{
			if (m->coef > 0 && m->exp != 0) {
				cout << "+" << m->coef << "x^" << m->exp;
			}
			else if (m->coef < 0 && m->exp != 0)
			{
				cout << m->coef << "x^" << m->exp;
			}
			else if (m->coef > 0 && m->exp == 0)
			{
				cout << "+" << m->coef;
			}
			else if (m->coef < 0 && m->exp == 0)
			{
				cout << m->coef;
			}
		}
		m = m->next;
	}
	cout << endl;
}



//实现一元多项式单链表的相加
template<class DataType>
Linklist<DataType> Linklist<DataType>::operator+(Linklist &p2)
{
	//声明工作指针
	Node<DataType> *pre, *p, *qre, *q;
	//初始化工作指针
	pre = this->first;
	p = pre->next;
	qre = p2.first;
	q = qre->next;
	while (p != NULL&&q != NULL)
	{
		//p->exp < q->exp：指针 p 后移
		if (p->exp < q->exp)
		{
			pre = p;
			p = p->next;
		}
		//p->exp > q->exp：将结点 q 插到结点 p 之前，指针 p 指向他原指结点的下一个结点
		if (p->exp > q->exp)
		{
			Node<DataType> *s;
			s = q->next;
			pre->next = q;
			q->next = p;
			q = s;
		}
		//p->exp == q->exp：
		if (p->exp == q->exp)
		{
			//p->coef = p->coef + q->coef
			p->coef = p->coef + q->coef;
			if (p->coef == 0)
			{
				//使指针 p 指向它原指结点的下一个结点
				pre->next = p->next;
				//删除结点 p
				delete p;
				p = p->next;
			}
			else
			{
				pre = p;
				p = pre->next;
			}
			//使指针 q 指向它原指结点的下一个结点
			qre->next = q->next;
			//删除结点 q
			delete q;
			q = qre->next;
		}
	}
	//如果 q 不为空，将结点 q 链接在第一个单链表的后面。
	if (q != NULL)
	{
		pre->next = q;
		delete p2.first;
	}
	return *this;
}
*/