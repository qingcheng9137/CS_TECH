/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//һԪ����ʽ���ͷ�ļ�
/*#include<iostream>
using namespace std;
template<class DataType>
//���嵥������
struct Node
{
	//�����򣺷������ϵ����ָ��
	DataType coef, exp;
	//ָ����
	Node<DataType> *next;
};
//������һԪ����ʽ����
template<class DataType>
class Linklist
{
private:
	Node<DataType> *first;
	//һԪ����ʽ������
	int size;
public:
	//���캯��
	Linklist();
	//��ʼ��һԪ����ʽ
	void Init();
	//���һԪ����ʽ
	void Print();
	//����һԪ����ʽ�ĵļӷ�����
	Linklist<DataType> operator+(Linklist &p2);
};



//���캯��
template<class DataType>
Linklist<DataType>::Linklist()
{
	first = new Node<DataType>;
	first = NULL;
	size = 0;
}



//ʵ��һԪ����ʽ������ĳ�ʼ��
template<class DataType>
void Linklist<DataType>::Init()
{
	cout << "����ʽ��Ԫ�ظ���Ϊ:";
	cin >> size;
	DataType x, y;
	cout << "�������1���ϵ��:";
	cin >> x;
	cout << "�������1���ָ��:";
	cin >> y;
	Node<DataType> *m;
	m = new Node<DataType>;
	m->coef = x;
	m->exp = y;
	m->next = NULL;
	first = m;
	for (int i = 2; i <= size; i++)
	{
		cout << "�������" << i << "���ϵ��:";
		cin >> x;
		cout << "�������" << i << "���ָ��:";
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



//ʵ��һԪ����ʽ������ʵ�����
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



//ʵ��һԪ����ʽ����������
template<class DataType>
Linklist<DataType> Linklist<DataType>::operator+(Linklist &p2)
{
	//��������ָ��
	Node<DataType> *pre, *p, *qre, *q;
	//��ʼ������ָ��
	pre = this->first;
	p = pre->next;
	qre = p2.first;
	q = qre->next;
	while (p != NULL&&q != NULL)
	{
		//p->exp < q->exp��ָ�� p ����
		if (p->exp < q->exp)
		{
			pre = p;
			p = p->next;
		}
		//p->exp > q->exp������� q �嵽��� p ֮ǰ��ָ�� p ָ����ԭָ������һ�����
		if (p->exp > q->exp)
		{
			Node<DataType> *s;
			s = q->next;
			pre->next = q;
			q->next = p;
			q = s;
		}
		//p->exp == q->exp��
		if (p->exp == q->exp)
		{
			//p->coef = p->coef + q->coef
			p->coef = p->coef + q->coef;
			if (p->coef == 0)
			{
				//ʹָ�� p ָ����ԭָ������һ�����
				pre->next = p->next;
				//ɾ����� p
				delete p;
				p = p->next;
			}
			else
			{
				pre = p;
				p = pre->next;
			}
			//ʹָ�� q ָ����ԭָ������һ�����
			qre->next = q->next;
			//ɾ����� q
			delete q;
			q = qre->next;
		}
	}
	//��� q ��Ϊ�գ������ q �����ڵ�һ��������ĺ��档
	if (q != NULL)
	{
		pre->next = q;
		delete p2.first;
	}
	return *this;
}
*/