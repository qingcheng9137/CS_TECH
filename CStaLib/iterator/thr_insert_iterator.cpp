/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//չʾ����������������Լ��������뺯��
//�˴�������ѡ����Ҫ֧��push_back,push_front

/*#include "iostream"
#include "list"
#include "iterator"

using namespace std;

void Display(list<int>&v)
{
	for (list<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

int main()
{
	list<int>v;
	back_insert_iterator<list<int>>backit(v);   //��һ������������������x�ĺ�������
	*backit++ = 1;
	*backit++ = 2;
	Display(v);//1 2
	*back_inserter(v) = 3;//��һ������
	*back_inserter(v) = 4;
	Display(v);//1 2 3 4

	front_insert_iterator<list<int>>frontit(v);//�ڶ�������������������x��ǰ�������
	*frontit++ = 5;
	*frontit++ = 6;//Ĭ�ϴӵ�һ��Ԫ�ؿ�ʼ��
	Display(v);//6 5 1 2 3 4 
	*front_inserter(v)++ = 7;//�ڶ�������
	*front_inserter(v)++ = 8;
	Display(v);// 8 7 6 5 1 2 3 4

	list<int>::iterator it = v.begin();
	for (int ni = 0; ni < 3; ni++)
	{
		it++;//�õ�list�����е�4��Ԫ�صĵ���ָ�루it��3��ָ���4��Ԫ�أ�
	}
	insert_iterator<list<int>>insertit(v, it);//��������������ĳָ��λ�õ�����
	*insertit++ = 9;
	Display(v);
	system("pause");
	return 0;


}*/