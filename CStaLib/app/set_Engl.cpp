///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////一篇英文文本文件，要求：创建一个集合，保存文件中出现的单词，创建一个映射，保存单词以及该单词在文件中
////出现的次数
//
////出现了尚未解决的bug
//
////运用set,map实现
//
//#include "stdafx.h"
//
//class CWord
//{
//	string strWord;
//public:
//	CWord(string strWord)
//	{
//		this->strWord;
//	}
//	string GetWord()const
//	{
//		return strWord;
//	}
//
//	/*用于添加集合*/
//	bool operator<(const CWord&w)const
//	{
//		return strWord < w.GetWord();
//	}
//
//	/*用于查询*/
//	bool operator==(const string&s)const
//	{
//		return strWord == s;
//	}
//};
//
//class CWordSet
//{
//	set<CWord>wordSet;
//public:
//	/*单词集合添加*/
//	bool AddString(string s)
//	{
//		wordSet.insert(CWord(s));
//		return true;
//	}
//
//	/*单词集合显示*/
//	void Show(ostream & os)
//	{
//		set<CWord>::iterator it = wordSet.begin();
//		int n = 0;
//		while (it != wordSet.end())
//		{
//			os << (*it).GetWord() << "\t";
//			n++;
//			if (n % 8 == 0)
//			{
//				os << endl;
//				n = 0;
//			}
//			it++;
//		}
//	}
//};
//
//class CWordMap
//{
//	/*单词______出现次数*/
//	map<CWord, int>wordMap;
//public:
//	bool AddString(string s)
//	{
//		map<CWord, int>::iterator it = wordMap.find(s);
//		if (it == wordMap.end())
//		{
//			pair<CWord, int>p(CWord(s), 1);
//			wordMap.insert(p);
//		}
//		else
//		{
//			(*it).second += 1;
//		}
//		return true;
//	}
//	void Show(ostream & os)
//	{
//		map<CWord, int>::iterator it = wordMap.begin();
//		while (it != wordMap.end())
//		{
//			string ss = ((*it).first).GetWord();
//			int n = (*it).second;
//			os << ((*it).first).GetWord() << "\t" << (*it).second << endl;
//			it++;
//		}
//	}
//};
//
//int main()
//{
//	CWordSet wordSet;
//	CWordMap wordMap;
//
//	int pos = 0;
//	string s = " ";
//	/*待拆分字符集和*/
//	string delimset = ",.";
//	ifstream in("d:\\set_Engl.txt");
//	while (!in.eof())
//	{
//		/*读取一行文本*/
//		getline(in, s);
//		/*如果空，读取下一行文本*/
//		if (s == " ")
//		{
//			continue;
//		}
//		pos = 0;
//		while ((pos = s.find_first_of(delimset, pos)) != string::npos)
//		{
//			/*把串中等于delimset位置处的字符都用空格“”代替*/
//			s.replace(pos, 1, " ");
//		}
//		istringstream stringeam(s);
//		while (!stringeam.eof())
//		{
//			stringeam >> s;
//			if (s == " ")
//			{
//				continue;
//			}
//			wordSet.AddString(s);
//			wordMap.AddString(s);
//		}
//	}
//	in.close();
//
//	cout << "单词集合为：" << endl;
//	wordSet.Show(cout);
//	cout << endl;
//	cout << "单词以及出现次数为：" << endl;
//	wordMap.Show(cout);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}