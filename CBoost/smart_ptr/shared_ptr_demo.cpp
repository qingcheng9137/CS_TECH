/*************************************************************************************/
/*************************************** 2018.3.30 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

/*�����ǻ����Ĳ�������
shared_ptr<int> spi(new int); //һ��int��shared_ptr
assert(spi); //bool�ﾳ��ת����Boolֵ
*spi = 253; //ʹ�ý����ò�����*

shared_ptr<string> sps(new string("smart")); //һ��string��shared_ptr
assert(sps.size() == 5);
*/

/*shared_ptr�����÷�
boost::shared_ptr<int>sp(new int(10));	//һ��ָ��������shared_ptr
assert(sp.unique());	//����shared_ptr��ָ���Ψһ������

shared_ptr<int>sp2 = sp;	//�������캯�����ڶ���shared_ptr

assert(sp == sp2&&sp.use_count() == 2);	//����shared_ptr�����ָ��ͬһ������
										//Ӧ�ü�����2

*sp2 = 100;	//�����ò������޸ı�ָ��Ķ���
assert(*sp == 100);	//��һ��shared_ptrҲͬʱ���޸�

sp.reset();	//ֹͣshared_ptr��ʹ��
assert(!sp);	//sp���ٳ����κ�ָ�루����sp�������ָ����ʵ����ָ�룬����һ��ָ��ļ��ϣ�
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
	boost::shared_ptr<int> p;	//shared_ptr��Ա����
public:
	Cshared(boost::shared_ptr<int> p_):p(p_){}
	void print()	//���shared_ptr�����ü�����ָ���ֵ
	{
		cout << "count:" << p.use_count() << " v=" << *p << endl;
	}
};

void print_func(boost::shared_ptr<int> p)	//ʹ��shared_ptr��Ϊ��������
{		//ͬ��������ü�����ָ���ֵ
	cout << "count:" << p.use_count() << " v=" << *p << endl;
}

int main()
{
	boost::shared_ptr<int> p(new int(100));
	Cshared s1(p), s2(p);

	s1.print();
	s2.print();
	*p = 20;			//�޸�shared_ptr��ָ���ֵ

	print_func(p);
	s1.print();
	system("pause");
	return 0;
}
*/