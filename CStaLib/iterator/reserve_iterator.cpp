/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//�����������ҪĿ���������������Ԫ�����У���Ҫ����ģ���������һ���ǵ��������ͣ��ڶ���������Ԫ������
//��Ҫ������
//reverse_iterator(Ranit x)��ʾ���������,vector�����Ǵ���
//reverse_bidirectional_iterator(Bidid x)��ʾ˫�������,list�����Ǵ���

//Ŀǰ����һ�����⣺reverse_iterator<>��ʾ����̫��

/*#include "iostream"
#include "list"
#include "vector"
#include "iterator"

using namespace std;

template<class reverse_iterator>
void reverse_display(reverse_iterator first, reverse_iterator last)//ͨ��ģ��������ʾ����
{
	while (first != last)
	{
		cout << *first << "\t";
		first++;
	}
	cout << endl;
}

int main()
{
	vector<int>v;
	list<int>l;
	for (int ni = 1; ni <= 5; ni++)
	{
		v.push_back(ni);//v:1 2 3 4 5
		l.push_back(ni + 5);//l:6 7 8 9 10
	}

	cout << "vectorԪ��������ʾ��" << endl;
	reverse_iterator<vector<int>::iterator, int>first(v.end());
	reverse_iterator<vector<int>::iterator, int>end(v.begin());
	reverse_display(first, end);
}
*/