#include "Triangle.h"
#include "Shape.h"
CTriangle::CTriangle(int nTria_FirX, int nTria_FirY, int nTria_SecX, int nTria_SecY, int nTria_ThiX, int nTria_ThiY, int nID, string strName)
{
	
}
CTriangle::~CTriangle()
{
}
double CTriangle::calcArea()
{
	return (0.5)*(nTria_FirX * nTria_SecY + nTria_SecX * 
		nTria_ThiY + nTria_ThiX * nTria_FirY - nTria_FirX
		* nTria_ThiY - nTria_SecX * nTria_FirY - nTria_ThiX
		* nTria_SecY);
}
CTriangle::CTriangle()
{

}
void CTriangle::shape()
{
	cout << "triangle" << endl;
}
