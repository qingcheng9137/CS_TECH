/*************************************************************************************/
/*************************************** 2018.3.29 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//scoped_array包装的是new[]产生的指针，但是它不提供指针运算，所以不能用数组首地址访问
//不得不说，scoped_array的功能有限，无法动态增长，没有边界检查，没有迭代器支持，也
//不能够搭配STL算法，只有一个裸露的数组接口
//需要使用动态数组的时候，我们应该使用std:vector，因为它更加灵活，拥有更丰富的成员函数

//	scoped_array<int> sa(arr);
//	fill_n(&sa[0], 100, 5);
//	sa[10] = sa[20] + sa[30];

