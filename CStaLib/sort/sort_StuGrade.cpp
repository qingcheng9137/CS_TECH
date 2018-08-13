///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////采用sort函数实现对非基本数据排序,升序
////本程序采用的是sort第一个模板函数
////如果采用sort第二个模板函数,应该如下修改：
////1.主函数中sort的第三个参数改为myascend
////2.去掉Student类中的bool operator<(Student &s)函数，在外部增加一个普通的全局函数
////bool myascend(Student &s1, Student &s2)
////{
////	return s1.grade < s2.grade;
////}
////3.或者是直接用less函数对象，基本类Student不用做任何修改，只需要主程序中sort修改：
////sort(v.begin(),v.end(),lsee<Student>())
//
//#include "stdafx.h"
//
//class Student
//{
//public:
//	int NO;
//	string name;
//	int grade;
//	Student(int NO, string name, int grade)
//	{
//		this->NO = NO;
//		this->name = name;
//		this->grade = grade;
//	}
//	/*重载比较运算符<*/
//	bool operator<(const Student&s)const
//	{
//		return grade < s.grade;
//	}
//};
//
//ostream&operator<<(ostream&os, const Student&s)
//{
//	os << s.NO << "\t" << s.name << "\t" << s.grade;
//	return os;
//}
//
//int main()
//{
//	Student s1(101, "zhaan", 99);
//	Student s2(102, "wangwu", 66);
//	Student s3(103, "zhaosi", 77);
//	Student s4(104, "qianqi", 88);
//
//	vector<Student>v;
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	v.push_back(s4);
//
//	sort(v.begin(), v.end());
//
//	cout << "升序排列是:" << endl;
//	cout << "学号\t" << "姓名\t" << "成绩" << endl;
//	copy(v.begin(), v.end(), ostream_iterator<Student>(cout, "\n"));
//
//	system("pause");
//	return 0;
//}