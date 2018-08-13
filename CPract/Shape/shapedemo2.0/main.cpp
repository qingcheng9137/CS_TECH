#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "iostream"
#include "string.h"
#include "sstream"
#include "string"
#include "main.h"
using namespace std;
int main()
{
	char *cFir_create = "create";
	char *cFir_list = "list";
	char *cFir_area = "area";
	char *cRect = "rectangle";
	char *cTria = "triangle";
	char *cCirc = "circle";
	while (1)
	{
		cout << "Shape Game Version:3.0" << endl;
		string strFir_key;
		char temp[30];
		string strCMD(temp);
		string strCMD;
		cout << "Input your command." << endl;
		cin >> temp;
		istringstream s(strCMD);
		s >> strFir_key;
		if (strFir_key == cFir_create)
		{
			string strSec_key;
			s >> strSec_key;
			if (strSec_key == cRect)
			{
				CRectangle rectangle;
				string strRect_Name;
				s >> strRect_Name;
			}
		}
	}
}