/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//scoped_ptr没有多余的操作，安全的同时保证效率
//不允许拷贝构造，拷贝复制
//scoped_ptr的功能很少，unique_ptr包含了它。但是前者更加专一，所以相对更安全
//存在一个问题：scoped_ptr的两个对象p,fp在程序的哪个地方析构？

/*#include "iostream"
using namespace std;

#include "boost/smart_ptr.hpp"
using namespace boost;

struct Cposix_file
{
	Cposix_file(const char*file_name)//构造函数打开文件
	{
		cout << "open file:" << file_name << endl;
	}
	~Cposix_file()//析构函数关闭文件
	{
		cout << "close file" << endl;
	}
};

int main()
{
	//文件类scope_ptr,将在离开作用域的时候自动析构，关闭文件释放资源
	scoped_ptr<Cposix_file> fp(new Cposix_file("/tmp/a.txt"));

	scoped_ptr<int> p(new int);

	if (p)//演示一般的操作
	{
		*p = 100;
		cout << *p << endl;
	}
	p.reset();//置空

	assert(p == 0);//和0比较，p没有任何指针
	if (!p)
	{
		cout << "scoped_ptr == nullptr" << endl;
	}
	system("pause");
	return 0;
}*/