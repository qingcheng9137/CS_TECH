/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//to create a set
//According to the output, we should create a set by constructive function

/*#include "iostream"
#include "set"

using namespace std;

void display(multiset<int>&s)
{
	multiset<int>::iterator iter = s.begin();
	while (iter != s.end())
	{
		cout << *iter << "\t" << endl;
		iter++;
	}
	cout << endl;
}

int main()
{
	int aTest[] = { 1,9,5,5,3,8,4 };
	multiset<int>myset;
	for (int ni = 0; ni < myset.size(); ni++)//更一般的中间应该写成：sizeof(aTest)/sizeof(int)
	{
		myset.insert(aTest[ni]);
	}

	cout << "通过函数insert添加集合：" << endl;
	display(myset);

	cout << "通过复制构造函数：" << endl;
	multiset<int>myset_sec(myset);
	display(myset_sec);

	cout << "通过构造函数set(const value_type*first,const value_type*last)创建集合：" << endl;
	multiset<int>myset_thi(aTest, aTest + sizeof(aTest) / sizeof(int));
	display(myset_thi);
	system("pause");
	return 0;

}*/