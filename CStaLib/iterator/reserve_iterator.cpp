/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//逆向迭代器主要目的是逆向遍历容器元素序列，需要两个模板参数（第一个是迭代器类型，第二个是容器元素类型
//主要两个：
//reverse_iterator(Ranit x)表示随机迭代器,vector容器是代表
//reverse_bidirectional_iterator(Bidid x)表示双向迭代器,list容器是代表

//目前出了一个问题：reverse_iterator<>显示参数太多

/*#include "iostream"
#include "list"
#include "vector"
#include "iterator"

using namespace std;

template<class reverse_iterator>
void reverse_display(reverse_iterator first, reverse_iterator last)//通用模板逆向显示函数
{
	while (first != last)
	{
		cout << *first << "\t";
		first++;
	}
	cout << endl;
}

int main()
{
	vector<int>v;
	list<int>l;
	for (int ni = 1; ni <= 5; ni++)
	{
		v.push_back(ni);//v:1 2 3 4 5
		l.push_back(ni + 5);//l:6 7 8 9 10
	}

	cout << "vector元素逆向显示：" << endl;
	reverse_iterator<vector<int>::iterator, int>first(v.end());
	reverse_iterator<vector<int>::iterator, int>end(v.begin());
	reverse_display(first, end);
}
*/