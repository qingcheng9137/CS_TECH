//在创建三角形的那一部分，首先需要判断三角形是否存在。
#include<iostream>
#include<string>
#include<cstdlib>
#include<string.h>
using namespace std;
#define Pi 3.1415926535;
double arearect(int point);
double areatriangle(int point);
double areacir(int point);
double *rect_fx = new double[0];
double *rect_fy = new double[0];
double *triangle_1x = new double[0];
double *triangle_2x = new double[0];
double *triangle_3x = new double[0];
double *triangle_1y = new double[0];
double *triangle_2y = new double[0];
double *triangle_3y = new double[0];
double *rad = new double[0];
double *cirx = new double[0];
double *ciry = new double[0];
char a[10] = "stop";
int main()
{
	char *str1="creat";
	char *str2="list";
	char *str3="area";
	char *str4 = "exit";
	char *strs1="rect";
	char *strs2="triangle";
	char *strs3="circle";
	string *name_f = new string[10];
	string *shape_f = new string[10];
	int r = 0;
	int t = 0;
	int c = 0;
	int i = 0;
	cout << "Shape Game" << endl << endl;
	cout << "There are three shapes:rect,triangle,circle" << endl;
	while (1)
	{    
		char strins[10];
		char ready[10];
		char name[10];
		cout << "You have four optional instructions:" << endl;
		cout << "creat,list,area,exit" << endl;
		cout << "Please input your instruction:" << endl;
		cin >> strins;
		while (strcmp(strins,str1)==0)
		{
			cout << "Please input the shape style:rect,triangle,"
				"or circle" << endl;
			cout << "and it's name(in differene lines):" << endl;
			cin >> ready;
			cin >> name;
			cout << "creat " << ready << " " << name << endl;
			if (strcmp(ready,strs1) == 0)
			{
				shape_f[i] = "rect";
				name_f[r] = name;
				cout << "please input two coordinates:" << endl;
				cout << "x1 y1" << endl;
				cout << "x2 y2" << endl;
				cin >> rect_fx[r] >> rect_fy[r];
				cin >> rect_fx[r + 1] >> rect_fy[r + 1];
				cout << "You have created a rect,ID is: " << i << endl;
				cout << "(" << rect_fx[r] << "," << rect_fy[r] << ")" << endl;
				cout << "(" << rect_fx[r + 1] << "," << rect_fy[r + 1] << ")" << endl ;
				r++;
				i++;
				break; 
			}
			else if (strcmp(ready,strs2) == 0)
			{
				shape_f[i] = "triangle";
				name_f[t] = name;
				cout << "please input three coordinates:" << endl;
				cout << "x1 y1" << endl;
				cout << "x2 y2" << endl;
				cout << "x3 y3" << endl;
				cin >> triangle_1x[t] >> triangle_1y[t];
				cin >> triangle_2x[t] >> triangle_2y[t];
				cin >> triangle_3x[t] >> triangle_3y[t];
				cout << "You have a created a triangle,ID is: " << i << endl;
				cout << "(" << triangle_1x[t] << "," << triangle_1y[t] << ")" << endl;
				cout << "(" << triangle_2x[t] << "," << triangle_2y[t] << ")" << endl;
				cout << "(" << triangle_3x[t] << "," << triangle_3y[t] << ")" << endl;
				t++;
				i++;
				break;
			}
			else if (strcmp(ready,strs3) == 0)
			{
				shape_f[i] = "circle";
				name_f[c] = name;
				cout << "please input the center coordinate :" << endl;
				cout << "and the radius of the circle :" << endl;
				cin >> cirx[c] >> ciry[c];
				cin >> rad[c];
				cout << "You have created a circle,ID is: " << i << endl;
				cout << "The center coordinates are: " << endl;
				cout << "(" << cirx[c] << "," << ciry[c] << ")" << endl;
				cout <<	"The radius is :" << endl;
				cout << rad[c] << endl;
				c++;
				i++;
				break;
			}
		}
		while (strcmp(strins,str2) == 0)
		{
			if (i = 0)
			{
				cout << "Error instruction!Please creat first!" << endl;
			}
			else
			{
				cout << "The list is:" << endl;
				for (int indexr = 0; indexr < r; indexr++)
				{
					cout << "No." << indexr << " rect " << endl;
				}
				for (int indext = 0; indext < t; indext++)
				{
					cout << "No." << indext << " triangle " << endl;
				}
				for (int indexc = 0; indexc < c; indexc++)
				{
					cout << "No." << indexc << " circle " << endl;
				}
				break;
			}
		}
		while (strcmp(strins,str3) == 0)
		{
			char knshape[10];
			int point;
			cout << "Please select a kind of shape:" << endl;
			cin >> knshape;
			if (strcmp(knshape,strs1) == 0)
			{
				cout << "please input the number of the shape in "
					<< " the rectangles" << endl;
				cin >> point;
				cout << "The area of the No." << point << " rect" <<
					" is " << arearect(point) << endl;
				break;
			}
			if (strcmp(knshape, strs2) == 0)
			{
				cout << "please input the number of the shape in"
					<< "the triangles" << endl;
				cin >> point;
				cout << "The area of the No." << point << " triangle"
					<< " is " << areatriangle(point) << endl;
				break;
			}
			if (strcmp(knshape, strs3) == 0)
			{
				cout << "please input the number of the shape in"
					<< "the triangles" << endl;
				cin >> point;
				cout << "The area of the No." << point << " circle"
					<< " is " << areacir(point) << endl;      //存在一个问题：
			}										 //这里都用point是否合适？
													 //还是应该用三个标记
		}
		while (strcmp(strins, str4) == 0)
		{
			goto stop;
		}
	}
	delete[] name_f;
	delete[] shape_f;
	delete[] rect_fx;
	delete[] rect_fy;
	delete[] triangle_1x;
	delete[] triangle_1y;
	delete[] triangle_2x;
	delete[] triangle_2y;
	delete[] triangle_3x;
	delete[] triangle_3y;
	delete[] rad;
	delete[] cirx;
	delete[] ciry;
	stop:cout << "bye_bye!~";
	return 0;
}
	double arearect(int point)
	{
		double area_rect;
		double rect_absx;
		double rect_absy;
		rect_absx = abs(rect_fx[2 * point] - rect_fx[2 * point + 1]);
		rect_absy = abs(rect_fy[2 * point] - rect_fy[2 * point + 1]);
		area_rect = rect_absx*rect_absy;
		return area_rect;
	}
	double areatriangle(int point)
	{
	double area_tri;
	area_tri = (0.5)*(triangle_1x[point] * triangle_2y[point] + triangle_2x[point] * triangle_3y[point]
		+ triangle_3x[point] * triangle_1y[point] - triangle_1x[point] * triangle_3y[point] - triangle_2x[point]
		* triangle_1y[point] - triangle_3x[point] * triangle_2y[point]);
	return  area_tri;
	}
	double areacir(int point)
	{
	double area_cir;
	area_cir = (rad[point]) * (rad[point]) * Pi;
	return area_cir;
	}
	
