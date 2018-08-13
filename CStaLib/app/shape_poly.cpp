///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////展示STL在多态中的应用
//
////已知画图基类Shpae，定义多态函数Draw,圆类Circle,正方形类Square都从其中派生，创建一个含有Shape指针的
////vector，指向多个Shape子对象。首先画出每一个Square，并按照长度进行升序排列，其次画出每一个Circle,
////并按照半径进行升序排列
//
////首先定义vector<CShape*>vecShape向量，利用多态性质产生了12个指向Circle或者Square对象的Shape*指针，
////并且把这些指针压到vecShape向量中。随后定义圆对象指针向量vector<Circle*>vecCircle以及方对象指针向量
////并且遍历vecShape，分别将元素压到对应的对象向量中。然后对两个向量进行sort排序，最后输出
//
////关键在于sort排序的时候，调用了二元函数ShapeCompare，由于这个二元函数可以对circle,square排序，所以
////应该是模板类。因为这个类里面调用了<运算符，所以一定要重载对应类中的<运算符。事实上，如果不使用sort的
////第二个参数模板，那么sort()函数只是对指针的大小进行排序，并没有进入到对应类里面调用重载之后的运算符。
//
//#include "stdafx.h"
//
//class CShape
//{
//public: 
//	virtual void Draw() = 0;
//	virtual int GetMark() = 0;
//};
//
//class CCircle :public CShape	//圆类定义
//{
//	static int nmark;	//静态变量，CCircle的标识
//	float fr;			//半径
//public:
//	float GetR(){ return fr; }
//public:
//	CCircle(float fr)
//	{
//		this->fr = fr;
//	}
//	virtual~CCircle(){}
//	void Draw()
//	{
//		cout << "circle,radius is :" << fr << endl;
//	}
//	int GetMark(){ return nmark; }
//
//	/*排序比较用到这个函数*/
//	bool operator<(CCircle&c)
//	{
//		return fr < c.GetR();
//	}
//
//};
//int CCircle::nmark = 1;
//
//class CSquare :public CShape
//{
//	static int nmark;
//	float fwidth;
//public:
//	float GetWidth(){ return fwidth; }
//public:
//	CSquare(float fwidth){ this->fwidth = fwidth; }
//	virtual~CSquare(){}
//	void Draw()
//	{
//		cout << "square,width is :" << fwidth << endl;
//	}
//	int GetMark(){ return nmark; }
//
//	/*排序比较用到这个函数*/
//	bool operator<(CSquare&s)
//	{
//		return fwidth < s.fwidth;
//	}
//};
//int CSquare::nmark = 0;
//
///*main函数里sort函数的第三个参数*/
//template<class T>
//class CShapeCompare
//{
//public:
//	bool operator()(T*t1, T*t2)
//	{
//		return *t1 < *t2;
//	}
//};
//
//
//int main()
//{
//	vector<CShape*>vecShape;
//	vector<CCircle*>vecCircle;
//	vector<CSquare*>vecSquare;
//
//	CCircle *c1 = new CCircle(10.0f);
//	CCircle *c2 = new CCircle(12.0f);
//	CCircle *c3 = new CCircle(15.0f);
//	CCircle *c4 = new CCircle(13.0f);
//	CCircle *c5 = new CCircle(17.0f);
//	CCircle *c6 = new CCircle(19.0f);
//	CSquare *s1 = new CSquare(21.0f);
//	CSquare *s2 = new CSquare(23.0f);
//	CSquare *s3 = new CSquare(22.0f);
//	CSquare *s4 = new CSquare(25.0f);
//	CSquare *s5 = new CSquare(28.0f);
//	CSquare *s6 = new CSquare(27.0f);
//
//	vecShape.push_back(c1);
//	vecShape.push_back(c2);
//	vecShape.push_back(s1);
//	vecShape.push_back(s2);
//	vecShape.push_back(c3);
//	vecShape.push_back(c4);
//	vecShape.push_back(s3);
//	vecShape.push_back(s4);
//	vecShape.push_back(c5);
//	vecShape.push_back(c6);
//	vecShape.push_back(s5);
//	vecShape.push_back(s6);
//
//	for (int ni = 0; ni < vecShape.size(); ni++)
//	{
//		CShape*pShape = vecShape.at(ni);
//		int nmark = pShape->GetMark();
//		if (nmark == 0)
//		{
//			vecSquare.push_back((CSquare*)pShape);
//		}
//		if (nmark == 1)
//		{
//			vecCircle.push_back((CCircle*)pShape);
//		}
//	}
//
//	/*方对象向量按照边长排序*/
//	sort(vecSquare.begin(), vecSquare.end(), CShapeCompare<CSquare>());
//	/*圆对象向量按照半径排序*/
//	sort(vecCircle.begin(), vecCircle.end(), CShapeCompare<CCircle>());
//
//	for (int ni = 0; ni < vecSquare.size(); ni++)
//	{
//		CSquare*ps = vecSquare.at(ni);
//		ps->Draw();
//	}
//	for (int ni = 0; ni < vecCircle.size(); ni++)
//	{
//		CCircle*ps = vecCircle.at(ni);
//		ps->Draw();
//	}
//
//	for (int ni = 0; ni < vecShape.size(); ni++)
//	{
//		CShape*pShape = vecShape.at(ni);
//		delete pShape;
//		pShape = NULL;	//new和delete必须一一配对，还可以直接delete，不过比较垃圾
//	}
//
//	system("pause");
//	return 0;
//}