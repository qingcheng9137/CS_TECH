/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//展示三个插入迭代器，以及两个插入函数
//此处容器的选择，需要支持push_back,push_front

/*#include "iostream"
#include "list"
#include "iterator"

using namespace std;

void Display(list<int>&v)
{
	for (list<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

int main()
{
	list<int>v;
	back_insert_iterator<list<int>>backit(v);   //第一个迭代器：返回容器x的后插迭代器
	*backit++ = 1;
	*backit++ = 2;
	Display(v);//1 2
	*back_inserter(v) = 3;//第一个函数
	*back_inserter(v) = 4;
	Display(v);//1 2 3 4

	front_insert_iterator<list<int>>frontit(v);//第二个迭代器：返回容器x的前插迭代器
	*frontit++ = 5;
	*frontit++ = 6;//默认从第一个元素开始做
	Display(v);//6 5 1 2 3 4 
	*front_inserter(v)++ = 7;//第二个函数
	*front_inserter(v)++ = 8;
	Display(v);// 8 7 6 5 1 2 3 4

	list<int>::iterator it = v.begin();
	for (int ni = 0; ni < 3; ni++)
	{
		it++;//得到list容器中第4个元素的迭代指针（it是3，指向第4个元素）
	}
	insert_iterator<list<int>>insertit(v, it);//第三个迭代器：某指定位置迭代器
	*insertit++ = 9;
	Display(v);
	system("pause");
	return 0;


}*/