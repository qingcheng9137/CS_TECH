#include "Rectangle.h"
#include "Shape.h"
#include "string.h"
class CRectangle:public CShape
{
public:
	double db_width;
	double db_length;
public:
	virtual ~CRectangle()
	{

	}
	virtual double calcArea();

};
double CRectangle::calcArea()
{
	return db_length * db_width;
}

