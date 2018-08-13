/*************************************************************************************/
/*************************************** 2018.4.12 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

//use 1 1as random seed,generate n integers
//output the inorder,level order results
//output the number of leaf nodes in this BST tree
//delete the root,output the inorder result of the new binary search tree

#ifndef BST_H
#define BST_H

#include "iostream"
#include "queue"
#include "iterator"
#include "functional"

using namespace std;

int ncount = 0;

//use templateCompareable
template <typename Compareable>
class BST 
{
public:
	BST() {}
	~BST() 
	{
		Tree_kill(root);
	}

	void Level_cout(ostream & os) const 
	{
		queue<BST_Node *> bfs;
		if (root != nullptr)
			bfs.push(root);

		while (bfs.size()) 
		{
			os << bfs.front()->data << ' ';

			if (bfs.front()->sub_left != nullptr)
				bfs.push(bfs.front()->sub_left);
			if (bfs.front()->sub_right != nullptr)
				bfs.push(bfs.front()->sub_right);

			bfs.pop();
		}
		os << endl;
	}

	void InOrder_cout(ostream & os) const 
	{
		if (root != nullptr) 
		{
			InOrder_cout(os, root);
			os << endl;
		}
	}

	int Data_count() const 
	{
		return ncount;
	}

	int Leaf_count() const 
	{
		return Leaf_count(root);
	}

	void Root_kill() 
	{
		Node_kill(root);
	}

	void Data_insert(Compareable ndata)
	{
		BST_Node * & ippe = value_find(ndata);
		if (ippe == nullptr)
		{
			ippe = new BST_Node(ndata);
			ncount++;
		}
	}
	/*define the node,it have two subtrees*/
	struct BST_Node 
	{
		Compareable data;
		BST_Node(Compareable _data) : data(_data) {}
		BST_Node * sub_left = nullptr;
		BST_Node * sub_right = nullptr;
	};

	BST_Node * root = nullptr;

	//KillTress function
	void Tree_kill(BST_Node * & killRoot) 
	{
		if (killRoot->sub_left != nullptr) 
		{
			Tree_kill(killRoot->sub_left);
		}
		if (killRoot->sub_right != nullptr) 
		{
			Tree_kill(killRoot->sub_right);
		}
		Node_kill(killRoot);
	}


	void Node_kill(BST_Node * & object_tree) 
	{
		BST_Node * killPoint = object_tree;
		if (killPoint->sub_left == nullptr) 
		{
			if (killPoint->sub_right == nullptr) 
			{
				//leaf node
				object_tree = nullptr;
				delete killPoint;
				ncount--;
			}
			else 
			{
				//only have right subtree
				object_tree = killPoint->sub_right;
				delete killPoint;
				ncount--;
			}
		}

		//the left subtree is not empty
		else 
		{
			if (killPoint->sub_right == nullptr) 
			{
				//just owns a left subtree
				object_tree = killPoint->sub_left;
				delete killPoint;
				ncount--;
			}
			else 
			{
				//obviously owns two subtrees
				BST_Node * parent_tem = nullptr;
				BST_Node * replacePoint = nullptr;
			}
		}
	}


	void InOrder_cout(ostream & os, BST_Node * printPosition) const 
	{
		if (printPosition->sub_left != nullptr)
			InOrder_cout(os, printPosition->sub_left);

		os << printPosition->data << ' ';

		if (printPosition->sub_right != nullptr)
			InOrder_cout(os, printPosition->sub_right);
	}

	BST_Node * & value_find(Compareable c) 
	{
		if (root != nullptr && root->data == c)
			return root;
		BST_Node **pf = &root;

		while (*pf != nullptr) 
		{
			if (c < (*pf)->data) 
			{
				pf = &((*pf)->sub_left);
				continue;
			}
			if (c >(*pf)->data) 
			{
				pf = &((*pf)->sub_right);
				continue;
			}
			if (c == (*pf)->data) 
			{
				break;
			}
		}
		return *pf;
	}

	int Leaf_count(BST_Node * findPosition) const 
	{
		int num_count_leaf = 0;
		if (findPosition->sub_left == nullptr) 
		{
			if (findPosition->sub_right == nullptr) 
			{
				return 1;
			}
			else 
			{
				num_count_leaf = Leaf_count(findPosition->sub_right);
			}
		}
		else 
		{
			num_count_leaf += Leaf_count(findPosition->sub_left);
			if (findPosition->sub_right != nullptr)
				num_count_leaf += Leaf_count(findPosition->sub_right);
		}
		return num_count_leaf;
	}
};
#endif BST_H