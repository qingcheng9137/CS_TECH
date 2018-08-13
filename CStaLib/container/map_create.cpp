/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//两种常见的创建映射的方法
//map映射默认是按照键值升序排列，此处是第一个参数
//运用multimap就可以把键值相同的元素排列出来，map不行
//pair是一种两个模板参数的模板类，此处可以理解成一种类型，map里面扔的都是pair类型
//Display()函数里面的迭代器都是pair<int,string>*，按照map规定，.first即是键值
//最后介绍一下map的特殊用法:[]

/*#include "map"
#include "iostream"
#include "string"

using namespace std;

void Display(map<int,string>&m)//此处不同以往，这里的参数是引用
{
	map<int, string>::iterator itmap = m.begin();
	while (itmap != m.end())
	{
		cout << (*itmap).first << "\t" << (*itmap).second << endl;
		itmap++;
	}
}

int main()
{
	map<int, string>mymap;
	pair<int, string>s1(1, "zhangsan");
	pair<int, string>s2(2, "lisi");
	pair<int, string>s3(3, "wangwu");
	pair<int, string>s4(1, "zhaoliu");

	mymap.insert(s1);
	mymap.insert(s2);
	mymap.insert(s3);
	mymap.insert(s4);

	cout << "通过insert函数创建：" << endl;
	Display(mymap);

	cout << "通过复制构造函数创建：" << endl;
	map<int, string>mymap_sec(mymap);
	Display(mymap_sec);
	system("pause");
	return 0;
}*/

/*int main()
{
	map<string, string>mymap;
	mymap["1-1"] = "元旦";//括号里面的内容，就是键值
	mymap["5-1"] = "劳动节";
	string s = mymap["1-1"];//查询
	if (s.size() > 0)//查询得到结果
	{
		cout << "1-1是：" << s << endl;
	}
}
*/