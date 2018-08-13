/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//用list实现：合并两个文本文件为一个文件，并且剔除两个文本中相同的内容，最后的结果升序排
//思路：将两个文本文件的数据映射成为两个list容器中的元素
//对两个list容器分别进行升序排列，利用sort
//合并两个已经排好的list元素，利用merge
//利用unique只保留一个

/*#include "iostream"
#include "list"
#include "string"

using namespace std;

class CStudent
{
private:
	string strNo;
	string strName;
	string strUniversity;
	int nGrades;
public:
	CStudent(string strNo, string strName, string strUniversity, int nGrades) :
		strNo(strNo), strName(strName), strUniversity(strUniversity), nGrades(nGrades) {}
	bool operator < (CStudent&s)//由于需要排序，必须要比较大小
	{
		return strNo < s.GetNo();
	}
	bool operator == (CStudent&s)//unique函数需要判断是否相同
	{
		return strNo == s.GetNo();
	}
	string GetNo()
	{
		return strNo;
	}
	string GetName()
	{
		return strName;
	}
	string GetUniversity()
	{
		return strUniversity;
	}
	int GetGrades()
	{
		return nGrades;
	}
};

ostream&operator<<(ostream&os, CStudent&s)//因为需要用cout输出对象
{
	os << s.GetNo() << "\t" << s.GetName() << "\t" << 
		s.GetUniversity() << "\t" <<  s.GetGrades();
	return os;
}

typedef list<CStudent> LIST_STU;

class CStudentMerge
{
private:
	LIST_STU list_student;
public:
	bool Add(const CStudent&s)
	{
		list_student.push_back(s);
		return true;
	}
	bool Merge(CStudentMerge&stud)//这里的封装有适配器的思想
	{
		list_student.sort();
		stud.list_student.sort();
		list_student.merge(stud.list_student);
		list_student.unique();
		return true;
	}
	void Show()
	{
		for (LIST_STU::iterator iter = list_student.begin(); iter != list_student.end();
		iter++)
		{
			cout << *iter << endl;//这里运用到了os输出流
		}
	}
};

int main()
{
	CStudentMerge sm1;
	CStudentMerge sm2;
	CStudent s1("1001", "zhenghan", "tsinghua", 699);//注意，这里的数字千万不可以加引号，涉及到类型问题
	CStudent s2("1002", "lisi", "beida", 668);
	CStudent s3("1003", "wangwu", "fudan", 665);
	CStudent s4("1004", "zhaoliu", "shangjiao", 664);
	CStudent s5("1005", "qianzhe", "tongji", 663);

	sm1.Add(s1);
	sm1.Add(s2);
	sm1.Add(s3);
	
	sm2.Add(s3);
	sm2.Add(s4);
	sm2.Add(s5);

	sm1.Merge(sm2);
	sm1.Show();
	system("pause");
	return 0;
}
*/