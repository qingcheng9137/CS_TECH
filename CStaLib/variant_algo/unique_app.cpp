///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////�ı��ļ���ŵ��ʣ�ͳ���ж��ٸ�����
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
//	vector<string>v;	//���ַ��ļ��������ַ�����
//	copy(istream_iterator<string>(out), istream_iterator<string>(), back_inserter(v));
//	//��ȡ�ļ���������������
//	cout << endl;
//
//	cout << "�ı��ļ��еĵ����У�" << endl;
//	copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\t"));
//	cout << endl;
//
//	vector<string>vstr;
//	cout << "�ı��ļ���ȥ���ظ��ĵ���֮��:" << endl;
//	unique_copy(v.begin(), v.end(), back_inserter(vstr), MyStrCompare);
//	copy(vstr.begin(), vstr.end(), ostream_iterator<string>(cout, "\t"));
//	cout << endl;
//	system("pause");
//	return 0;
//}