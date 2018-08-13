/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//函数对象，求整形向量各元素之和

/*#include "iostream"
#include "vector"
#include "iterator"
#include "algorithm"//for_each

using namespace std;

class CSum
{
private:
	int nsum;
public:
	CSum()
	{
		nsum = 0;
	}
	void operator()(int nIndex)
	{
		nsum += nIndex;
	}
	//此处必须重载
	int GetSum()
	{
		return nsum;
	}
};

int main()
{
	vector<int>v;
	for (int ni = 1; ni < 100; ni++)
	{
		v.push_back(ni);
	}
	CSum sObj = for_each(v.begin(), v.end(), CSum());
	//sObj用来接收for_each迭代函数对象的最终结果
	cout << "sum = " << sObj.GetSum();
	return 0;
}*/