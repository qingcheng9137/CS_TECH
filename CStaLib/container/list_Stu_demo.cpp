/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//��listʵ�֣��ϲ������ı��ļ�Ϊһ���ļ��������޳������ı�����ͬ�����ݣ����Ľ��������
//˼·���������ı��ļ�������ӳ���Ϊ����list�����е�Ԫ��
//������list�����ֱ�����������У�����sort
//�ϲ������Ѿ��źõ�listԪ�أ�����merge
//����uniqueֻ����һ��

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
	bool operator < (CStudent&s)//������Ҫ���򣬱���Ҫ�Ƚϴ�С
	{
		return strNo < s.GetNo();
	}
	bool operator == (CStudent&s)//unique������Ҫ�ж��Ƿ���ͬ
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

ostream&operator<<(ostream&os, CStudent&s)//��Ϊ��Ҫ��cout�������
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
	bool Merge(CStudentMerge&stud)//����ķ�װ����������˼��
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
			cout << *iter << endl;//�������õ���os�����
		}
	}
};

int main()
{
	CStudentMerge sm1;
	CStudentMerge sm2;
	CStudent s1("1001", "zhenghan", "tsinghua", 699);//ע�⣬���������ǧ�򲻿��Լ����ţ��漰����������
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