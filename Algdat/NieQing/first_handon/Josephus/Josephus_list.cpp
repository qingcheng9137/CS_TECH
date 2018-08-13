/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//achieve Josephus

/*#include "iostream"
#include "vector"

using namespace std;

typedef vector<int> VEC_INT;

int main()
{
	int npeople;
	int npassing;
	cout << "How many people? Write the number of people" << endl;
	cin >> npeople;
	cout << "Input the passing value" << endl;
	cin >> npassing;
	VEC_INT vec_men;
	for (int ni = 0; ni < npeople; ni++)
	{
		vec_men.push_back(ni + 1);
	}
	VEC_INT::iterator iter = vec_men.begin();
	//VEC_INT::iterator iter2 = vec_men.begin();
	cout << "The eliminated people are: " << endl;
	//int nIndex = 0;
	while (!vec_men.empty())
	{
		//VEC_INT::iterator iter2 = iter + npassing + 1;
		//for (;; nIndex += npassing)
		//{
		//	vec_men.erase
		//}
		//for (iter = vec_men.begin(); iter != vec_men.end(); iter++)
		//{
			/*if (iter2 == iter + npassing)
			{
				cout << *iter2 << "\t";
				iter = vec_men.erase(iter);
			}
			else if (iter2 > vec_men.end())
			{

			}
			iter2++;*/
		/*	for (int nj = 0; nj < npassing; nj++)
			{
				++iter;
				if (iter == vec_men.end())
				{
					iter = vec_men.begin();
				}
			}
			if (vec_men.size() != 1)
			{
				cout << *iter << endl;
			}
			iter = vec_men.erase(iter);
			if (iter == vec_men.end())
			{
				iter = vec_men.begin();
			}
		}
	//}
	system("pause");
	return 0;
}*/