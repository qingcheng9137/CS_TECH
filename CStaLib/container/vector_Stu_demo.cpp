/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//��vector��дһ��ѧ���ɼ�����ϵͳ���ܹ�ʵ�ֲ�ѯ�������Ĺ���
//����һ���൱���ɵĳ���
//��Ҫ��˼���ǣ���Ҫ��һ��������Ϣ��͸û�����Ϣ�ļ�����
//��������Ҫ�����ǹ�������vector<CStudent>v�ǹؼ�

/*#include "iostream"
#include "vector"
#include "string"

using namespace std;

class CStudent
{
public:
	string strName;
	string strNo;
	string strSex;
	string strData;
public:
	CStudent(string str_m_name, string str_m_no, string str_m_sex, string
		str_m_data) :strName(str_m_name), strNo(str_m_no), strSex(str_m_sex),
		strData(str_m_data) {};
	void Display()
	{
		cout << strNo << "\t" << strName << "\t" << strSex << "\t" << strData
			<< "\t" << endl;
	}
};

class CStudentCollect
{
	typedef vector<CStudent> VEC_STU;
	VEC_STU vec_stu;
public:
	void Add(CStudent&s)
	{
		vec_stu.push_back(s);
	}
	CStudent* Find(string str_find_No)
	{
		bool bFind = false;
		int ni;
		for (ni = 0; ni < vec_stu.size(); ni++)
		{
			CStudent&s = vec_stu[ni];//����
			if (s.strNo == str_find_No)
			{
				bFind = true;
				break;
			}
		}
		CStudent*pStu_Find = NULL;
		if (bFind)
		{
			pStu_Find = &vec_stu[ni];
		}
		return pStu_Find;
	}
};

int main()
{
	CStudent s1("zhangsan", "1001", "boy", "1999-12-29");
	CStudent s2("wangwu", "1002", "boy", "1998-01-03");
	CStudent s3("lisi", "1003", "girl", "1999-5-29");
	CStudentCollect s;
	s.Add(s1);
	s.Add(s2);
	s.Add(s3);
	CStudent*ps = s.Find("1003");
	if (ps)
	{
		ps->Display();//ͨ��ָ��ֱ�ӷ�����ĳ�Ա
	}
	system("pause");
	return 0;
}*/