#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "Shape.h"
using namespace std;
class CTriangle:public CShape
{
public:
	CTriangle();
	CTriangle(int nTria_FirX, int nTria_FirY, int nTria_SecX,
		int nTria_SecY, int nTria_ThiX, int nTria_ThiY, int n, string strName);
	virtual ~CTriangle();
	virtual double calcArea();
	string strName;
	int nID;
	int nTria_FirX;
	int nTria_FirY;
	int nTria_SecX;
	int nTria_SecY;
	int nTria_ThiX;
	int nTria_ThiY;
	void CTriangle::shape();
};

#endif // TRIANGLE_H
