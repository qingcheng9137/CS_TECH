///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////һƪӢ���ı��ļ���Ҫ�󣺴���һ�����ϣ������ļ��г��ֵĵ��ʣ�����һ��ӳ�䣬���浥���Լ��õ������ļ���
////���ֵĴ���
//
////��������δ�����bug
//
////����set,mapʵ��
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
//	/*������Ӽ���*/
//	bool operator<(const CWord&w)const
//	{
//		return strWord < w.GetWord();
//	}
//
//	/*���ڲ�ѯ*/
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
//	/*���ʼ������*/
//	bool AddString(string s)
//	{
//		wordSet.insert(CWord(s));
//		return true;
//	}
//
//	/*���ʼ�����ʾ*/
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
//	/*����______���ִ���*/
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
//	/*������ַ�����*/
//	string delimset = ",.";
//	ifstream in("d:\\set_Engl.txt");
//	while (!in.eof())
//	{
//		/*��ȡһ���ı�*/
//		getline(in, s);
//		/*����գ���ȡ��һ���ı�*/
//		if (s == " ")
//		{
//			continue;
//		}
//		pos = 0;
//		while ((pos = s.find_first_of(delimset, pos)) != string::npos)
//		{
//			/*�Ѵ��е���delimsetλ�ô����ַ����ÿո񡰡�����*/
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
//	cout << "���ʼ���Ϊ��" << endl;
//	wordSet.Show(cout);
//	cout << endl;
//	cout << "�����Լ����ִ���Ϊ��" << endl;
//	wordMap.Show(cout);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}