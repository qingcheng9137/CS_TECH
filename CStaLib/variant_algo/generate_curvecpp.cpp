///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////����������ߵ�����㣬����Բ����0-360ÿ�����֪�Ƕȼ�¼Բ�ϵ������
////���ȣ�ÿ���㶼�����꣬������Ҫһ������������Ľṹ��Point
////��Σ��������ߺܶ࣬ϣ����ͳһ�Ľӿڣ������Ҫģ���ػ�
//
//#include "iostream"
//#include "vector"
//#include "algorithm"
//#include "iterator"
//#include "math.h"
//
//using namespace std;
//
///*���ã��Զ���һ������*/
//struct Point
//{
//	float x;
//	float y;
//};
//
///*��Ϊһ������*/
//class CircleTag{};
//
///*������*/
//template<class T>
//class MyCurve{};
//
//template<>
//class MyCurve<CircleTag>
//{
//	float ox;
//	float oy;
//	float r;
//	int angle;	//���
//public:
//	MyCurve(float ox, float oy, float r, int angle)
//	{
//		this->ox = ox;
//		this->oy = oy;
//		this->r = r;
//		this->angle = angle;
//	}
//	Point operator()()
//	{
//		Point pt;
//		static int curAngle = 0;
//		pt.x = ox + r*cos(curAngle / 360.0f * 2 * 3.14f);
//		pt.y = oy + r*sin(curAngle / 360.0f * 2 * 3.14f);
//		curAngle += angle;
//		return pt;
//	}
//};
//
///*Ŀ����ʹ��cout<<t,���ñ�׼�����ֱ�����Point�ṹ�������*/
//ostream&operator<<(ostream&os, const Point&t)		
//{
//	os << "(" << t.x << "," << t.y << ")";
//	return os;
//}
//
//int main()
//{
//	vector<Point>v(10);
//	generate(v.begin(), v.end(), MyCurve<CircleTag>(10.0f, 10.0f, 10.0f, 36));
//	//�뾶10��Բ��(10,10)
//	cout << "��0��360��ÿת36ȡ������꣺" << endl;
//	copy(v.begin(), v.end(), ostream_iterator<Point>(cout, "\n"));//�������غ�ĺ���
//	system("pause");
//	return 0;
//}