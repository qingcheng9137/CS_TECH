/*************************************************************************************/
/*************************************** 2018.3.26 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//ͨ������C++ϵͳ�ṩ�������ຯ������ʵ�ָ������
//�ṩaccumulate,count_if�Ļ����÷�

/*#include "iostream"
#include "functional"
#include "vector"
#include "algorithm"
#include "numeric"

using namespace std;

class CComplex
{
public:
	float freal;
	float fvirt;
public:
	CComplex()
	{
		this->freal = 0.0f;
		this->fvirt = 0.0f;
	}
	CComplex(float freal, float fvirt)
	{
		this->freal = freal;
		this->fvirt = fvirt;
	}

	CComplex operator+(const CComplex&c)const
	{
		CComplex v;
		v.freal = freal + c.freal;
		v.fvirt = fvirt + c.fvirt;
		return v;
	}
};

int main()
//�����ĸ��������ӵ�vector��ͷ����ͣ�ͨ������accumulate)
{
	CComplex c1(1.0f, 2.0f);
	CComplex c2(1.2f, 2.5f);
	CComplex c3(4.3f, 5.6f);
	CComplex c4 = c1 + c2;
	CComplex c5 = plus<CComplex>()(c1, c2);
	//��ʱ����ִ�ж�Ԫ����plus�������ص�operator������������plus��ԭ��
//	template<class T>
//	struct plus :public binary_function<T, T, T>
//	{
//		T operator()(const T&x, const T&y)const 
//		{
//			return x + y;
//		}
//	};
	CComplex c;
	vector<CComplex>v;
	v.push_back(c1);
	v.push_back(c2);
	v.push_back(c3);
	v.push_back(c4);
	v.push_back(c5);
	CComplex result = accumulate(v.begin(), v.end(), c, plus<CComplex>());
	//accunulate��numeric���еĺ���
	//������Ҳ˵����plus<CComplex>()(c1,c2)��c3=c1+c2������Ҫ
	cout << result.freal << "+" << result.fvirt << "i" << endl;
	getchar();
	return 0;

}*/
//_____________________________________________________________________________
//accumulate:
/*#include <vector>
#include <numeric>
#include <functional>
#include <iostream>

using namespace std;

int main( )
{

   vector <int> v1, v2( 20 );
   vector <int>::iterator Iter1, Iter2;

   int i;
   for ( i = 1 ; i < 21 ; i++ )
   {
	  v1.push_back( i );
   }

   cout << "�������v1�и�Ԫ�ص�ֵΪ:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
	  cout << *Iter1 << " ";
   cout << ")." << endl;

   // accumulate�����ĵ�һ�����ܣ����
   int total;
   total = accumulate ( v1.begin ( ) , v1.end ( ) , 0 );

   cout << "������1��20�ĺ�Ϊ: "
		<< total << "." << endl;

   // ����һ��ǰn��͵�����
   int j = 0, partotal;
   for ( Iter1 = v1.begin( ) + 1; Iter1 != v1.end( ) + 1 ; Iter1++ )
   {
	  partotal = accumulate ( v1.begin ( ) , Iter1 , 0 );
	  v2 [ j ] = partotal;
	  j++;
   }

   cout << "ǰn��ͷֱ�Ϊ:\n ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
	  cout << *Iter2 << " ";
   cout << ")." << endl << endl;

   // accumulate�����ĵڶ������ܣ��������˻�
   vector <int> v3, v4( 10 );
   vector <int>::iterator Iter3, Iter4;

   int s;
   for ( s = 1 ; s < 11 ; s++ )
   {
	  v3.push_back( s );
   }

   cout << "����v3�ĳ�ʼֵ�ֱ�Ϊ:\n ( " ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
	  cout << *Iter3 << " ";
   cout << ")." << endl;

   int ptotal;
   ptotal = accumulate ( v3.begin ( ) , v3.end ( ) , 1 , multiplies<int>( ) );

   cout << "����1��10�����˻�Ϊ: "
		<< ptotal << "." << endl;

   // ����һ��ǰn���������
   int k = 0, ppartotal;
   for ( Iter3 = v3.begin( ) + 1; Iter3 != v3.end( ) + 1 ; Iter3++ ) {
	  ppartotal = accumulate ( v3.begin ( ) , Iter3 , 1 , multiplies<int>( ) );
	  v4 [ k ] = ppartotal;
	  k++;
   }

   cout << "ǰn����ֱ�Ϊ:\n ( " ;
   for ( Iter4 = v4.begin( ) ; Iter4 != v4.end( ) ; Iter4++ )
	  cout << *Iter4 << " ";
   cout << ")." << endl;
}

//__________________________________________________________________________
count_if:
#include <vector>
#include <algorithm>
#include <iostream>
bool greater10(int value)
{
return value >10;
}
int main()
{
using namespace std;
vector<int> v1;
vector<int>::iterator Iter;
v1.push_back(10);
v1.push_back(20);
v1.push_back(10);
v1.push_back(40);
v1.push_back(10);
cout << "v1 = ( ";
for (Iter = v1.begin(); Iter != v1.end(); Iter++)
cout << *Iter << " ";
cout << ")" << endl;
vector<int>::iterator::difference_type result1;
result1 = count_if(v1.begin(), v1.end(), greater10);
cout << "The number of elements in v1 greater than 10 is: "
<< result1 << "." << endl;
}
*/