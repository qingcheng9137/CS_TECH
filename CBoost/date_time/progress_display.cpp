/*************************************************************************************/
/*************************************** 2018.3.27 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/
//progress_display�����ڿ���̨����ʾ�����ִ�н��ȡ��������ִ�кܺķ�ʱ�䣬���ܹ��ṩһ���Ѻõ��û�
//����.progress_display��һ���������࣬��timer���е����������������timer��progress_displayû��
//�κ���ϵ��progress_display�ǽ���ָʾ��(��Ȼ��һ���ࣩ
//ʹ�õ�ʱ����Ҫȷ���Լ��ĳ���û�б�Ŀ��ܵĸ������

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

	//����һ��progress_display����,������v�Ĵ�С
	boost::progress_display pd(v.size());//����progress_display�Ĺ��캯��

	//��ʼ�������������������ַ�����д���ļ�
	for (auto&x : v)//��ʾx��v�е�Ԫ��
	{
		fs << x << endl;
		++pd;
	}
	getchar();
}*/