///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////生成随机数：产生10个[0,100]的整形数，10个[0,1)小数
////我们的希望是最好编织一个产生随机数的框架，一方面产生整形以及浮点随机数的算法不同，另一方面他们有相同的接口
////可以使用模板化技术
////对于种子，我们的方案是用时间函数做随机种子
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
//		/*srand()可用来设置rand()产生随机数时的随机数种子。通过设置不同的种子，我们可以获取不同的
//		随机数序列。可以利用srand((unsigned int)(time(NULL))的方法，利用系统时钟，产生不同的
//		随机数种子*/
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
//	cout << "产生[0,100]之间10个随机整形数字：" << endl;
//	vector<int>v1(10);
//	generate_n(v1.begin(), 10, MyRandom<int>());
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	Sleep(1000);	//Windows.h头文件里面
//
//	cout << "产生[0,100]之间10个随机浮点数字：" << endl;
//	vector<float>v2(10);
//	generate_n(v2.begin(), 10, MyRandom<float>());
//	copy(v2.begin(), v2.end(), ostream_iterator<float>(cout, "\t"));
//	cout << endl;
//
//	system("pause");
//	return 0;
//}