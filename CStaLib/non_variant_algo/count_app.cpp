/*************************************************************************************/
/*************************************** 2018.4.10 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//����count��������ѯ�ж���ѧ���ɼ���80��
//template<class InIt,class T>
//size_t count(InIt first, InIt last, const &T val);

//#include "iostream"
//#include "algorithm"
//#include "vector"
//
//using namespace std;
//
//class Student
//{
//public:
//	int NO;
//	string strName;
//	int grade;
//	Student(int NO, string strName, int grade)
//	{
//		this->NO = NO;
//		this->strName = strName;
//		this->grade = grade;
//	}
//	bool operator == (int grade)
//	{
//		return this->grade == grade;
//	}
//};
//int main()
//{
//	vector<Student>v;
//	Student s1(1000, "����", 80);
//	Student s2(1001, "����", 80);
//	Student s3(1002, "����", 90);
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	int nCount = count(v.begin(), v.end(), 80);
//	cout << "�ɼ�80��������" << nCount << endl;
//	system("pause");
//	return 0;
//}