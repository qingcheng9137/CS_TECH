/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//scoped_ptrû�ж���Ĳ�������ȫ��ͬʱ��֤Ч��
//�����������죬��������
//scoped_ptr�Ĺ��ܺ��٣�unique_ptr��������������ǰ�߸���רһ��������Ը���ȫ
//����һ�����⣺scoped_ptr����������p,fp�ڳ�����ĸ��ط�������

/*#include "iostream"
using namespace std;

#include "boost/smart_ptr.hpp"
using namespace boost;

struct Cposix_file
{
	Cposix_file(const char*file_name)//���캯�����ļ�
	{
		cout << "open file:" << file_name << endl;
	}
	~Cposix_file()//���������ر��ļ�
	{
		cout << "close file" << endl;
	}
};

int main()
{
	//�ļ���scope_ptr,�����뿪�������ʱ���Զ��������ر��ļ��ͷ���Դ
	scoped_ptr<Cposix_file> fp(new Cposix_file("/tmp/a.txt"));

	scoped_ptr<int> p(new int);

	if (p)//��ʾһ��Ĳ���
	{
		*p = 100;
		cout << *p << endl;
	}
	p.reset();//�ÿ�

	assert(p == 0);//��0�Ƚϣ�pû���κ�ָ��
	if (!p)
	{
		cout << "scoped_ptr == nullptr" << endl;
	}
	system("pause");
	return 0;
}*/