#include "Circle.h"
#include "Shape.h"
#define PI 3.1415926 
class CCircle:public CShape
{
public:
	double db_radius;
	double db_circleX;
	double db_circleY;
public:
	virtual ~CCircle()
	{

	}
	virtual double calcArea();
};
double CCircle::calcArea()
{
	return PI * db_radius*db_radius;
}