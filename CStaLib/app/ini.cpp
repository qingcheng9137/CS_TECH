/*************************************************************************************/
/*************************************** 2018.4.15 ***********************************/
/*****************************          jerry zheng           ************************/
/**************************** beijing insititute of technology ***********************/
/*************************************************************************************/

//����STL����ini�ļ�

/*ini�ļ��Ǽ�����Ա�����õ���һ��ϵͳ���÷�������ζ�ȡ�Ϳ���ʶ��ini�ļ��е�����ʵ�������ȽϷ���
  ����STL��һ���ܺõĽ��������ʡȥ�����ײ㺯���ı��ƣ�ini�ļ���ʽʾ�����£�
  [mydatabase]
  connect=jdbc:odbc:mysrc
  user=administrator
  pwd=123456
  
  [mytable]
  tablename=student
  tablefields=studno.studname.age,birthday*/
/*��Ҫ������Ԫ�أ�section,key,value.key-valueҲ������ֵ�ԣ�λ�ڵȺ��������࣬������key��
  Ҳ���ǹؼ��룬�Ҳ������ֵ�����ǳɶԳ��֡�section����������"[]"��ʶ�ģ�һ��ini�ļ��������
  section��ɵģ�һ��section��������key-value��ֵ����ɵģ����ǵ�������ǰ�ini�ļ��е�
  ��Ϣͨ��һ���ķ�ʽ�����ڳ���ṹ��*/

/*������ֻ��������MySectionCollect�������Է�װini�����ļ������ݣ���Ҳ����ؼ���һ�����Դ˻���
  ���Եõ��ö��������ܡ�����˵һ�������Ǹ���section�ַ����Լ�key������õ�value��ֻ��Ҫ��MySection
  �����Լ�MySectionCollect���зֱ�����һ������
  string MySection::Find(string key)
{
	  map<string, string>::iterator it = mapKey.find(key);
	  return (*it).second;
  }
string MySectionCollect::Find(string section, string key)
{
	MySection*pSection = GetSection(section);
	return pSection->Find(key);
}*/

#include "stdafx.h"

class MySection
{
	string section;	//һ��section
	map<string, string>mapKey;	//������ֵ�����
public:
	MySection(string section)
	{
		this->section = section;
	}

	/*����key-value��ֵ�Ժ���*/
	bool AddKeyValue(string key, string value)
	{
		pair<string, string>p(key, value);
		mapKey.insert(p);
		return true;
	}

	/*��ʾsection,�������ã����Ƿ��Ѿ����浽��Ӧ�ı�����*/
	void Show(ostream&os)
	{
		os << section << endl;
		map<string, string>::iterator it = mapKey.begin();
		while (it != mapKey.end())
		{
			os << "\t" << (*it).first << "=" << (*it).second << endl;
			it++;
		}
	}
};

/*һ��ini�ļ�*/
class MySectionCollect
{
	map<string, MySection>mapSection;	//�ж��section���
public:
	bool AddSection(string strSection)	//����һ��section
	{
		pair<string, MySection>p(strSection, MySection(strSection));
		mapSection.insert(p);
		return true;
	}

	/*����section����ʶ�õ�section����*/
	MySection*GetSection(string strSection)
	{
		map<string, MySection>::iterator it = mapSection.find(strSection);
		return &((*it).second);
	}
	
	/*��ʾ��section���ݣ����Ƿ��ȡ��ȷ*/
	void Show(ostream&os)
	{
		map<string, MySection>::iterator it = mapSection.begin();
		while (it != mapSection.end())
		{
			((*it).second.Show(os));
			it++;
		}
	}
};

class ReadIni
{
	string strPath;	//��ȡini�ļ�·��
	MySectionCollect&collect;		//��ini�ļ����ݶ��뵽�Ķ���
public:
	ReadIni(string strPath, MySectionCollect&collect) :
		strPath(strPath), collect(collect){}
	void Trim(string&s)	//��sȥ�ո�
	{
		if (s != "")
		{
			s.erase(0, s.find_first_not_of(" "));	//ɾ����ո�
			if (s != "")
			{
				s.erase(s.find_last_not_of(" ") + 1);	//ɾ���ҿո�
			}
		}
	}

	/*�õ�ȥ��[]���section��*/
	string GetSection(string strText)
	{
		strText.erase(0, strText.find_first_not_of("["));
		strText.erase(strText.find_last_not_of("]" + 1));
		return strText;
	}

	/*�õ���key,ֵvalue*/
	void GetPair(string strText, string&key, string&value)
	{
		int pos = strText.find("=");
		key = strText.substr(0, pos);
		value = strText.substr(pos + 1, strText.length() - pos - 1);
		Trim(key);
		Trim(value);
	}

	void Process()
	{
		string strLine = "";
		string strSection = "";
		string strKey = "";
		string strValue = "";

		MySection*pSection = NULL;

		ifstream in(strPath.c_str());
		while (!in.eof())
		{
			getline(in, strLine);
			Trim(strLine);
			
			/*����пո���ȥ������whileͷ*/
			if (strLine == "")
			{
				continue;
			}

			/*�����section��ʶ��*/
			if (strLine.at(0) == '[')
			{
				strSection = GetSection(strLine);	//ȥ��[]
				collect.AddSection(strSection);	//��һ��section
				pSection = collect.GetSection(strSection);
				//�õ���ǰ��MySection�����������key-value��ֵ��
			}

			/*�����key-value��ֵ��*/
			if (strLine.at(0) != '[')
			{
				GetPair(strLine, strKey, strValue);	//�õ�key,valueֵ
				pSection->AddKeyValue(strKey, strValue);
				//��ǰ��section�������key-value��ֵ��
			}
		}
		in.close();
	}
};

int main()
{
	string path = "d:\\data.ini";

	/*����ini�ļ�ӳ�����*/
	MySectionCollect collect;
	/*��ȡini�ļ����ʼ��*/
	ReadIni ri(path, collect);

	/*��ȡini�ļ�����*/
	ri.Process();
	/*��ʾ��Ϣ���ж��Ƿ��ȡ��ȷ*/
	collect.Show(cout);

	system("pause");
	return 0;
}