/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//STL�ж�Ԫ����������һ��ģ���࣬������ģ������������ǵ���������
//�˳���ʵ��һ��ѧ���ɼ��������й���

/*#include "iostream"
#include "vector"
#include "algorithm"
#include "iterator"
#include "functional"
#include "string"

using namespace std;

class CStudent
{
public:
	string strName;
	int nGrade;
public:
	CStudent(string strName, int nGrade)
	{
		this->strName = strName;
		this->nGrade = nGrade;
	}
	bool operator<(const CStudent&s) const
	{
		return nGrade < s.nGrade;
	}
};

ostream& operator<<(ostream&os, const CStudent&s)
{
	os << s.strName << "\t" << s.nGrade << "\n";//string��
	return os;
}//һ���ܼ򵥵����������,�ͺ�����������Ӧ

template<class _inPara1,class _inPara2>
class binary_sort :public binary_function<_inPara1, _inPara2, bool>
{
public:
	bool operator()(_inPara1 in1, _inPara2 in2)
	{
		return in1 < in2;
	}
};

int main()
{
	CStudent s1("zhanghan", 60);
	CStudent s2("lisi", 80);
	CStudent s3("wangwu", 100);

	vector<CStudent>v;
	v.push_back(s1);
	v.push_back(s2);
	v.push_back(s3);

	sort(v.begin(), v.end(), binary_sort<const CStudent&, const CStudent>());
	//�������У�sort()��algorithm���е�һ����Ҫ�ĺ�����mlogn�Ĳ�Σ�
	copy(v.begin(), v.end(), ostream_iterator<CStudent>(cout, ""));
	//�������vector����������˴���cout��׼�������
	getchar();
	return 0;
}*/