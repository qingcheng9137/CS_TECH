/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//����һԪ����������ͣ������Ǹ�ģ�壩

/*#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

template<class _inPara, class _outPara>//"һԪ"Ҳ���ǣ��˴�ֻ��һ���������
class CSum :public unary_function<_inPara, _outPara>//һԪ��������Ӵ˻���������
{
public:
	_outPara sum;
	CSum()
	{
		sum = 0;
	}
	//���ϣ����X��ʼ�����ۺͣ���Ҫ�޸ĳ���
	
//	CSum��_outPara init)
//	{
//		sum = init;
//	}
//	void operator()(_inPara n)
//	{
//		sum += n;
//	}
//	
	void operator()(_inPara n)
	{
		sum += n;
	}
	_outPara GetSum()
	{
		return sum;
	}
};

int main()
{
	vector<int>v;
	for (int nIndex = 0; nIndex < 100; nIndex++)
	{
		v.push_back(nIndex);
	}
	CSum<int,int>sObj = for_each(v.begin(), v.end(), CSum<int,int>());
	cout << "sum(int) = " << sObj.GetSum() << endl;
	//�����������һԪģ�庯�����õ��������

	vector<float>f;
	float fTest = 1.3f;
	for (int nFloat = 1; nFloat <= 10; nFloat++)
	{
		f.push_back(fTest);
		fTest++;
	}
	CSum<float, float>fObj = for_each(f.begin(), f.end(), CSum<float, float>());
	cout << "sum(float) = " << fObj.GetSum();
	getchar();
	return 0;

}*/