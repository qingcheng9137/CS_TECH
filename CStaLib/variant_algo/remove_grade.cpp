///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////����remove()ɾ������ʵ�֣���ѧ����������ȡ�ܳɼ����ڻ����150�ֵ�ѧ����Ϣ
////�����ļ�����
//
////#include "iostream"
////#include "fstream"
////#include "vector"
////#include "string"
////#include "algorithm"
////#include "functional"
////#include "iterator"
//#include "stdafx.h"
//using namespace std;
//
//class Student
//{
//public:
//	string name;
//	string studno;
//	int chinese;
//	int math;
//public:
//	Student(){}
//	Student(string name, string studno, int chinese, int math){
//		this->name = name;
//		this->studno = studno;
//		this->chinese = chinese;
//		this->math = math;
//	}
//	bool operator<(const int &total)const{
//		return ((chinese + math) < total);
//	}
//};
//
//bool MyCompare(const Student&s){
//	return s < 150;
//}
//
//ostream&operator<<(ostream&os, const Student&s)
//{
//	os << s.name << "\t" << s.chinese << "\t" << s.math;
//	return os;
//}
//
//int main()
//{
//	Student s1("zhangsan", "1001", 60, 70);
//	Student s2("wangwu", "1002", 80, 90);
//	
//	vector<Student>v;
//	v.push_back(s1);
//	v.push_back(s2);
//
//	/*�˴�����������ļ�*/
//	ofstream out("d:\\remove_grade.txt");	//�����ļ�
//	remove_copy_if(v.begin(), v.end(), ostream_iterator<Student>(out, "\n"), MyCompare);
//	out.close();
//	/*�����Ѳ�ѯ����ŵ�����һ��������*/
//	vector<Student>vResult;
//	remove_copy_if(v.begin(), v.end(), back_inserter(vResult), MyCompare);
//	system("pause");
//	return 0;
//}