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
	cout << "set(����ֵ����5��Ԫ�أ�";
	//for (te = rangeset.first; te != rangeset.second; te++)
	//{
		//cout << *te << "\t";
	//}ò��ûɶ����
	cout << endl;
	cout << "\t�����ǣ�" << nCount << endl;
	cout << "\t�ܹ�Ԫ�صĸ����ǣ�" << myset.size() << endl;

	multiset<int>::iterator it;
	cout << "multiset(����ֵ����5��Ԫ�أ�";
	for (it = rangemultiset.first; it != rangemultiset.second; it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	cout << "\t�����ǣ�" << nMultiseCount << endl;
	cout << "\t�ܹ�Ԫ�صĸ����ǣ�" << mymultiset.size() << endl;
	system("pause");
	return 0;
}*/