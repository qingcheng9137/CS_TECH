///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////保存二次曲线的坐标点，例如圆，从0-360每间隔已知角度记录圆上点的坐标
////首先，每个点都有坐标，所以需要一个描述基本点的结构体Point
////其次，二次曲线很多，希望有统一的接口，因此需要模板特化
//
//#include "iostream"
//#include "vector"
//#include "algorithm"
//#include "iterator"
//#include "math.h"
//
//using namespace std;
//
///*作用：自定义一个类型*/
//struct Point
//{
//	float x;
//	float y;
//};
//
///*作为一个类型*/
//class CircleTag{};
//
///*泛型类*/
//template<class T>
//class MyCurve{};
//
//template<>
//class MyCurve<CircleTag>
//{
//	float ox;
//	float oy;
//	float r;
//	int angle;	//间隔
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
///*目的是使用cout<<t,利用标准输出流直接输出Point结构体的内容*/
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
//	//半径10，圆心(10,10)
//	cout << "从0到360，每转36取点的坐标：" << endl;
//	copy(v.begin(), v.end(), ostream_iterator<Point>(cout, "\n"));//调用重载后的函数
//	system("pause");
//	return 0;
//}