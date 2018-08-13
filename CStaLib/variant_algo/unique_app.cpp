///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////文本文件存放单词，统计有多少个单词
//
//#include "stdafx.h"
//
//using namespace std;
//
//bool MyStrCompare(string s1, string s2)
//{
//	bool bRet = false;
//	int value = _stricmp(s1.c_str(), s2.c_str());
//	if (value == 0)
//	{
//		bRet = true;
//	}
//	return bRet;
//}
//
//int main()
//{
//	ifstream out("d:\\unique_app.txt");
//	vector<string>v;	//读字符文件，按照字符串读
//	copy(istream_iterator<string>(out), istream_iterator<string>(), back_inserter(v));
//	//读取文件到向量，用这种
//	cout << endl;
//
//	cout << "文本文件中的单词有：" << endl;
//	copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\t"));
//	cout << endl;
//
//	vector<string>vstr;
//	cout << "文本文件中去掉重复的单词之后:" << endl;
//	unique_copy(v.begin(), v.end(), back_inserter(vstr), MyStrCompare);
//	copy(vstr.begin(), vstr.end(), ostream_iterator<string>(cout, "\t"));
//	cout << endl;
//	system("pause");
//	return 0;
//}