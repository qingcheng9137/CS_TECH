//动态创建对象并且区分不同的对象（可以根据对象的名字），我觉得这个跟动态创建数组有本质不同（后者只是向数组里面动态加数字）
//针对第一个问题，我所提出的方案是动态创建一个数组，随后数组里面放对象，但是数组对象的名字我没有办法处理。
//我现在已经能够处理终端输入字符串的事情了。但是存贮调用是个问题。

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "iostream"
#include "string.h"
#include "sstream"
#include "string"
#include "main.h"
#include "vector"
#include "cmath"
using namespace std;
int main()
{
	char *cFir_create = "create";
	char *cFir_list = "list";
	char *cFir_area = "area";
	char *cRect = "rectangle";
	char *cTria = "triangle";
	char *cCirc = "circle";
	char *cAll = "all";
	vector<CShape*>CShapevec;
	while (true)
	{
		int n = 1;
		char ch;
		/*CRectangle *pArray_Rect = new CRectangle[10];
		CTriangle *pArray_Tria = new CTriangle[10];
		CCircle *pArray_Circ = new CCircle[10];*/
		cout << "Shape Game Version:3.0" << endl;
		string strFir_key;
		char temp[30];
		cout << "Input your command." << endl;
		cin.getline(temp, 40);
		string strCMD(temp);
		istringstream s(strCMD);
		s >> strFir_key;
		char cComma;
		if (strFir_key == cFir_create)
		{
			string strSec_key;
			s >> strSec_key;
			if (strSec_key == cRect)
			{
				CShape*pRectangle = new CRectangle;
				string strRect_Name;
				string str_Rect_Fir;
				string str_Rect_Sec;
				s >> strRect_Name;
				s >> str_Rect_Fir;
				s >> str_Rect_Sec;
				int nRect_FirX;
				int nRect_FirY;
				int nRect_SecX;
				int nRect_SecY;

				vector<int> v;
				istringstream rectf(str_Rect_Fir);
				int interFir;
				while (rectf >> interFir)
				{
					v.push_back(interFir);
					rectf >> ch;
				}
				nRect_FirX = v[0];
				nRect_FirY = v[1];
				vector<int> q;
				istringstream rects(str_Rect_Sec);
				int interSec;
				while (rects >> interSec)
				{
					q.push_back(interSec);
					rects >> ch;
				}
				nRect_SecX = q[0];
				nRect_SecY = q[1];
				//Above program is to calculate the values of nRect_FirX-nRect_SecY
				int nwidth;
				int nlength;
				nlength = abs(nRect_FirX - nRect_SecX);
				nwidth = abs(nRect_FirY - nRect_SecY);
				pRectangle:(nwidth, nlength, n, strRect_Name);
				n++;
				CShapevec.push_back(pRectangle);
			}
			if (strSec_key == cTria)
			{
				CShape*pTriangle = new CTriangle;
				string strTria_Name;
				string str_Tria_Fir;
				string str_Tria_Sec;
				string str_Tria_Thi;
				s >> strTria_Name;
				s >> str_Tria_Fir;
				s >> str_Tria_Sec;
				s >> str_Tria_Thi;
				int nTria_FirX;
				int nTria_FirY;
				int nTria_SecX;
				int nTria_SecY;
				int nTria_ThiX;
				int nTria_ThiY;

				vector<int> v;
				istringstream tria_f(str_Tria_Fir);
				int interFir;
				while (tria_f >> interFir)
				{
					v.push_back(interFir);
					tria_f >> ch;
				}
				nTria_FirX = v[0];
				nTria_FirY = v[1];
				vector<int> q;
				istringstream tria_s(str_Tria_Sec);
				int interSec;
				while (tria_s >> interSec)
				{
					q.push_back(interSec);
					tria_s >> ch;
				}
				nTria_SecX = q[0];
				nTria_SecY = q[1];
				vector<int> z;
				istringstream tria_t(str_Tria_Thi);
				int interThi;
				while (tria_t >> interThi)
				{
					z.push_back(interThi);
					tria_t >> ch;
				}
				nTria_ThiX = z[0];
				nTria_ThiY = z[1];
				pTriangle:(nTria_FirX, nTria_FirY, nTria_SecX, nTria_SecY, nTria_ThiX, nTria_ThiY
					, n, strTria_Name);
				n++;
				CShapevec.push_back(pTriangle);
			}
			if (strSec_key == cCirc)
			{
				CShape*pCircle = new CCircle;
				string strCirc_Name;
				string str_Circ_Fir;
				string str_Circ_Sec;
				s >> strCirc_Name;
				s >> str_Circ_Fir;
				s >> str_Circ_Sec;
				int nCircX;
				int nCircY;
				int nRadius;

				vector<int> v;
				istringstream circf(str_Circ_Fir);
				int interFir;
				while (circf >> interFir)
				{
					v.push_back(interFir);
					circf >> ch;
				}
				nCircX = v[0];
				nCircY = v[1];
				vector<int> q;
				istringstream circs(str_Circ_Sec);
				int interSec;
				while (circf >> interSec)
				{
					q.push_back(interSec);
				}
				nRadius = q[0];
				pCircle:(nCircX, nCircY, nRadius, strCirc_Name, n);
				n++;
				CShapevec.push_back(pCircle);
			}

		}
		if (strFir_key == cFir_list)
		{
			string strSec_key;
			s >> strSec_key;
			if (strSec_key == cAll)
			{
				vector<CShape*>::const_iterator iter;
				for (iter = CShapevec.begin(); iter != CShapevec.end(); ++iter)
				{
					(*iter)->shape();
					cout << " ";
					(*iter)->nID;
				}
			}
			/*if (strSec_key == cTria)
			{
				for (int nIndex_Tria = 1; nIndex_Tria < nT; nIndex_Tria++)
				{
					cout << "triangle " << pArray_Tria[nIndex_Tria].strName << "/t" << pArray_Tria[nIndex_Tria].nTria_FirX << "," <<
						pArray_Tria[nIndex_Tria].nTria_FirY << " " << pArray_Tria[nIndex_Tria].nTria_SecX << "," << pArray_Tria[nIndex_Tria].nTria_SecY
						<< " " << pArray_Tria[nIndex_Tria].nTria_ThiX << "," << pArray_Tria[nIndex_Tria].nTria_ThiY << "ID: " <<
						nIndex_Tria << endl;


				}
			}
			if (strSec_key == cCirc)
			{
				for (int nIndex_Circ = 1; nIndex_Circ < nC; nIndex_Circ++)
				{
					cout << "circle " << pArray_Circ[nIndex_Circ].strName << "/t" << pArray_Circ[nIndex_Circ].nCircX << "," << pArray_Circ[nIndex_Circ].nCircY
						<< "\t" << "radius: " << pArray_Circ[nIndex_Circ].nRadius << "\t" << "ID: " << nIndex_Circ << endl;


				}
			}*/
		}
		if (strFir_key == cFir_area)
		{
			int strSec_key;
			s >> strSec_key;
			vector<CShape*>::const_iterator iter;
			for (int nIndex_rectangle = 1; nIndex_rectangle <= n; nIndex_rectangle++)
			{
				if (strSec_key == (*iter)->nID)
				{
					cout << (*iter)->calcArea() << endl;
				}
			}
		}
	}
}
