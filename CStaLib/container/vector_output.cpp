/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//output the elements of a vector
//combine with a progress_timer

/*#include "iostream"
#include "vector"
#include "boost/progress.hpp"

using namespace std;
using namespace boost;

int main()
{
	typedef vector<int> INT_VEC;
	INT_VEC int_vec;
	{
		boost::progress_timer t;
		for (int ni = 0; ni < 1000000; ni++)
		{
			int_vec.push_back(ni);
		}
	}
	int nSize = size(int_vec);
	cout << "The size is : " << nSize << endl;
	cout << "Output by array: " << endl;
	{
		boost::progress_timer t;
		for (int ni = 0; ni < nSize; ni++)
		{
			boost::progress_timer t;
		}
	}
	cout << "Output by reference: " << endl;
	{
		boost::progress_timer t;
		for (int ni = 0; ni < nSize; ni++)
		{
			int &nValue = int_vec.at(ni);
		}
	}
	cout << "Output by iterator: " << endl;
	vector<int>::iterator int_vec_iter = int_vec.begin();//ÉêÃ÷µü´úÆ÷
	{
		boost::progress_timer t;
		for (; int_vec_iter != int_vec.end(); ++int_vec_iter)
		{
			boost::progress_timer t;
		}
	}
	system("pause");
	return 0;
}*/