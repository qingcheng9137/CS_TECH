/*************************************************************************************/
/*************************************** 2018.5.03 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/



#include "iostream"
#include "ctime"
#include "iomanip"
#include "cstring"
#include "fstream"
#include "cstdlib"
#include "string"

using namespace std;

const int MAX_FOUND = 33554432;

//timer components
clock_t tstart;
clock_t tfinish;
double dlast;

void ClockStart()
{
	tstart = clock();
}
void ClockFinish()
{
	tfinish = clock();
	dlast = (double)(tfinish - tstart) / CLOCKS_PER_SEC;
}
void ClockShow()
{
	cout << "--- ^_^ --- ^_^ --- ^_^ --- ^_^ ---" << endl;
	cout << setprecision(5) << dlast << "s" << endl;
	cout << "--- ^_^ --- ^_^ --- ^_^ --- ^_^ ---" << endl;
}

//based data representation
struct sPegSalit
{
	bool bchessboard[5][5];
	//judgment reference
	int nIndex;
};
typedef struct sPegSalit STRUCT_PEGSA;
typedef struct sPegSalit* PSTRUCT_PEGSA;

//declare the class 
class CPegSalitaire
{
private:
	//private data
	STRUCT_PEGSA list_store[26];
public:
	//construction
	CPegSalitaire();
	//input
	bool inputFile();
	//process
	int key(bool board[][5]);
	bool searchDFS(STRUCT_PEGSA f);
	//judge if processed 
	bool processIf[MAX_FOUND];
	void process();
	//judge whether data legal
	bool checkRule(int nx, int ny);
	//mark if the answer is found
	bool bFlag;
	//output
	//output matrix
	void outMatrix(STRUCT_PEGSA f);
	//output process
	void writePut();
	void outPut();
};
typedef class CPegSalitaire* PCPegSalitaire;

CPegSalitaire::CPegSalitaire()
{
	bool bres;
inputagain:;
	bres = inputFile();
	if (bres)
	{
		goto inputagain;
	}
	for (int ni = 1; ni < 26; ni++)
	{
		for (int nj = 0; nj < 5; nj++)
		{
			for (int nk = 0; nk < 5; nk++)
			{
				list_store[ni].bchessboard[nj][nk] = 0;
				list_store[ni].nIndex = 0;
			}
		}
	}
	list_store[list_store[0].nIndex] = list_store[0];
	memset(processIf, false, MAX_FOUND);
	bFlag = 0;
}

bool CPegSalitaire::inputFile()
{
	char cfileNmae[20];
	cout << "Input the file name:" << endl;
	cin >> cfileNmae;
	ifstream inFile(cfileNmae);
	if (!inFile)
	{
		cout << endl;
		cout << "Failed open " << cfileNmae << endl;
		cout << "Please check the file and try again" << endl;
		return true;
	}
	//read the file
	int nchar;
	int ni = 0;
	int nj = 0;
	while (!inFile.eof())
	{
		nchar = inFile.get();
		switch (nchar)
		{
		case '\n':
		{
					 ni++;
					 if (nj == 5)
					 {
						 nj = 0;
					 }
					 else
					 {
						 cout << "Input file doesn't have 5 elements per row" << endl;
						 cout << "Please try again" << endl;
						 return true;
					 }
					 break;
		}
		case 'o':case 'O':
		{
					 list_store[0].bchessboard[ni][nj] = 1;
					 nj++;
					 break;
		}
		case '.':
		{
					list_store[0].bchessboard[ni][nj] = 0;
					nj++;
					break;
		}
		}
	}
	if (ni != 4)
	{
		cout << "Input file doesn't have 5 rows" << endl;
		cout << "Please try again" << endl;
		return true;
	}
	else
	{
		cout << "Input file load succeed" << endl << endl;
		cout << "The file is:" << endl;
		outMatrix(list_store[0]);
		list_store[0].nIndex = 0;
		for (int ni = 0; ni < 5; ni++)
		{
			for (int nj = 0; nj < 5; nj++)
			{
				if (list_store[0].bchessboard[ni][nj])
				{
					list_store[0].nIndex++;
				}
			}
		}
		return false;
	}
}

int CPegSalitaire::key(bool board[][5])
{
	int ntemp = 0;
	int none = 1;
	for (int ni = 0; ni < 5; ni++)
	{
		for (int nj = 0; nj < 5; nj++)
		{
			if (board[ni][nj])
			{
				ntemp = ntemp | none;
			}
		}
	}
	return ntemp;
}

//DFS components
const int nimove[4] = { 1, 0, -1, 0 };
const int njmove[4] = { 0, 1, 0, -1 };

bool CPegSalitaire::searchDFS(STRUCT_PEGSA f)
{
	//if the answer has been searched
	if (bFlag)
	{
		return true;
		if (processIf[key(f.bchessboard)])
		{
			return false;
		}
		//the data has been processed
		else
		{
			processIf[key(f.bchessboard)] = false;
		}
	}
	if (f.nIndex == 1 && (f.bchessboard[2][2] == 1))
	{
		bFlag = true;
		return true;
	}
	//if there is no way
	else if (f.nIndex == 1)
	{
		return false;
	}
	else
	{
		for (int ni = 0; ni < 5; ni++)
		{
			for (int nj = 0; nj < 5; nj++)
			{
				if (f.bchessboard[ni][nj] == 1)
				{
					for (int nmove = 0; nmove < 4; nmove++)
					{
						int ni1 = ni + nimove[nmove];
						int ni2 = ni1 + nimove[nmove];
						int nj1 = nj + njmove[nmove];
						int nj2 = nj1 + njmove[nmove];
						if ((f.bchessboard[ni1][nj1]) && (!f.bchessboard[ni2][nj2]) && (checkRule(ni2, nj2)))
						{
							f.bchessboard[ni][nj] = 0;
							f.bchessboard[ni1][nj1] = 0;
							f.bchessboard[ni2][nj2] = 1;
							f.nIndex--;
							list_store[f.nIndex] = f;
							searchDFS(f);
							if (bFlag)
							{
								return true£»
							}
							f.bchessboard[ni][nj] = 1;
							f.bchessboard[ni1][nj1] = 1;
							f.bchessboard[ni2][nj2] = 0;
							f.nIndex++;
						}
					}
				}
			}
		}
	}
	return 0;
}

void CPegSalitaire::process()
{
	searchDFS(list_store[0]);
}

bool CPegSalitaire::checkRule(int nx, int ny)
{
	return (nx > (-1) && nx<5 && ny>(-1) && ny < 5);
}

void CPegSalitaire::outMatrix(STRUCT_PEGSA f)
{
	int ni;
	int nj;
	for (ni = 0; ni < 5; ni++)
	{
		for (nj = 0; nj < 5; nj++)
		{
			if (f.bchessboard[ni][nj])
			{
				cout << "o";
			}
			else
			{
				cout << ".";
			}
		}
		cout << endl;
	}
}

void CPegSalitaire::writePut()
{
	int ni = 26;
	while (!list_store[--ni].nIndex)
	{
		for (int nj = 1; ni > 0; nj++)
		{
			cout << "step" << nj << ":" << endl;
			outMatrix(list_store[ni--]);
		}
	}
}

void CPegSalitaire::outPut()
{
	if (list_store[1].bchessboard[2][2])
	{
		cout << "A solution has been found" << endl;
		writePut();
	}
	else
	{
		cout << "No solution" << endl;
	}
}


int main()
{
	int ncount = 0;
	int nduring = 0;
	PCPegSalitaire ptest;
	while (++ncount)
	{
		cout << "************No." << setw(3) << ncount << "********";
		cout << endl;
		ptest = new CPegSalitaire;
		ClockStart();
		ptest->process();
		ClockFinish();
		ptest->outPut();
		ClockShow();
		cout << "************No." << setw(3) << ncount << "END********";
		cout << endl;
		delete ptest;
	}
	system("pause");
	return 0;
}