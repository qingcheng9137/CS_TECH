/*************************************************************************************/
/*************************************** 2018.4.15 ***********************************/
/*****************************          jerry zheng           ************************/
/**************************** beijing insititute of technology ***********************/
/*************************************************************************************/

//利用STL解析ini文件

/*ini文件是技术人员经常用到的一种系统配置方法，如何读取和快速识别ini文件中的内容实现起来比较繁琐
  但是STL是一个很好的解决方法，省去了许多底层函数的编制，ini文件格式示例如下：
  [mydatabase]
  connect=jdbc:odbc:mysrc
  user=administrator
  pwd=123456
  
  [mytable]
  tablename=student
  tablefields=studno.studname.age,birthday*/
/*主要有三种元素：section,key,value.key-value也叫做键值对，位于等号左右两侧，左侧叫做key，
  也就是关键码，右侧叫做键值，他们成对出现。section是由中括号"[]"标识的，一个ini文件是由许多
  section组成的，一个section是由许多个key-value键值对组成的，我们的任务就是把ini文件中的
  信息通过一定的方式保存在程序结构中*/

/*该例子只是生成了MySectionCollect对象用以封装ini配置文件的内容，这也是最关键的一步，以此基础
  可以得到好多其他功能。比如说一个功能是根据section字符串以及key键而想得到value，只需要在MySection
  类中以及MySectionCollect类中分别增加一个函数
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
	string section;	//一个section
	map<string, string>mapKey;	//由许多键值对组成
public:
	MySection(string section)
	{
		this->section = section;
	}

	/*增加key-value键值对函数*/
	bool AddKeyValue(string key, string value)
	{
		pair<string, string>p(key, value);
		mapKey.insert(p);
		return true;
	}

	/*显示section,做测试用，看是否已经保存到相应的变量中*/
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

/*一个ini文件*/
class MySectionCollect
{
	map<string, MySection>mapSection;	//有多个section组成
public:
	bool AddSection(string strSection)	//增加一个section
	{
		pair<string, MySection>p(strSection, MySection(strSection));
		mapSection.insert(p);
		return true;
	}

	/*根据section串标识得到section对象*/
	MySection*GetSection(string strSection)
	{
		map<string, MySection>::iterator it = mapSection.find(strSection);
		return &((*it).second);
	}
	
	/*显示各section内容，看是否读取正确*/
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
	string strPath;	//读取ini文件路径
	MySectionCollect&collect;		//把ini文件内容读入到的对象
public:
	ReadIni(string strPath, MySectionCollect&collect) :
		strPath(strPath), collect(collect){}
	void Trim(string&s)	//是s去空格
	{
		if (s != "")
		{
			s.erase(0, s.find_first_not_of(" "));	//删除左空格
			if (s != "")
			{
				s.erase(s.find_last_not_of(" ") + 1);	//删除右空格
			}
		}
	}

	/*得到去掉[]后的section串*/
	string GetSection(string strText)
	{
		strText.erase(0, strText.find_first_not_of("["));
		strText.erase(strText.find_last_not_of("]" + 1));
		return strText;
	}

	/*得到键key,值value*/
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
			
			/*如果有空格，略去，返回while头*/
			if (strLine == "")
			{
				continue;
			}

			/*如果是section标识符*/
			if (strLine.at(0) == '[')
			{
				strSection = GetSection(strLine);	//去掉[]
				collect.AddSection(strSection);	//加一个section
				pSection = collect.GetSection(strSection);
				//得到当前的MySection对象，用于添加key-value键值对
			}

			/*如果是key-value键值对*/
			if (strLine.at(0) != '[')
			{
				GetPair(strLine, strKey, strValue);	//得到key,value值
				pSection->AddKeyValue(strKey, strValue);
				//向当前的section对象添加key-value键值对
			}
		}
		in.close();
	}
};

int main()
{
	string path = "d:\\data.ini";

	/*定义ini文件映射对象*/
	MySectionCollect collect;
	/*读取ini文件类初始化*/
	ReadIni ri(path, collect);

	/*读取ini文件过程*/
	ri.Process();
	/*显示信息，判断是否读取正确*/
	collect.Show(cout);

	system("pause");
	return 0;
}