///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////使用generate()函数生成斐波那锲数列
////此程序展示了函数对象的方法
////展示了动态创建对象的一种方式
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
//	Fibonacci(int start1, int start2)	//接口
//	{
//		f1 = start1;
//		f2 = start2;
//	}
//	int operator()()					//处理,只对()运算符重载
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