//Build classes of three shapes,deal with << question,make it overall.
#include<iostream>
#include<string.h>
#include<string>
#include<sstream>
using namespace std;
#define Pi 3.1415926535;
class rectangle
{
	int rect_absx;
	int rect_absy;
	int point;
	int area_rect;
public:
	string name_rf;
	int arearect(int)
	{
		rect_absx = abs(rect_fx[point] - rect_sx[point]);
		rect_absy = abs(rect_fy[point] - rect_sy[point]);
		area_rect = rect_absx * rect_absy;
		return area_rect;
	}

};
class triangle
{
	int area_tri;
	int point;
public:
	string name_tf;
	int areatri(int)
	{
		area_tri = (0.5)*(triangle_1x[point] * triangle_2y[point] + triangle_2x[point] * triangle_3y[point]
			+ triangle_3x[point] * triangle_1y[point] - triangle_1x[point] * triangle_3y[point] - triangle_2x[point]
			* triangle_1y[point] - triangle_3x[point] * triangle_2y[point]);
		return  area_tri;
	}
};
class circle
{
	int area_cir;
	int point;
public:
	string name_cf;
	int areacir(int)
	{
		int area_cir;
		area_cir = (rad[point]) * (rad[point]) * Pi;
		return area_cir;
	}
};
rectangle* rectang = new rectangle[30];
triangle* triang = new triangle[30];
circle* circ = new circle[30];
int *rect_fx = new int[30];
int *rect_fy = new int[30];
int *rect_sx = new int[30];
int *rect_sy = new int[30];
int *triangle_1x = new int[30];
int *triangle_2x = new int[30];
int *triangle_3x = new int[30];
int *triangle_1y = new int[30];
int *triangle_2y = new int[30];
int *triangle_3y = new int[30];
int *rad = new int[30];
int *cirx = new int[30];
int *ciry = new int[30];
int r = 1;
int t = 1;
int c = 1;
rectangle* rectang = new rectangle[20];
int main(int argc, char*argv[])
{
	string *name_tf = new string[20];
	string *name_cf = new string[20];
	while (1)
	{
		char command[30];
		char c;
		string Command(command);
		string strResult = "";
		cout << "Shape Game" << endl;
		cout << "You have four kinds of commands:" << endl;
		cout << "create,list,area,exit" << endl;
		cout << "Input your command:" << endl;
		cin >> command;
		if (Command.find("create") != string::npos)
		{
			if (Command.find("rectangle") != string::npos)
			{
				string strText = Command;
				istringstream istr(strText);
				while (!istr.eof())
				{
					istr >> strResult;
					if (strResult.find("create") != string::npos)
					{
						goto here;
					}
					else if(strResult.find("rectangle") != string::npos)
					{
						goto here;
					}
					else
					{
						rectang[r].name_rf = strResult;
						int n = Command.find(strResult);
						int RectLen = sizeof(strResult);
						char arr[30];
						int rr = 0;
						int RECT = 0;
						Command.erase(Command.begin(), Command.begin() + n + RectLen);
						string strRECTNext = Command;
						istringstream istr(strRECTNext);
						while (!istr.eof())
						{
							/*
							getline(istr, strResult, ',');
							string strNextNext = strResult;
							istringstream istr(strNextNext);
							while (!istr.eof())
							{
								istr >> strResult;
								strcpy(arr, strResult.c_str());
								int RectNum = atoi(arr);
								if (rr / 2 == 0)
								{
									rect_fx[r] = RectNum;
								}
								if (rr / 2 == 1)
								{
									rect_fy[r] = RectNum;
								}
								rr++;
							}divided by comma first
							*/
							istr >> strResult;
							istringstream istr(strResult);
							if (RECT %2 == 0)
							{
								while (!istr.eof())
								{
									int rr = 0;
									getline(istr, strResult, ',');
									strcpy(arr, strResult.c_str());
									if (rr / 2 == 0)
									{
										rect_fx[r] = atoi(arr);
									}
									else if (rr / 2 == 1)
									{
										rect_fy[r] = atoi(arr);
									}
									rr++;
								}
								RECT++;
							}
							else if (RECT %2 == 1)
							{
								while (!istr.eof())
								{
									int rr = 0;
									getline(istr, strResult, ',');
									strcpy(arr, strResult.c_str());
									if (rr / 2 == 0)
									{
										rect_sx[r] = atoi(arr);
									}
									else if (rr / 2 == 1)
									{
										rect_sy[r] = atoi(arr);
									}
									rr++;
								}
								RECT++;
							}
						}
						break;
					}
				here:;
				}
				r++;
			}
			//logo
			else if (Command.find("triangle") != string::npos)
			{
				string strTRIText = Command;
				istringstream istr(strTRIText);
				while (!istr.eof())
				{
					istr >> strResult;
					if (strResult.find("create") != string::npos)
					{
						goto here;
					}
					else if (strResult.find("triangle") != string::npos)
					{
						goto here;
					}
					else
					{
						name_tf[t] = strResult;
						int b = Command.find(strResult);
						int TriLen = sizeof(strResult);
						char att[30];
						int tt = 0;
						Command.erase(Command.begin(), Command.begin() + b + TriLen);
						string strTRINext = Command;
						istringstream istr(strTRINext);
						while (!istr.eof())
						{
							istr >> strResult;
							istringstream istr(strResult);
							while (!istr.eof())
							{
								int tt = 0;
								int Logo = 1;
								getline(istr, strResult, ',');
								strcpy(att, strResult.c_str());
								if (Logo / 3 == 1)
								{
									if (tt / 2 == 0)
									{
										triangle_1x[t] = atoi(att);
									}
									else if (tt / 2 == 1)
									{
										triangle_1y[t] = atoi(att);
									}
									tt++;
								}
								else if (Logo / 3 == 2)
								{
									if (tt / 2 == 0)
									{
										triangle_2x[t] = atoi(att);
									}
									else if (tt / 2 == 1)
									{
										triangle_2y[t] = atoi(att);
									}
									tt++;
								}
								else if (Logo / 3 == 0)
								{
									if (tt / 2 == 0)
									{
										triangle_3x[t] = atoi(att);
									}
									else if (tt / 2 == 1)
									{
										triangle_3y[t] = atoi(att);
									}
									tt++;
								}
								Logo++;
							}
						}
						break;
					}
				here:;
				}
				t++;
			}
			//logo
			}
			else if (Command.find("circle") != string::npos)
			{
				string strCIRText = Command;
				istringstream istr(strCIRText);
				while (!istr.eof())
				{
					istr >> strResult;
					if (strResult.find("create") != string::npos)
					{
						goto here;
					}
					else if (strResult.find("circle") != string::npos)
					{
						goto here;
					}
					else
					{
						name_cf[c] = strResult;
						int v = Command.find(strResult);
						int CirLen = sizeof(strResult);
						char acc[30];
						int cc = 0;
						int Index = 0;
						Command.erase(Command.begin(), Command.begin() + v + CirLen);
						string strCIRNext = Command;
						istringstream istr(strCIRNext);
						while (!istr.eof())
						{
							istr >> strResult;
							istringstream istr(strResult);
							if (Index == 0)
							{
								while (!istr.eof())
								{
									int cc = 0;
									getline(istr, strResult, ',');
									strcpy(acc, strResult.c_str());
									if (cc / 2 == 0)
									{
										cirx[c] = atoi(acc);
									}
									else if (cc / 2 == 1)
									{
										ciry[c] = atoi(acc);
									}
									cc++;

								}
							}
							else
							{
								strcpy(acc, strResult.c_str());
								rad[c] = atoi(acc);
							}
							Index++;
						}
						break;
					}
				here:;
				}
				c++;
			}
		if (Command.find("list") != string::npos)
		{
			if (Command.find("rectangle") != string::npos)
			{
				for (int IndexRect = 1; IndexRect < r; IndexRect++)
				{
					cout << "rectangle " << rectang[r].name_rf << "  ID: " << r
						<< "  Coordinates:" << rect_fx[r] << "," << rect_fy[r] <<
						"  " << rect_sx[r] << "," << rect_sy[r] << endl;
				}
			}
			else if (Command.find("triangle") != string::npos)
			{
				for (int IndexTri = 1; IndexTri < t; IndexTri++)
				{
					cout << "triangle " << triang[r].name_tf << "  ID: " << t << "  Coordinates:" << triangle_1x[t]
						<< "," << triangle_1y[t] << "  " << triangle_2x[t] << "," << triangle_2y[t] << "  "
						<< triangle_3x[t] << "," << triangle_3y[t] << endl;
				}

			}
			else if (Command.find("circle") != string::npos)
			{
				for (int IndexCir = 1; IndexCir < c; IndexCir++)
				{
					cout << "circle " << circ[c].name_cf << "  ID: " << c << "  Coordinates:" << cirx[c] << ","
						<< ciry[c] << "  Radius:" << rad[c] << endl;
				}

			}
			else
			{
				for (int IndexRect = 1; IndexRect < r; IndexRect++)
				{
					cout << "rectangle " << rectang[r].name_rf << "  ID: " << r
						<< "  Coordinates:" << rect_fx[r] << "," << rect_fy[r] <<
						"  " << rect_sx[r] << "," << rect_sy[r] << endl;
				}
				for (int IndexTri = 1; IndexTri < t; IndexTri++)
				{
					cout << "triangle " << triang[t].name_tf << "  ID: " << t << "  Coordinates:" << triangle_1x[t]
						<< "," << triangle_1y[t] << "  " << triangle_2x[t] << "," << triangle_2y[t] << "  "
						<< triangle_3x[t] << "," << triangle_3y[t] << endl;
				}
				for (int IndexCir = 1; IndexCir < c; IndexCir++)
				{
					cout << "circle " << circ[c].name_cf << "  ID: " << c << "  Coordinates:" << cirx[c] << ","
						<< ciry[c] << "  Radius:" << rad[c] << endl;
				}
			}

		}
		if (Command.find("area") != string::npos)
		{
			if (Command.find("rectangle") != string::npos)
			{
				Command.erase(Command.begin(), Command.begin() + 14);
				for (int i = 1; i < r; i++)
				{
					if (Command == rectang[i].name_rf)
						cout << rectang[i].arearect << endl;
					else
					{
						cout << "Check your spelling!" << endl;
					}
				}
			}
			else if (Command.find("triangle") != string::npos)
			{
				Command.erase(Command.begin(), Command.begin() + 13);
				for (int o = 1; o < t; o++)
				{
					if (Command == triang[o].name_tf)	
					{
						cout << triang[o].areatri << endl;
					}
					else
					{
						cout << "Check your spelling!" << endl;
					}
				}
			}
			else if (Command.find("circle") != string::npos)
			{
				Command.erase(Command.begin(), Command.begin() + 11);
				for (int p = 1; p < c; p++)
				{
					if (Command == circ[p].name_cf)
					{
						cout << circ[p].areacir << endl;
					}
					else
					{
						cout << "Check your spelling!" << endl;
					}
				}
			}
		}
		if (Command.find("exit") != string::npos)
		{
			goto stop;
		}
	}
	stop:cout << "Bye bye~~" << endl;
	return 0;
	delete[] rectang;
	delete[] triang;
	delete[] circ;
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
}
/*int arearect(int point)
{
	int area_rect;
	int rect_absx;
	int rect_absy;
	rect_absx = abs(rect_fx[point] - rect_sx[point]);
	rect_absy = abs(rect_fy[point] - rect_sy[point]);
	area_rect = rect_absx * rect_absy;
	return area_rect;
}
int area triangle(int point)
{
	int area_tri;
	area_tri = (0.5)*(triangle_1x[point] * triangle_2y[point] + triangle_2x[point] * triangle_3y[point]
		+ triangle_3x[point] * triangle_1y[point] - triangle_1x[point] * triangle_3y[point] - triangle_2x[point]
		* triangle_1y[point] - triangle_3x[point] * triangle_2y[point]);
	return  area_tri;
}
int areacir(int point)
{
	int area_cir;
	area_cir = (rad[point]) * (rad[point]) * Pi;
	return area_cir;
}
*/