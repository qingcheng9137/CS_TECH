///*************************************************************************************/
///*************************************** 2018.4.09 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////我的评价：这是我见过最漂亮的程序
//
//#include <iostream>  
//#include <stack>  
//#include <queue>  
//
//using namespace std;
//
///*
//*创建二叉搜索树结点类型，一个char数据，三个指针（左孩子、右孩子和双亲）
//* 双亲指针（parent）在二叉搜索树的插入和删除操作、获取前驱和后继操作中都会用到，二叉树遍历用不到
//*/
//class binary_tree_node
//{
//public:
//	/*全部声明为public，方便直接访问，注意初始化！*/
//	binary_tree_node(char a) :data(a), left_child(NULL), right_child(NULL), parent(NULL) {};
//	~binary_tree_node() {};
//	char data;
//	binary_tree_node *left_child;
//	binary_tree_node *right_child;
//	binary_tree_node *parent;
//};
//
//
///*
//*创建二叉搜索树类型，数据成员为根结点的指针
//* 通过不断插入结点的方法创建二叉搜索树
//* 二叉搜索树的遍历方法和普通二叉树的遍历没什么区别
//*/
//class binary_tree
//{
//public:
//	/*自定义构造函数，形参为二叉搜索树的结点数量，注意初始化*/
//	binary_tree(unsigned int size) :root(NULL), _size(size) {};
//	~binary_tree() {};
//
//	/*二叉搜索树的创建，调用insert_node（）插入结点，按照二叉搜索树的大小特性插入*/
//	void create_binary_tree();
//	binary_tree_node* get_root(); //获取根结点  
//	void insert_node(binary_tree_node *node); //通过比较结点关键字段的大小插入结点  
//
//	void preorder_tree_walk(binary_tree_node* node);//前序遍历的递归算法 
//	void inorder_tree_walk(binary_tree_node* node);//中序遍历的递归算法  
//	void postorder_tree_walk(binary_tree_node* node);//后续遍历的递归算法
//
//	void inorder_tree_walk2(binary_tree_node* node);//中序遍历的非递归算法  
//	void preorder_tree_walk2(binary_tree_node* node);//前序遍历的非递归算法  
//	void postorder_tree_walk2(binary_tree_node* node);//后续遍历的非递归算法  
//	void levelorder_tree_walk(binary_tree_node* node);//逐层打印二叉树  
//	
//	binary_tree_node* search(char a);//搜索一个元素，非递归  
//	binary_tree_node* search2(binary_tree_node* node, char a);//递归搜索一个元素  
//
//	char max();//找最大元素  
//	char min();//找最小元素  
//protected:
//	void visit(binary_tree_node* node);//打印结点  
//
//private:
//	binary_tree_node *root;//根结点指针  
//	unsigned int _size;//二叉搜索树的结点数量  
//
//};
//
//
///*获取根结点*/
//binary_tree_node* binary_tree::get_root()
//{
//	return root;
//}
//
//
///*打印结点关键字*/
//void binary_tree::visit(binary_tree_node* node)
//{
//	cout << node->data << " ";
//}
//
//
///*根据关键字大小插入新结点
//*从根结点开始比较，比根节点小进入左子树，比根节点大进入右子树，逐步往叶子结点方向寻找到新结点的位置
//* 再根据关键字大小挂在左边或者右边，设置好三个指针
//*/
//void binary_tree::insert_node(binary_tree_node* node)
//{
//	binary_tree_node *tmp1 = root;
//	binary_tree_node *tmp2 = NULL;
//	while (tmp1 != NULL)
//	{
//		tmp2 = tmp1;
//		if (node->data < tmp1->data)
//			tmp1 = tmp1->left_child;
//		else
//			tmp1 = tmp1->right_child;
//	}
//
//	node->parent = tmp2;
//	if (tmp2 == NULL)
//		root = node;
//	else if (node->data < tmp2->data)
//		tmp2->left_child = node;
//	else
//		tmp2->right_child = node;
//}
//
//
///*
//* 每次输入一个字符创建一个结点，再把这个结点插入到二叉搜索树的叶子结点上
//* 如果根节点不存在，新结点就设为根节点
//*/
//void binary_tree::create_binary_tree()
//{
//	for (unsigned int i = 0; i<_size; ++i)
//	{
//		cout << "input a character" << endl;
//		char data;
//		cin >> data;
//		binary_tree_node *node = new binary_tree_node(data);
//		insert_node(node);
//	}
//}
//
//
///*中序遍历的递归算法
//* 形参为根节点
//* 中序遍历的顺序为（左子树->根节点->右子树）
//*/
//void binary_tree::inorder_tree_walk(binary_tree_node* node)
//{
//	if (node != NULL)
//	{
//		inorder_tree_walk(node->left_child);
//		visit(node);
//		inorder_tree_walk(node->right_child);
//	}
//}
//
//
///*中序遍历的非递归算法
//* 形参为根节点
//* 采用栈存储作为中序遍历的非递归方法，首先根节点进栈，先遍历左子树直到左子树为空，出栈并打印该节点关键字。再去访问出栈结点的右子树
//* 右子树不为空，继续：该节点进栈->遍历左子树->出栈并打印->右结点
//*/
//void binary_tree::inorder_tree_walk2(binary_tree_node* node)
//{
//	stack<binary_tree_node*> _stack;
//	binary_tree_node *tmp = node;
//	while (NULL != tmp || !_stack.empty())//结点不为空或者栈不空，可以继续遍历  
//	{
//		if (NULL != tmp)
//		{
//			_stack.push(tmp);//结点进栈  
//			tmp = tmp->left_child;//遍历左子树，直到左子树为空  
//		}
//		else
//		{
//			tmp = _stack.top();//左子树遍到叶子结点，取出栈顶结点并打印，访问右孩子  
//			visit(tmp);//如果右孩子不为空，重复上述步骤，先左再根后右；如果右孩子为空，再出栈一个结点，接着访问右孩子  
//			_stack.pop();
//			tmp = tmp->right_child;
//		}
//	}
//}
//
//
///*前序遍历的递归算法
//* 形参为根节点
//* 前序遍历的顺序为（根节点->左子树->右子树）
//*/
//void binary_tree::preorder_tree_walk(binary_tree_node* node)
//{
//	if (node != NULL)
//	{
//		visit(node);
//		preorder_tree_walk(node->left_child);
//		preorder_tree_walk(node->right_child);
//	}
//}
//
//
///*
//* 前序遍历的非递归算法
//* 形参为根结点
//* 采用栈结构，根结点进栈，遍历左子树，结点进栈立即打印关键字
//* 直到左子树为空，出栈的同时，去访问其右孩子。如果右孩子不为空，重复上述步骤；如果右孩子为空，继续出栈
//*
//*/
//void binary_tree::preorder_tree_walk2(binary_tree_node* node)
//{
//	stack<binary_tree_node*> _stack;
//	binary_tree_node *tmp = node;
//	while (NULL != tmp || !_stack.empty())
//	{
//		if (NULL != tmp)
//		{
//			_stack.push(tmp);
//			visit(tmp);
//			tmp = tmp->left_child;
//		}
//		else
//		{
//			tmp = _stack.top();
//			_stack.pop();
//			tmp = tmp->right_child;
//		}
//	}
//
//}
//
//
///*
//* 后续遍历的递归算法
//* 左子树->右子树->根结点
//*/
//void binary_tree::postorder_tree_walk(binary_tree_node* node)
//{
//	if (node != NULL)
//	{
//		postorder_tree_walk(node->left_child);
//		postorder_tree_walk(node->right_child);
//		visit(node);
//	}
//
//}
//
//
///*
//*后续遍历的非递归算法
//* 后续遍历的非递归算法比较复杂，这里采用两个栈的思路
//*  后续：左子树->右子树->根节点，先在第一个栈里遍历 根结点->右子树->左子树，用第二个栈颠倒次序
//*/
//void binary_tree::postorder_tree_walk2(binary_tree_node* node)
//{
//	stack<binary_tree_node*> _stack;
//	stack<binary_tree_node*> output;
//	binary_tree_node *tmp = node;
//	_stack.push(tmp);
//	while (!_stack.empty())
//	{
//		tmp = _stack.top();
//		output.push(tmp);//栈一出栈，栈二进栈  
//		_stack.pop();
//		if (NULL != tmp->left_child)//先left后right不能颠倒  
//			_stack.push(tmp->left_child);
//		if (NULL != tmp->right_child)
//			_stack.push(tmp->right_child);
//	}
//	while (!output.empty())
//	{
//		binary_tree_node *tmp2 = output.top();
//		visit(tmp2);
//		output.pop();
//	}
//}
//
//
///*
//* 逐层打印二叉树，每层不间隔，如果每层间隔，要另外设计算法
//* 基于Queue来实现，也就是广度优先搜索（BFS）的思想
//*/
//void binary_tree::levelorder_tree_walk(binary_tree_node* node)
//{
//	queue<binary_tree_node*> _queue;
//	_queue.push(node);
//	while (!_queue.empty())
//	{
//		binary_tree_node *tmp = _queue.front();
//		visit(tmp);
//		_queue.pop();
//		if (tmp->left_child != NULL)
//			_queue.push(tmp->left_child);
//		if (tmp->right_child != NULL)
//			_queue.push(tmp->right_child);
//	}
//}
//
//
///*
//* 搜索元素
//* 非递归
//*/
//binary_tree_node* binary_tree::search(char a)
//{
//	if (root == NULL)
//		return NULL;
//	else
//	{
//		binary_tree_node *tmp = root;
//		while ((tmp != NULL) && (tmp->data) != a)
//		{
//			if (a<tmp->data)
//				tmp = tmp->left_child;
//			else
//				tmp = tmp->right_child;
//		}
//		return tmp;
//	}
//}
//
//
///*
//* 搜索元素
//* 递归
//*/
//binary_tree_node* binary_tree::search2(binary_tree_node* node, char a)
//{
//	binary_tree_node *tmp = node;
//	if ((tmp->data == a) || (node == NULL))
//		return node;
//	else
//	{
//		if (a<tmp->data)
//			return search2(tmp->left_child, a);
//		else
//			return search2(tmp->right_child, a);
//	}
//}
//
//
///* 找最大元素*/
//char binary_tree::max()
//{
//	binary_tree_node* tmp = root;
//	while (tmp->right_child != NULL)
//	{
//		tmp = tmp->right_child;
//	}
//	return tmp->data;
//}
//
//
///*找最小元素*/
//char binary_tree::min()
//{
//	binary_tree_node* tmp = root;
//	while (tmp->left_child != NULL)
//	{
//		tmp = tmp->left_child;
//	}
//	return tmp->data;
//}
//
//
//int main()
//{
//	binary_tree btree(7);
//	btree.create_binary_tree();
//	binary_tree_node *root = btree.get_root();
//	btree.preorder_tree_walk(root);
//	cout << endl;
//	btree.inorder_tree_walk(root);
//	cout << endl;
//	btree.postorder_tree_walk(root);
//	cout << endl;
//	btree.preorder_tree_walk2(root);
//	cout << endl;
//	btree.inorder_tree_walk2(root);
//	cout << endl;
//	btree.postorder_tree_walk2(root);
//	cout << endl;
//	btree.levelorder_tree_walk(root);
//	cout << endl;
//	binary_tree_node *result1 = btree.search('D');
//	cout << "the address of result1:" << result1 << endl;
//	binary_tree_node *result2 = btree.search2(root, 'D');
//	cout << "the address of result2:" << result2 << endl;
//	cout << "max node:" << btree.max() << endl;
//	cout << "min node:" << btree.min() << endl;
//	system("pause");
//	return 0;
//}