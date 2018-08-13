

#ifdef RECTANGLE_H
#define RECTANGLE_H

class CRectangle:public CShape
{
public:
	CRectangle(double width, double length)
	{
	}
	virtual ~CRectangle();
	virtual double calcArea();
};

#endif // RECTANGLE_H


//Can I place the definition in the head file?
//What if head files doesn't exist(only cplusplus)?