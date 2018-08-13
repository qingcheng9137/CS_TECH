#ifndef TRIANGLE_H
#define TRIANGLE_H
class CTriangle:public CShape
{
public:
	CTriangle(double triangle_1x, double triangle_1y, double triangle_2x,
		double triangle_2y, double triangle_3x, double triangle_3y)
	{

	}
	virtual ~CTriangle();
	virtual double calcArea();
};

#endif // TRIANGLE_H
