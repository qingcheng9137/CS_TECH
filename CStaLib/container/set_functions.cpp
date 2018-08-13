/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//equal_range,pair,count,size

/*#include "iostream"
#include "set"

using namespace std;

int main()
{
	int aTest[] = { 5,4,3,5,5,2,7,8 };

	set<int>myset(aTest, aTest + sizeof(aTest) / sizeof(int));
	multiset<int>mymultiset(aTest, aTest + sizeof(aTest) / sizeof(int));

	pair<set<int>::iterator, set<int>::iterator>rangeset;
	pair<multiset<int>::iterator, multiset<int>::iterator>rangemultiset;

	int nCount = myset.count(5);
	int nMultiseCount = mymultiset.count(5);

	set<int>::iterator te;
	cout << "set(搜索值等于5的元素）";
	//for (te = rangeset.first; te != rangeset.second; te++)
	//{
		//cout << *te << "\t";
	//}貌似没啥卵用
	cout << endl;
	cout << "\t个数是：" << nCount << endl;
	cout << "\t总共元素的个数是：" << myset.size() << endl;

	multiset<int>::iterator it;
	cout << "multiset(搜索值等于5的元素）";
	for (it = rangemultiset.first; it != rangemultiset.second; it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	cout << "\t个数是：" << nMultiseCount << endl;
	cout << "\t总共元素的个数是：" << mymultiset.size() << endl;
	system("pause");
	return 0;
}*/