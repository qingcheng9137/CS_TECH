///*************************************************************************************/
///*************************************** 2018.4.11 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////swap()����
////��ע������������ԣ�Ҫ�����ı�������ʵ���ڴ�ռ䣬��Ϊ���ڶ���õ�������ԣ���С�̶�
////����int a[5]�����ݲ��ܺ�int b[2]��ȫ�����ݽ��������Ƕ��ڻ�������������������֧��
////Ԫ�ؿռ䶯̬���䣬����ཻ��������ӵ�е�Ԫ���ڴ�ռ���Բ�ͬ����������ʾ
////�������Ҳ˵����copy������ǿ�����ã�����������
//#include "iostream"
//#include "vector"
//#include "iterator"
//#include "algorithm"
//
//using namespace std;
//
//int main()
//{
//	/*������������Ԫ��*/
//	int a = 10;
//	int b = 20;
//	cout << "ԭʼ����a=" << a << "\tb=" << b << endl;
//	swap(a, b);
//	cout << "����������a=" << a << "\tb=" << b << endl;
//
//	/*������������Ԫ��*/
//	int a2[5] = { 1, 2, 3, 4, 5 };
//	int b2[5] = { 6, 7, 8, 9, 10 };
//	cout << "ԭʼa=";
//	copy(a2, a2 + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "ԭʼb=";
//	copy(b2, b2 + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	swap_ranges(a2, a2 + 5, b2);
//	cout << "������a2[5]=";
//	copy(a2, a2 + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "������b2[5]=";
//	copy(b2, b2 + 5, ostream_iterator<int>(cout, "\t"));
//	cout << endl << endl;
//
//	/*����������������Ԫ��*/
//	int a3[5] = { 1, 2, 3, 4, 5 };
//	int b3[2] = { 5, 6 };
//	vector<int>v1(a3, a3 + 5);
//	vector<int>v2(b3, b3 +2);
//	cout << "ԭʼvector1=";
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "ԭʼvector2=";
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	swap(v1, v2);
//	cout << "�������v1=";
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "�������v2=";
//	cout << endl;
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	system("pause");
//	return 0;
//}