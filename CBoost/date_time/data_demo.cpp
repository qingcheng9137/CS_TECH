/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//展示date_time库的强大作用：解决了c++时间的问题（1400年之前的事情不可以）
//这里用date_time库解决一个信用卡的免息的问题

//处理日期的组件
/*#include "boost/date_time/gregorian/gregorian.hpp"
using namespace boost::gregorian;

//处理时间的组件
#include "boost/date_time/posix_time/posix_time.hpp"
using namespace boost::posix_time;

#include "iostream"
using namespace std;

class Ccredit_card
{
public:
	string strbank_name;
	int nbill_day_no;//记账日
	Ccredit_card(const char*bname, int no) :strbank_name(bname), nbill_day_no(no) {}
	
	//成员函数calc_free_days用来计算信用卡的免息期，依据传入的消费日得到”下一个“记账日，算出免息期
	int calc_free_days(date dconsume_day = day_clock::local_day()) const
	{
		date dbill_day(dconsume_day.year(), dconsume_day.month(), nbill_day_no);
		//得到记账的日子
		if (dconsume_day > dbill_day)
		{
			dbill_day += months(1);
		}
		return (dbill_day - dconsume_day).days() + 20;//免息期计算
	}

	//重载运算符<
	friend bool operator< (const Ccredit_card&c,const Ccredit_card&d) 
	{
		return c.calc_free_days() < d.calc_free_days();
	}//此处加上friend的作用是可以增加operator的参数
};

int main()
{
	Ccredit_card a("A bank", 25);
	Ccredit_card b("B bank", 10);

	Ccredit_card tmp = std::max(a, b);//标准库的强大算法，和上文重载有关
	cout << "You should use " << tmp.strbank_name << ", freedays = "
		<< tmp.calc_free_days() << endl;
	system("pause");
	return 0;
}*/