/*************************************************************************************/
/*************************************** 2018.3.28 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//չʾfor_each��ǿ���÷�
//for_each����������һ���Ǻ���������ֻ�ܹ���һ������

/*��һ�����ӣ�������������Ԫ�ص�����*/

/*#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void PrintCube(int ni)
{
	cout << ni*ni*ni << endl;
}

int main()
{
	const int SIZE_VEC = 8;
	typedef vector<int> VECTOR_INT;
	typedef VECTOR_INT::iterator ITERATOR_VEC_INT;

	VECTOR_INT vec_num(SIZE_VEC);
	ITERATOR_VEC_INT start, end, it;

	for (int ni = 0; ni < SIZE_VEC; ni++)
	{
		vec_num[ni] = ni + 1;
	}

	start = vec_num.begin();
	end = vec_num.end();
	cout << "Numbers:{ ";
	//for (it = start; it != end; it++)
	//{
	//	cout << *it << " " << endl;
	//}
	cout << "}" << endl;
	for_each(start, end, PrintCube);//�����������ʹ������
	cout << "\n";
	system("pause");
	return 0;
}*/

//______________________________________________________________________

/*�ڶ������ӣ���ģ����һԪ�����������ĺͣ����ֵ����Сֵ*/
/*
#include "iostream"
#include "functional"
#include "algorithm"

using namespace std;

template<class T,class _outPara>
class CPrintInfo :public unary_function<T, _outPara>
{
private:
	T nsum;
	T nMax;
	T nMin;
	T nCount;
public:
	CPrintInfo() :nCount(0), nsum(0){}
	T GetSum()
	{
		return nsum;
	}
	T GetMax()
	{
		return nMax;
	}
	T GetMin()
	{
		return nMin;
	}

	_outPara operator() (T x)
	{
		if (nCount == 0)
		{
			nMax = x;
			nMin = x;
		}
		else
		{
			if (nMax < x)
			{
				nMax = x;
			}
			else if (nMin > x)
			{
				nMin = x;
			}
		}
		nsum += x;
		nCount++;
	}
};

int main()
{
	float A[] = { 1.5,4.2,3.5,3.66,3.98 };
	const int N = sizeof(A) / sizeof(int);
	CPrintInfo<float, void>&p = for_each(A, A + N, CPrintInfo<float, void>());
	//������䣺������ִ��CPrintInfo<>(),������������в��������Ĺ��캯����Ȼ�������е�ÿһ������
	//���ε���������еģ������غ���
	cout << "Sum = " << p.GetSum() << endl;
	cout << "Max = " << p.GetMax() << endl;
	cout << "Min = " << p.GetMin() << endl;
	system("pause");
	return 0;
}*/