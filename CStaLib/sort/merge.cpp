///*************************************************************************************/
///*************************************** 2018.4.13 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////合并函数示例
////此处a,b都是升序，结果也是升序，不能够一个升序一个降序。同理，inplace_merge的两部分
////也必须同序
//
//#include "stdafx.h"
//
//int main()
//{
//	int a[] = { 1, 3, 5, 7 };
//	int b[] = { 2, 4, 6, 8 };
//	int result[8];
//	cout << "原始a[]:" << endl;
//	copy(a, a + 4, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	cout << "原始b[]:" << endl;
//	copy(b, b + 4, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	merge(a, a + 4, b, b + 4, result);
//	//假如a,b都是降序，则上面语句应该是：merge(a,b,result,greater<int>())
//	cout << "a,b merge之后：" << endl;
//	copy(result, result + 8, ostream_iterator<int>(cout, "\t"));
//	cout << endl << endl;
//
//	int c[8] = { 1, 3, 5, 8, 2, 5, 6, 7 };
//	cout << "原始c[]：" << endl;
//	copy(c, c + 8, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//	inplace_merge(c, c + 4, c + 8);
//	cout << "c[] inplace_merge后：" << endl;
//	copy(c, c + 8, ostream_iterator<int>(cout, "\t"));
//	cout << endl;
//
//	system("pause");
//	return 0;
//}