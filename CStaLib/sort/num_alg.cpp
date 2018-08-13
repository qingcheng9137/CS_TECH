/////*************************************************************************************/
/////*************************************** 2018.4.14 ***********************************/
/////*****************************          jerry zheng           ************************/
/////**************************** beijing insititute of technology ***********************/
/////*************************************************************************************/
////
//////数值算法：
/////*1.accumulate():累积求和
////  2.inner_product():内积求和
////  3.partial_sum():创建新的序列，每个元素值代表指定范围内该位置前所有元素的和
////  4.adjacent_difference():得到相邻元素的差集*/
////
//////例子1.计算1+(1×2)+(1×2×3)+……的前10项和
////#include "stdafx.h"
////
////int main()
////{
////	vector<int>v(10);
////	for (int ni = 0; ni < 10; ni++)
////	{
////		v[ni] = ni + 1;
////	}
////	vector<int>mid(10);
////	/*利用partial_sum保存每一个子项*/
////	partial_sum(v.begin(), v.end(), mid.begin(), multiplies<int>());
////	/*利用accumulate得到每个子项的累加和,第三个参数代表初始值*/
////	int sum = accumulate(mid.begin(), mid.end(), 0);
////	cout << "1+(1×2)+(1×2×3)+……的前10项和: " << sum << endl;
////
////	system("pause");
////	return 0;
////}
////例子2.计算(1/2)^2+(2/3)^2+(3/4)^2+……的前十项和
//#include "stdafx.h"
//
//int main()
//{
//	vector<float>v(10);
//	for (int ni = 1; ni <= 10; ni++)
//	{
//		v.push_back((float)ni / (ni + 1));
//		cout << (float)ni / (ni + 1) << "\t";
//	}
//	/*向量自身内积,0.0f是初值*/
//	float sum = inner_product(v.begin(), v.end(), v.begin(), 0.0f);
//	cout << "前10项平方和：";
//	cout << sum;
//
//	system("pause");
//	return 0;
//}