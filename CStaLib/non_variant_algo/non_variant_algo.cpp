/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//7����ѯ������Ӧ��
//���⻹������count��������
//�Լ�equal(),mismatch()�������ȽϺ������ڶ����������Ƿ��ص�һ�������Ԫ�أ�

/*#include "iostream"
#include "algorithm"

using namespace std;

bool mygreater(int nm)
{
	return nm > 4;
}

int main()
{
	int a[] = { 1,2,3,3,4,5,5,6,7,8,1,2,2,3 };
	int nSize = sizeof(a) / sizeof(int);

	cout << "ԭʼ���飺" << endl;
	for (int ni = 0; ni < nSize; ni++)
	{
		cout << a[ni] << "\t";
	}
	cout << endl << endl;
	int *p1 = find(a, a + nSize, 3);//find()�ҵ���һ�γ��ֵ�λ��
	if (p1 != a + nSize)
	{
		cout << "(find)�״ε���3��λ�ã�" << p1 - a << "\tֵ��" << *p1 << endl;
	}
	int *p2 = find_if(a, a + nSize, mygreater);//find_if��find����һ�������ǲ�����һ��bool����
	if (p2 != a + nSize)
	{
		cout << "(find_if)�״δ���4��λ�ã�" << p2 - a << "\tֵ��" << *p2 << endl;
	}
	int b[] = { 10,12,6 };
	int nSize2 = sizeof(b) / sizeof(int);
	int *p3 = find_first_of(a, a + nSize, b, b + nSize2);
	if (p3 != a + nSize)
	{
		cout << "(find_first_of)�״���a�����з���b����[10,12,6]��Ԫ��λ�ã�"
			<< p3 - a << "\tֵ" << *p3 << endl;//find_first_if�漰����������
	}
	int *p4 = adjacent_find(a, a + nSize);
	if (p4 != a + nSize)
	{
		cout << "(adjacent_find)�״�����Ԫ����ͬλ�ã�" << p4 - a << "\tֵ"
			<< *p4 << endl;//adjacent_findѰ������Ԫ��
	}
	
	int c[] = { 2,3 };
	int nSize3 = sizeof(c) / sizeof(int);
	int *p5 = find_end(a, a + nSize, c, c + nSize3);
	if (p5 != a + nSize)
	{
		cout << "���һ��ƥ��c����[2,3]��λ�ã�" << p5 - a
			<< endl;
	}

	int *p6 = search(a, a + nSize, c, c + nSize3);
	if (p6 != a + nSize)
	{
		cout << "�״�ƥ��c����[2,3]λ�ã�" << p6 - a << endl;
	}

	int *p7 = search_n(a, a + nSize, 3, 2);
	if (p7 != a + nSize)
	{
		cout << "�״γ���3��2��λ�ã�" << p7 - a << endl;
	}
	system("pause");
	return 0;
}*/