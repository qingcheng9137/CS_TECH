/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//��������������������Ԫ��֮��

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
	//�˴���������
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
	//sObj��������for_each����������������ս��
	cout << "sum = " << sObj.GetSum();
	return 0;
}*/