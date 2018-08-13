///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////swap()函数
////关注：对于数组而言，要交换的必须是真实的内存空间，因为对于定义好的数组而言，大小固定
////所以int a[5]的数据不能和int b[2]的全部数据交换。但是对于基本序列容器，由于它支持
////元素空间动态分配，因此相交换的容器拥有的元素内存空间可以不同，下面有显示
////这个例子也说明了copy函数的强大作用：遍历迭代器
//#include "iostream"
//#include "vector"
//#include "iterator"
//#include "algorithm"
//
//using namespace std;
//
//int main()
//{
//	/*交换两个数据元素*/
//	int a = 10;
//	int b = 20;
//	cout << "原始数据a=" << a << "\tb=" << b << endl;
//	swap(a, b);
//	cout << "交换后数据a=" << a << "\tb=" << b << endl;
//
//	/*交换两个数组元素*/
//	int a2[5] = { 1, 2, 3, 4, 5 };
//	int b2[5] = { 6, 7, 8, 9, 10 };
//	cout << "原始a=";
//	copy(a2, a2 + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "原始b=";
//	copy(b2, b2 + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	swap_ranges(a2, a2 + 5, b2);
//	cout << "交换后a2[5]=";
//	copy(a2, a2 + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "交换后b2[5]=";
//	copy(b2, b2 + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl << endl;
//
//	/*交换两个基本容器元素*/
//	int a3[5] = { 1, 2, 3, 4, 5 };
//	int b3[2] = { 5, 6 };
//	vector<int>v1(a3, a3 + 5);
//	vector<int>v2(b3, b3 +2);
//	cout << "原始vector1=";
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "原始vector2=";
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	swap(v1, v2);
//	cout << "交换后的v1=";
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "交换后的v2=";
//	cout << endl;
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	system("pause");
//	return 0;
//}