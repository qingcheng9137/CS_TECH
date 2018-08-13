/*************************************************************************************/
/*************************************** 2018.4.10 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//调用count函数，查询有多少学生成绩是80分
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
//	Student s1(1000, "张三", 80);
//	Student s2(1001, "李四", 80);
//	Student s3(1002, "王五", 90);
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	int nCount = count(v.begin(), v.end(), 80);
//	cout << "成绩80的人数：" << nCount << endl;
//	system("pause");
//	return 0;
//}