#include "Shape.h"
#include "iostream"
using namespace std;
class CShape
{
public:
	virtual double calcArea()
	{
		cout << "calcArea:" << endl;
		return 0;
	}

	virtual ~CShape()
	{

	}
};
