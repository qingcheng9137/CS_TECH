/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//չʾdate_time���ǿ�����ã������c++ʱ������⣨1400��֮ǰ�����鲻���ԣ�
//������date_time����һ�����ÿ�����Ϣ������

//�������ڵ����
/*#include "boost/date_time/gregorian/gregorian.hpp"
using namespace boost::gregorian;

//����ʱ������
#include "boost/date_time/posix_time/posix_time.hpp"
using namespace boost::posix_time;

#include "iostream"
using namespace std;

class Ccredit_card
{
public:
	string strbank_name;
	int nbill_day_no;//������
	Ccredit_card(const char*bname, int no) :strbank_name(bname), nbill_day_no(no) {}
	
	//��Ա����calc_free_days�����������ÿ�����Ϣ�ڣ����ݴ���������յõ�����һ���������գ������Ϣ��
	int calc_free_days(date dconsume_day = day_clock::local_day()) const
	{
		date dbill_day(dconsume_day.year(), dconsume_day.month(), nbill_day_no);
		//�õ����˵�����
		if (dconsume_day > dbill_day)
		{
			dbill_day += months(1);
		}
		return (dbill_day - dconsume_day).days() + 20;//��Ϣ�ڼ���
	}

	//���������<
	friend bool operator< (const Ccredit_card&c,const Ccredit_card&d) 
	{
		return c.calc_free_days() < d.calc_free_days();
	}//�˴�����friend�������ǿ�������operator�Ĳ���
};

int main()
{
	Ccredit_card a("A bank", 25);
	Ccredit_card b("B bank", 10);

	Ccredit_card tmp = std::max(a, b);//��׼���ǿ���㷨�������������й�
	cout << "You should use " << tmp.strbank_name << ", freedays = "
		<< tmp.calc_free_days() << endl;
	system("pause");
	return 0;
}*/