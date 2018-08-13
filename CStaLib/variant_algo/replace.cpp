/*************************************************************************************/
/*************************************** 2018.4.11 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//展示替换算法主要函数replace()的用法

//#include "iostream"
//#include "vector"
//#include "iterator"
//#include "algorithm"
//#include "functional"
//
//using namespace std;
//
//int main()
//{
//	int a[9] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
//	cout << "原始数据:";
//	copy(a, a + 9, ostream_iterator<int>(cout, "\t"));
//
//	cout << "原数据2用10代替：";
//	vector<int>v1(a, a + 9);
//	replace(v1.begin(), v1.end(), 2, 10);
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	cout << "原数据小于4的用20代替(replace_if):";
//	vector<int>v2(a, a + 9);
//	replace_if(v2.begin(), v2.end(), bind2nd(less<int>(), 4), 20);
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	cout << "原数据4用30代替，且v3->v4(replace_copy):";
//	vector<int>v3(a, a + 9);
//	vector<int>v4;
//	replace_copy(v3.begin(), v3.end(), back_inserter(v4), 4, 30);
//	copy(v4.begin(), v4.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	//replace_copy_if(v3.begin(), v3.end(), back_inserter(v4), blind2nd(less<int>(), 4), 4, 30);
//
//	system("pause");
//	return 0;
//}