/*************************************************************************************/
/*************************************** 2018.4.11 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//ʹ��transform()���������㷨��ʵ�ֶ��ַ�������
//�˳���ʹ����ģ���ػ��������˼����ǳ����ڳ�������
//���⣬�˳���չʾ����ζ����ļ�

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
//class Encrypt<string>		//ģ���ػ�
//{
//public:
//	string operator()(const string&src)	//���ַ������м���
//	{
//		string s = src;
//		int len = s.length();
//		for (string::iterator it = s.begin(); it != s.end(); it++)
//		{
//			*it = *it + 1;	//�����㷨����Ӧ�ַ���ASCII��1
//		}
//		return s;
//	}
//};
//
////�����������������
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
//	while (!in.eof())	//�����ļ�
//	{
//		getline(in, strText, '\n');	//��һ��
//		v.push_back(strText);
//	}
//	in.close();
//	transform(v.begin(), v.end(), back_inserter(vResult), Encrypt<string>());
//	//���ܱ任
//	copy(vResult.begin(), vResult.end(), ostream_iterator<string>(cout, "\n"));
//	//�������Ļ
//	system("pause");
//	return 0;
//}