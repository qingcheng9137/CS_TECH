///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////本程序出现了bug：vector越界,iterator + offset
//
//#include "stdafx.h"
//
//struct Student
//{
//	int NO;
//	string name;
//	int chinese;
//	int math;
//public:
///*这段代码，使得set_union在调用<的同时，又恰当的的修改了结果向量的值。
//	因为set_union通过operator<操作只能够保留v1向量或者v2向量的一个元素*/
//	bool operator<(const Student &s)
//	{
//		if (NO == s.NO)
//		{
//			math = s.math;
//		}
//		return NO < s.NO;
//	}
//};
//
//int main()
//{
//	vector<Student>v1;	//语文成绩向量
//	vector<Student>v2;	//数学成绩向量
//
//	ifstream in1("d:\\set_grades_chin.txt");	//打开语文成绩文件
//	ifstream in2("d:\\set_grades_math.txt");	//打开数学成绩文件
//
//	while (!in1.eof())	//读入语文成绩并且存入向量
//	{
//		Student s;	//我不确定这是否是创建动态对象的最好的方法,或许不错，因为s在括号之外就没用了
//		in1 >> s.NO >> s.name >> s.chinese;
//		v1.push_back(s);
//	}
//	while (!in2.eof())	//读入数学成绩并且存入向量
//	{
//		Student s;	
//		in2 >> s.NO >> s.name >> s.math;
//		v2.push_back(s);
//	}
//
//	in1.close();
//	in2.close();
//
//	set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v1.begin());	//合并
//
//	for (int ni = 0; ni < v1.size(); ni++)
//	{
//		Student&s = v1.at(ni);
//		cout << s.NO << "\t" << s.name << "\t" << s.chinese << "\t" << s.math << endl;
//	}
//
//	system("pause");
//	return 0;
//}