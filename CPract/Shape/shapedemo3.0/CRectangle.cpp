#include "Rectangle.h"
#include "Shape.h"
#include "string.h"
CRectangle::CRectangle()
{
}
CRectangle::CRectangle(int nwidth, int nlength, int nID, string strName)
{
}
CRectangle::~CRectangle()
{
}
double CRectangle::calcArea()
{
	return nlength * nwidth;
}
void CRectangle::shape()
{
	cout << "rectangle" << endl;
}
