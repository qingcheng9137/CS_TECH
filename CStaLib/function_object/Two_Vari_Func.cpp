/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//STL中二元函数基类是一个模板类，有三个模板参数，且他们的类型任意
//此程序实现一个学生成绩升序排列功能

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
	os << s.strName << "\t" << s.nGrade << "\n";//string库
	return os;
}//一个很简单的运算符重载,和后面的输出流对应

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
	//升序排列，sort()是algorithm库中的一个重要的函数（mlogn的层次）
	copy(v.begin(), v.end(), ostream_iterator<CStudent>(cout, ""));
	//快速输出vector到输出流（此处是cout标准输出流）
	getchar();
	return 0;
}*/