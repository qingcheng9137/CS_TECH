/*************************************************************************************/
/*************************************** 2018.4.10 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//变异算法中变异函数的特点，是修改容器中的元素
//演示copy用法

//#include "iostream"
//#include "vector"
//#include "iterator"
//
//using namespace std;
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5];
//	vector<int>v;
//
//	copy(a, a + 5, b);	//a数组复制到b数组
//	copy(a, a + 5, back_inserter(v));	//a数组复制到向量vector中
////注意：如果目的数据类型是数组，则一定要保证他的内存空间大于或者等于源数据待复制空间的大小。
////若目的数据类型为基本序列容器vector,list等，则由于可以通过back_inserter,front_inserter
////插入迭代器动态改变容器的大小，因此对于基本的序列容器对象内存空间没有特殊限制
//
//	cout << "原始a数组为:";	//显示原始数组
//	copy(a, a + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl;	//1 2 3 4 5
//	cout << "b数组为：";	//显示复制后的b数组
//	copy(b, b + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl;	//1 2 3 4 5
//	cout << "vector向量为：";
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;	//1 2 3 4 5
//	system("pause");
//	return 0;
//}