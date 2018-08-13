/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//对于基本类，采用多态的思想，类似于Shapedemo

/*#include "iostream"
#include "functional"
#include "algorithm"
#include "vector"

using namespace std;

class CShape
{
public:
	virtual bool Showarea() = 0;
};

class CCircle :public CShape
{
	float fr;
public:
	CCircle(float fr) :fr(fr) {}
	bool Showarea()
	{
		cout << 3.1415926*fr*fr << endl;
		return true;
	}
};
class CRectangle :public CShape
{
	float fwidth;
	float flength;
public:
	CRectangle(float fwidth, float flength) :fwidth(fwidth), flength(flength){}
	bool Showarea()
	{
		cout << fwidth*flength << endl;
		return true;
	}
};

class AreaCollect//维护各种形状对象的集合类
{
	vector<CShape*>v;//由于运用了多态思想，这里不能用<CShape>
public:
	bool Add(CShape*pShape)
	{
		v.push_back(pShape);
		return true;
	}
	bool ShowEachArea()
	{
		for_each(v.begin(), v.end(), mem_fun(CShape::Showarea));
		//上面这行代码用来遍历展示很靠谱，for_each是STL的高效算法
		//for_each的第三个参数，只要后面能跟小括号（比如函数，函数指针
		//std::function 对象，或者一切重载了小括号操作符的类的对象）
		//且参数个数是1且参数类型匹配就可以
		return true;
	}
};

void main()
{
	AreaCollect contain;
	CShape*pObject1 = new CCircle(10.0f);//派生类对象创建方式
	CShape*pObject2 = new CRectangle(10.0f, 20.0f);
	CShape*pObject3 = new CRectangle(20.0f, 15.0f);
	contain.Add(pObject1);
	contain.Add(pObject2);
	contain.ShowEachArea();
}*/