///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////���������������10��[0,100]����������10��[0,1)С��
////���ǵ�ϣ������ñ�֯һ������������Ŀ�ܣ�һ������������Լ�������������㷨��ͬ����һ������������ͬ�Ľӿ�
////����ʹ��ģ�廯����
////�������ӣ����ǵķ�������ʱ�亯�����������
//
//#include "iostream"
//#include "vector"
//#include "algorithm"
//#include "iterator"
//#include "iterator"
//#include "time.h"
//#include "stdlib.h"
//#include "Windows.h"
//
//using namespace std;
//
//template<class T>
//class MyRandom{};
//
//template<>
//class MyRandom<int>
//{
//public:
//	MyRandom()
//	{
//		srand(time(NULL));
//		/*srand()����������rand()���������ʱ����������ӡ�ͨ�����ò�ͬ�����ӣ����ǿ��Ի�ȡ��ͬ��
//		��������С���������srand((unsigned int)(time(NULL))�ķ���������ϵͳʱ�ӣ�������ͬ��
//		���������*/
//	}
//	int operator()()
//	{
//		int result = rand() % 100;
//		return result;
//	}
//};
//
//template<>
//class MyRandom<float>
//{
//public:
//	MyRandom()
//	{
//		srand(time(NULL));
//	}
//	float operator()()
//	{
//		float result = rand() % 100 * 0.01f;
//		return result;
//	}
//};
//
//int main()
//{
//	cout << "����[0,100]֮��10������������֣�" << endl;
//	vector<int>v1(10);
//	generate_n(v1.begin(), 10, MyRandom<int>());
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	Sleep(1000);	//Windows.hͷ�ļ�����
//
//	cout << "����[0,100]֮��10������������֣�" << endl;
//	vector<float>v2(10);
//	generate_n(v2.begin(), 10, MyRandom<float>());
//	copy(v2.begin(), v2.end(), ostream_iterator<float>(cout, "\t"));
//	cout << endl;
//
//	system("pause");
//	return 0;
//}