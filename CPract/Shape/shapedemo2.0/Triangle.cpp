#include "Triangle.h"
#include "Shape.h"
class CTriangle:public CShape
{
public:
	double db_triangle_1x;
	double db_triangle_1y;
	double db_triangle_2x;
	double db_triangle_2y;
	double db_triangle_3x;
	double db_triangle_3y;
public:
	virtual ~CTriangle()
	{

	}
	virtual double calcArea();
};
double CTriangle::calcArea()
{
	return (0.5)*(db_triangle_1x * db_triangle_2y + db_triangle_2x * 
		db_triangle_3y+ db_triangle_3x * db_triangle_1y - db_triangle_1x
		* db_triangle_3y - db_triangle_2x * db_triangle_1y - db_triangle_3x 
		* db_triangle_2y);
}