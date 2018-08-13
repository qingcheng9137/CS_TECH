#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include "Shape.h"
using namespace std;
class CRectangle:public CShape
{
public:
	CRectangle();//if it doesn't exist,I can't go through creating an object of CRectangle
	// in main.cpp,but why?
	CRectangle(int nwidth, int nlength, int nID, string strName);
	virtual ~CRectangle();
	virtual double calcArea();
	void CRectangle::shape();
	string strName;
	int nRect_FirX;
	int nRect_FirY;
	int nRect_SecX;
	int nRect_SecY;
	int nwidth;
	int nlength;

};

#endif // RECTANGLE_H


//Can I place the definition in the head file?
//What if head files doesn't exist(only cplusplus)?
