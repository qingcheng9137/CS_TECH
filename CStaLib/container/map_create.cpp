/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//���ֳ����Ĵ���ӳ��ķ���
//mapӳ��Ĭ���ǰ��ռ�ֵ�������У��˴��ǵ�һ������
//����multimap�Ϳ��԰Ѽ�ֵ��ͬ��Ԫ�����г�����map����
//pair��һ������ģ�������ģ���࣬�˴���������һ�����ͣ�map�����ӵĶ���pair����
//Display()��������ĵ���������pair<int,string>*������map�涨��.first���Ǽ�ֵ
//������һ��map�������÷�:[]

/*#include "map"
#include "iostream"
#include "string"

using namespace std;

void Display(map<int,string>&m)//�˴���ͬ����������Ĳ���������
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

	cout << "ͨ��insert����������" << endl;
	Display(mymap);

	cout << "ͨ�����ƹ��캯��������" << endl;
	map<int, string>mymap_sec(mymap);
	Display(mymap_sec);
	system("pause");
	return 0;
}*/

/*int main()
{
	map<string, string>mymap;
	mymap["1-1"] = "Ԫ��";//������������ݣ����Ǽ�ֵ
	mymap["5-1"] = "�Ͷ���";
	string s = mymap["1-1"];//��ѯ
	if (s.size() > 0)//��ѯ�õ����
	{
		cout << "1-1�ǣ�" << s << endl;
	}
}
*/