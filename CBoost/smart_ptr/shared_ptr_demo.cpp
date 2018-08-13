/*************************************************************************************/
/*************************************** 2018.3.30 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

/*下面是基本的操作函数
shared_ptr<int> spi(new int); //一个int的shared_ptr
assert(spi); //bool语境中转换成Bool值
*spi = 253; //使用解引用操作符*

shared_ptr<string> sps(new string("smart")); //一个string的shared_ptr
assert(sps.size() == 5);
*/

/*shared_ptr基本用法
boost::shared_ptr<int>sp(new int(10));	//一个指向整数的shared_ptr
assert(sp.unique());	//现在shared_ptr是指针的唯一持有者

shared_ptr<int>sp2 = sp;	//拷贝构造函数，第二个shared_ptr

assert(sp == sp2&&sp.use_count() == 2);	//两个shared_ptr相等且指向同一个对象
										//应用计数：2

*sp2 = 100;	//解引用操作符修改被指向的对象
assert(*sp == 100);	//另一个shared_ptr也同时被修改

sp.reset();	//停止shared_ptr的使用
assert(!sp);	//sp不再持有任何指针（所以sp这个智能指针其实不是指针，而是一个指针的集合）
*/

/*
#include "iostream"
#include "algorithm"
#include "iterator"
using namespace std;

#include "boost/smart_ptr.hpp"
using namespace boost;

class Cshared
{
private:
	boost::shared_ptr<int> p;	//shared_ptr成员变量
public:
	Cshared(boost::shared_ptr<int> p_):p(p_){}
	void print()	//输出shared_ptr的引用计数和指向的值
	{
		cout << "count:" << p.use_count() << " v=" << *p << endl;
	}
};

void print_func(boost::shared_ptr<int> p)	//使用shared_ptr作为函数参数
{		//同样输出引用计数和指向的值
	cout << "count:" << p.use_count() << " v=" << *p << endl;
}

int main()
{
	boost::shared_ptr<int> p(new int(100));
	Cshared s1(p), s2(p);

	s1.print();
	s2.print();
	*p = 20;			//修改shared_ptr所指向的值

	print_func(p);
	s1.print();
	system("pause");
	return 0;
}
*/