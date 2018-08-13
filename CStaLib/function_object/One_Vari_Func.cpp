/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//利用一元函数进行求和（基类是个模板）

/*#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

template<class _inPara, class _outPara>//"一元"也就是，此处只有一个传入参数
class CSum :public unary_function<_inPara, _outPara>//一元函数必须从此基类中派生
{
public:
	_outPara sum;
	CSum()
	{
		sum = 0;
	}
	//如果希望从X开始进行累和，需要修改程序：
	
//	CSum（_outPara init)
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
	//上述代码调用一元模板函数，得到整数求和

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