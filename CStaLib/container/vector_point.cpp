/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//increase and display the elements by a point

/*#include "iostream"
#include "vector"

using namespace std;

class CTest
{
public:
	int ni;
public:
	CTest(int ni)
	{
		this->ni = ni;
	}
};

int main()
{
	typedef vector<CTest*> ctest_vec;
	CTest*pa1 = new CTest(1);//调用构造函数
	CTest*pa2 = new CTest(2);
	ctest_vec pca_vec;
	pca_vec.push_back(pa1);
	pca_vec.push_back(pa2);
	int nSize = pca_vec.size();

	cout << "Output by reference: " << endl;
	for (int ni = 0; ni < nSize; ni++)
	{
		CTest* &nValue = pca_vec.at(ni);//nValue是一个对象（指针）
		cout << nValue->ni;
	}

	cout << endl << "Output by iterator: " << endl;
	vector<CTest*>::iterator pca_vec_iter = pca_vec.begin();
	for (; pca_vec_iter != pca_vec.end(); pca_vec_iter++)
	{
		cout << (**pca_vec_iter).ni;
	}
	system("pause");
	return 0;

	delete pa1;
	delete pa2;//否则内存泄露
}*/