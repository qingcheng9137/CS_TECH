/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//��ʾ�������н������ȶ���
//���ȶ���Ĭ��������vector
//����queueӵ��front()����������ʵ���Ƚ��ȳ�����ʾ���������ȶ��е�Ĭ��������vector��û��front()
//����һЩ����

/*#include "iostream"
#include "queue"
#include "algorithm"
#include "iterator"

using namespace std;

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	priority_queue<int>pr(a, a + 9);
	pr.push(a[9]);

	cout << "�������У�" << endl;
	copy(a, a + 10, ostream_iterator<int>(cout, "\t"));
	cout << endl;

	cout << "�������У�" << endl;
	while (!pr.empty())
	{
		cout << pr.top() << endl;//�����һ��Բ���ε�����
		pr.pop();
	}
	system("pause");
	return 0;
}*/