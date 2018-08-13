#ifndef CIRCLE_H
#define CIRCLE_H
#include "string"
#include "Shape.h"
using namespace std;
class CCircle:public CShape
{
public:
	CCircle();
	CCircle(int nCircX, int nCircY, int nRadius, string strName, int nID);
	virtual ~CCircle();
	virtual double calcArea();
	void CCircle::shape();
public:
	string strName;
	int nID;
	int nCircX;
	int nCircY;
	int nRadius;
};
#endif // CIRCLE_H
