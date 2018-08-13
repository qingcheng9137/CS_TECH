/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//编制多项式加法的类：
//多项使用list表示，容器内每个元素代表多项式中的每一项，设为p1,p2，p3暂时为空
//利用sort()函数，让p1,p2每一项按照系数升序排列
//利用iterator技术遍历p1,p2
//指数相等，如果系数之和不为0，则扔到p3，否则不扔
//指数不等，则指数小的扔到p3，迭代器加1
//当p1,p2的迭代指针有一个已经检测完毕，把另一个链表的剩余部分加到p3即可，splice实现


/*#include "iostream"
#include "vector"
#include "string"
#include "list"

using namespace std;

class CTerm
{
private:
	int icoef;
	int iexp;
public:
	CTerm(int icoef, int iexp) :icoef(icoef), iexp(iexp) {}
	int GetCoef()
	{
		return icoef;
	}
	int GetExp()
	{
		return iexp;
	}
	bool operator<(CTerm&t)
	{
		return iexp < t.GetExp();
	}
};

typedef list<CTerm> LIST_CTERM;

ostream& operator<<(ostream&os, CTerm&t)
{
	os << t.GetCoef() << "X" << t.GetExp();
	return os;
}

class CPolynomial
{
private:
	LIST_CTERM m_stlTermlist;
public:
	bool AddTerm(const CTerm&t)
	{
		m_stlTermlist.push_back(t);
		return true;
	}

	CPolynomial AddPolynomial(CPolynomial& obj)
	{
		CPolynomial result;
		m_stlTermlist.sort();//当前链排序
		obj.m_stlTermlist.sort();//被加链排序

		LIST_CTERM::iterator src = m_stlTermlist.begin();
		LIST_CTERM::iterator des = obj.m_stlTermlist.begin();

		int ncoef = 0;
		int nexp = 0;

		while ((src != m_stlTermlist.end()) && (des != obj.m_stlTermlist.end()))
		{
			int nCurExp1 = (*src).GetExp();
			int nCurExp2 = (*des).GetExp();

			if (nCurExp1 == nCurExp2)
			{
				ncoef = (*src).GetCoef() + (*des).GetCoef();
				nexp = (*src).GetExp();
				src++;
				des++;
			}
			if (nCurExp1 < nCurExp2)
			{
				ncoef = (*src).GetCoef();
				nexp = (*src).GetExp();

				src++;
			}
			if (nCurExp1 > nCurExp2)
			{
				ncoef = (*des).GetCoef();
				nexp = (*des).GetExp();
				des++;
			}
			if (ncoef != 0)
			{
				CTerm t(ncoef, nexp);
				result.AddTerm(t);
			}
		}

		//加上剩下多余部分的链表
		if (src != m_stlTermlist.end())
		{
			LIST_CTERM temp(src, m_stlTermlist.end());//此处先产生一个备份
			result.m_stlTermlist.splice(result.m_stlTermlist.end(), temp);
		}
		if (des != m_stlTermlist.end())
		{
			LIST_CTERM temp(des, obj.m_stlTermlist.end());
			result.m_stlTermlist.splice(result.m_stlTermlist.end(), temp);
		}

		return result;
	}

	//显示函数
	void Show()
	{
		LIST_CTERM::iterator iter = m_stlTermlist.begin();
		while (iter != m_stlTermlist.end())
		{
			cout << *iter << "+";
			iter++;
		}
	}

};
int main()
{
	CPolynomial p1;
	CPolynomial p2;

	CTerm t1(7, 0);
	CTerm t2(3, 1);
	CTerm t3(9, 8);
	CTerm t4(5, 17);
	CTerm t5(8, 1);
	CTerm t6(22, 7);
	CTerm t7(-9, 8);

	p1.AddTerm(t1);
	p1.AddTerm(t2);
	p1.AddTerm(t3);
	p1.AddTerm(t4);

	p2.AddTerm(t5);
	p2.AddTerm(t6);
	p2.AddTerm(t7);

	CPolynomial p3 = p1.AddPolynomial(p2);
	p3.Show();
	system("pause");
	return 0;

}
*/