///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////����sort����ʵ�ֶԷǻ�����������,����
////��������õ���sort��һ��ģ�庯��
////�������sort�ڶ���ģ�庯��,Ӧ�������޸ģ�
////1.��������sort�ĵ�����������Ϊmyascend
////2.ȥ��Student���е�bool operator<(Student &s)���������ⲿ����һ����ͨ��ȫ�ֺ���
////bool myascend(Student &s1, Student &s2)
////{
////	return s1.grade < s2.grade;
////}
////3.������ֱ����less�������󣬻�����Student�������κ��޸ģ�ֻ��Ҫ��������sort�޸ģ�
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
//	/*���رȽ������<*/
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
//	cout << "����������:" << endl;
//	cout << "ѧ��\t" << "����\t" << "�ɼ�" << endl;
//	copy(v.begin(), v.end(), ostream_iterator<Student>(cout, "\n"));
//
//	system("pause");
//	return 0;
//}