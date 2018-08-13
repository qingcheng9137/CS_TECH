#ifdef if CIRCLE_H
#define CIRCLE_H
class CCircle:public CShape
{
public:
	CCircle(double radius)
	{
	}
	virtual ~CCircle();
	virtual double calcArea();
};
#endif // CIRCLE_H
