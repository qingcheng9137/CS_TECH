/*************************************************************************************/
/*************************************** 2018.4.10 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//���һ���̶���С�����ȶ����࣬Ҳ���Ƕ�����Ԫ�ظ���ֻ��С��ĳһ��ֵ
/*�㷨��
1.��priority_queue����������FixedPriority,�̳й�������
2.�ڼ̳е����м������ƴ�С�Ĺ��ܣ�Ҫô���캯����Ҫô�Զ��庯��
3.����push����*/

//#include "iostream"
//#include "queue"
//
//using namespace std;
//
//template<class T, class Cont = vector<T>, 
//	class Pred = less<typename Cont::value_type>>
//class FixedPriority :public priority_queue<T, Cont, Pred>
//{
//	int nLimit;
//public:
//	FixedPriority(int nLimit)	//ͨ�����캯���������ȶ��д�С
//	{
//		this->nLimit = nLimit;	//��仰�������ǣ���nLimit��ֵ�����û�еĻ���nLimitĬ��Ϊ0
//	}
//	void SetLimitSize(int nLimit)	//ͨ�������������ȶ��д�С
//	{
//		this->nLimit = nLimit;
//	}
//	bool Push(T&t)
//	{
//		if (nLimit > priority_queue < T, Cont, Pred>::size())
//		{
//			priority_queue<T, Cont, Pred>::push(t);
//			return true;
//		}
//		return false;
//	}
//};
//
//int main()	//���Ժ���
//{
//	FixedPriority<int>fp(10);
//	for (int ni = 1; ni <= 15; ni++)
//	{
//		if (!fp.Push(ni))
//		{
//			cout << "�������ˣ���" << ni << "��Ԫ��û�в���" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}