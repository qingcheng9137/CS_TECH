/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//���ڻ����࣬���ö�̬��˼�룬������Shapedemo

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

class AreaCollect//ά��������״����ļ�����
{
	vector<CShape*>v;//���������˶�̬˼�룬���ﲻ����<CShape>
public:
	bool Add(CShape*pShape)
	{
		v.push_back(pShape);
		return true;
	}
	bool ShowEachArea()
	{
		for_each(v.begin(), v.end(), mem_fun(CShape::Showarea));
		//�������д�����������չʾ�ܿ��ף�for_each��STL�ĸ�Ч�㷨
		//for_each�ĵ�����������ֻҪ�����ܸ�С���ţ����纯��������ָ��
		//std::function ���󣬻���һ��������С���Ų���������Ķ���
		//�Ҳ���������1�Ҳ�������ƥ��Ϳ���
		return true;
	}
};

void main()
{
	AreaCollect contain;
	CShape*pObject1 = new CCircle(10.0f);//��������󴴽���ʽ
	CShape*pObject2 = new CRectangle(10.0f, 20.0f);
	CShape*pObject3 = new CRectangle(20.0f, 15.0f);
	contain.Add(pObject1);
	contain.Add(pObject2);
	contain.ShowEachArea();
}*/