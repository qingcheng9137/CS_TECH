///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////չʾSTL�ڶ�̬�е�Ӧ��
//
////��֪��ͼ����Shpae�������̬����Draw,Բ��Circle,��������Square������������������һ������Shapeָ���
////vector��ָ����Shape�Ӷ������Ȼ���ÿһ��Square�������ճ��Ƚ����������У���λ���ÿһ��Circle,
////�����հ뾶������������
//
////���ȶ���vector<CShape*>vecShape���������ö�̬���ʲ�����12��ָ��Circle����Square�����Shape*ָ�룬
////���Ұ���Щָ��ѹ��vecShape�����С������Բ����ָ������vector<Circle*>vecCircle�Լ�������ָ������
////���ұ���vecShape���ֱ�Ԫ��ѹ����Ӧ�Ķ��������С�Ȼ���������������sort����������
//
////�ؼ�����sort�����ʱ�򣬵����˶�Ԫ����ShapeCompare�����������Ԫ�������Զ�circle,square��������
////Ӧ����ģ���ࡣ��Ϊ��������������<�����������һ��Ҫ���ض�Ӧ���е�<���������ʵ�ϣ������ʹ��sort��
////�ڶ�������ģ�壬��ôsort()����ֻ�Ƕ�ָ��Ĵ�С�������򣬲�û�н��뵽��Ӧ�������������֮����������
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
//class CCircle :public CShape	//Բ�ඨ��
//{
//	static int nmark;	//��̬������CCircle�ı�ʶ
//	float fr;			//�뾶
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
//	/*����Ƚ��õ��������*/
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
//	/*����Ƚ��õ��������*/
//	bool operator<(CSquare&s)
//	{
//		return fwidth < s.fwidth;
//	}
//};
//int CSquare::nmark = 0;
//
///*main������sort�����ĵ���������*/
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
//	/*�������������ձ߳�����*/
//	sort(vecSquare.begin(), vecSquare.end(), CShapeCompare<CSquare>());
//	/*Բ�����������հ뾶����*/
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
//		pShape = NULL;	//new��delete����һһ��ԣ�������ֱ��delete�������Ƚ�����
//	}
//
//	system("pause");
//	return 0;
//}