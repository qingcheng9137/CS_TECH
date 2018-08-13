#include "Circle.h"
#include "Shape.h"
#define PI 3.1415926 
CCircle::CCircle()
{
}
CCircle::CCircle(int nCircX, int nCircY, int nRadius, string strName, int nID)
{
}
CCircle::~CCircle()
{
}
double CCircle::calcArea()
{
	return PI * nRadius * nRadius;
}
void CCircle::shape()
{
	cout << "circle" << endl;
}
