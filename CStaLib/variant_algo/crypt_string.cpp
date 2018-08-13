/*************************************************************************************/
/*************************************** 2018.4.11 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//使用transform()函数变异算法，实现对字符串加密
//此程序还使用了模板特化技术，此技术非常易于程序扩充
//另外，此程序还展示了如何读入文件

//#include "iostream"
//#include "string"
//#include "algorithm"
//#include "iterator"
//#include "vector"
//#include "functional"
//#include "fstream"
//
//using namespace std;
//
//template<class T>
//class Encrypt{};
//
//template<>
//class Encrypt<string>		//模板特化
//{
//public:
//	string operator()(const string&src)	//对字符串进行加密
//	{
//		string s = src;
//		int len = s.length();
//		for (string::iterator it = s.begin(); it != s.end(); it++)
//		{
//			*it = *it + 1;	//加密算法：对应字符的ASCII加1
//		}
//		return s;
//	}
//};
//
////下面是扩充整形情况
///*template<>
//class Encrypt<int>
//	^^^^^^^
//*/
//
//int main()
//{
//	string strText;
//	vector<string>v;
//	vector<string>vResult;
//	ifstream in("d:\\crypt_string.txt");
//	while (!in.eof())	//读入文件
//	{
//		getline(in, strText, '\n');	//读一行
//		v.push_back(strText);
//	}
//	in.close();
//	transform(v.begin(), v.end(), back_inserter(vResult), Encrypt<string>());
//	//加密变换
//	copy(vResult.begin(), vResult.end(), ostream_iterator<string>(cout, "\n"));
//	//输出到屏幕
//	system("pause");
//	return 0;
//}