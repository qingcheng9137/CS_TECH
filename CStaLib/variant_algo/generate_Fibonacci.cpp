///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////ʹ��generate()��������쳲���������
////�˳���չʾ�˺�������ķ���
////չʾ�˶�̬���������һ�ַ�ʽ
//
//#include "iostream"
//#include "vector"
//#include "algorithm"
//#include "iterator"
//
//using namespace std;
//
//class Fibonacci
//{
//	int f1;
//	int f2;
//public:
//	Fibonacci(int start1, int start2)	//�ӿ�
//	{
//		f1 = start1;
//		f2 = start2;
//	}
//	int operator()()					//����,ֻ��()���������
//	{
//		int r = f1 + f2;
//		f1 = f2;
//		f2 = r;
//		return r;
//	}
//};
//
//int main()
//{
//	vector<int> v1(10);
//	generate(v1.begin(), v1.end(), Fibonacci(0, 1));
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	vector<int> v2(10);
//	generate(v2.begin(), v2.end(), Fibonacci(0, 1));
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, "\t"));
//	system("pause");
//	return 0;
//}