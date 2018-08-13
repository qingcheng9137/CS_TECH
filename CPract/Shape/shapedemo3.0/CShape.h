#ifndef SHAPE_H
#define SHAPE_H
#include "string"
#include "iostream"
using namespace std;

class CShape
{
public:
	CShape();
	CShape(string nName, int nType);
	int calcArea();
	int list();
	int create();//存放ID，坐标，名字
	void shape();
	virtual ~CShape();
	string strName;
	int nID;

};
#endif // SHAPE_H
