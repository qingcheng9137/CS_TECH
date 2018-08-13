/*************************************************************************************/
/*************************************** 2018.3.27 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/
//progress_display可以在控制台上显示程序的执行进度。如果程序执行很耗费时间，它能够提供一个友好的用户
//界面.progress_display是一个独立的类，和timer库中的其他两个组件——timer和progress_display没有
//任何联系。progress_display是进度指示器(当然是一个类）
//使用的时候，需要确定自己的程序没有别的可能的干扰输出

/*#include "boost/progress.hpp"
#include "iostream"
#include "vector"
#include "string"
#include "fstream"

using namespace std;

int main()
{
	vector<string> v(100);
	ofstream fs("./test.txt");

	//声明一个progress_display对象,基数是v的大小
	boost::progress_display pd(v.size());//调用progress_display的构造函数

	//开始迭代遍历向量，处理字符串，写入文件
	for (auto&x : v)//表示x是v中的元素
	{
		fs << x << endl;
		++pd;
	}
	getchar();
}*/