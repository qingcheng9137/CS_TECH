/*************************************************************************************/
/*************************************** 2018.4.12 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//use 1 as random seed,generate n integers
//output the inorder,level order results
//output the number of leaf nodes in this BST tree
//delete the root,output the inorder result of the new binary search tree

#include "BST.h"

BST<int> bst;

int main()
{
	cout << "please input your test number nTest:" << endl;
	int nTest;
	cin >> nTest;

	srand(1);	////use 1 as random seed,generate n integers
	while (nTest--) 
	{
		bst.Data_insert(rand());
	}

	cout << "Number of leaf nodes: " << bst.Leaf_count() << endl;

	cout << "In order" << endl;
	bst.InOrder_cout(cout);

	cout << "Level order" << endl;
	bst.Level_cout(cout);


	cout << "Inorder result after killing the root:" << endl;
	bst.Root_kill();

	cout << "In order" << endl;
	bst.InOrder_cout(cout);

	system("pause");
	return 0;
}