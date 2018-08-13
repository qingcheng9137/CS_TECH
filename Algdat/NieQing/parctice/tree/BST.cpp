///*************************************************************************************/
///*************************************** 2018.4.09 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////�ҵ����ۣ������Ҽ�����Ư���ĳ���
//
//#include <iostream>  
//#include <stack>  
//#include <queue>  
//
//using namespace std;
//
///*
//*��������������������ͣ�һ��char���ݣ�����ָ�루���ӡ��Һ��Ӻ�˫�ף�
//* ˫��ָ�루parent���ڶ����������Ĳ����ɾ����������ȡǰ���ͺ�̲����ж����õ��������������ò���
//*/
//class binary_tree_node
//{
//public:
//	/*ȫ������Ϊpublic������ֱ�ӷ��ʣ�ע���ʼ����*/
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
//*�����������������ͣ����ݳ�ԱΪ������ָ��
//* ͨ�����ϲ�����ķ�����������������
//* �����������ı�����������ͨ�������ı���ûʲô����
//*/
//class binary_tree
//{
//public:
//	/*�Զ��幹�캯�����β�Ϊ�����������Ľ��������ע���ʼ��*/
//	binary_tree(unsigned int size) :root(NULL), _size(size) {};
//	~binary_tree() {};
//
//	/*�����������Ĵ���������insert_node���������㣬���ն����������Ĵ�С���Բ���*/
//	void create_binary_tree();
//	binary_tree_node* get_root(); //��ȡ�����  
//	void insert_node(binary_tree_node *node); //ͨ���ȽϽ��ؼ��ֶεĴ�С������  
//
//	void preorder_tree_walk(binary_tree_node* node);//ǰ������ĵݹ��㷨 
//	void inorder_tree_walk(binary_tree_node* node);//��������ĵݹ��㷨  
//	void postorder_tree_walk(binary_tree_node* node);//���������ĵݹ��㷨
//
//	void inorder_tree_walk2(binary_tree_node* node);//��������ķǵݹ��㷨  
//	void preorder_tree_walk2(binary_tree_node* node);//ǰ������ķǵݹ��㷨  
//	void postorder_tree_walk2(binary_tree_node* node);//���������ķǵݹ��㷨  
//	void levelorder_tree_walk(binary_tree_node* node);//����ӡ������  
//	
//	binary_tree_node* search(char a);//����һ��Ԫ�أ��ǵݹ�  
//	binary_tree_node* search2(binary_tree_node* node, char a);//�ݹ�����һ��Ԫ��  
//
//	char max();//�����Ԫ��  
//	char min();//����СԪ��  
//protected:
//	void visit(binary_tree_node* node);//��ӡ���  
//
//private:
//	binary_tree_node *root;//�����ָ��  
//	unsigned int _size;//�����������Ľ������  
//
//};
//
//
///*��ȡ�����*/
//binary_tree_node* binary_tree::get_root()
//{
//	return root;
//}
//
//
///*��ӡ���ؼ���*/
//void binary_tree::visit(binary_tree_node* node)
//{
//	cout << node->data << " ";
//}
//
//
///*���ݹؼ��ִ�С�����½��
//*�Ӹ���㿪ʼ�Ƚϣ��ȸ��ڵ�С�������������ȸ��ڵ�����������������Ҷ�ӽ�㷽��Ѱ�ҵ��½���λ��
//* �ٸ��ݹؼ��ִ�С������߻����ұߣ����ú�����ָ��
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
//* ÿ������һ���ַ�����һ����㣬�ٰ���������뵽������������Ҷ�ӽ����
//* ������ڵ㲻���ڣ��½�����Ϊ���ڵ�
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
///*��������ĵݹ��㷨
//* �β�Ϊ���ڵ�
//* ���������˳��Ϊ��������->���ڵ�->��������
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
///*��������ķǵݹ��㷨
//* �β�Ϊ���ڵ�
//* ����ջ�洢��Ϊ��������ķǵݹ鷽�������ȸ��ڵ��ջ���ȱ���������ֱ��������Ϊ�գ���ջ����ӡ�ýڵ�ؼ��֡���ȥ���ʳ�ջ����������
//* ��������Ϊ�գ��������ýڵ��ջ->����������->��ջ����ӡ->�ҽ��
//*/
//void binary_tree::inorder_tree_walk2(binary_tree_node* node)
//{
//	stack<binary_tree_node*> _stack;
//	binary_tree_node *tmp = node;
//	while (NULL != tmp || !_stack.empty())//��㲻Ϊ�ջ���ջ���գ����Լ�������  
//	{
//		if (NULL != tmp)
//		{
//			_stack.push(tmp);//����ջ  
//			tmp = tmp->left_child;//������������ֱ��������Ϊ��  
//		}
//		else
//		{
//			tmp = _stack.top();//�������鵽Ҷ�ӽ�㣬ȡ��ջ����㲢��ӡ�������Һ���  
//			visit(tmp);//����Һ��Ӳ�Ϊ�գ��ظ��������裬�����ٸ����ң�����Һ���Ϊ�գ��ٳ�ջһ����㣬���ŷ����Һ���  
//			_stack.pop();
//			tmp = tmp->right_child;
//		}
//	}
//}
//
//
///*ǰ������ĵݹ��㷨
//* �β�Ϊ���ڵ�
//* ǰ�������˳��Ϊ�����ڵ�->������->��������
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
//* ǰ������ķǵݹ��㷨
//* �β�Ϊ�����
//* ����ջ�ṹ��������ջ������������������ջ������ӡ�ؼ���
//* ֱ��������Ϊ�գ���ջ��ͬʱ��ȥ�������Һ��ӡ�����Һ��Ӳ�Ϊ�գ��ظ��������裻����Һ���Ϊ�գ�������ջ
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
//* ���������ĵݹ��㷨
//* ������->������->�����
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
//*���������ķǵݹ��㷨
//* ���������ķǵݹ��㷨�Ƚϸ��ӣ������������ջ��˼·
//*  ������������->������->���ڵ㣬���ڵ�һ��ջ����� �����->������->���������õڶ���ջ�ߵ�����
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
//		output.push(tmp);//ջһ��ջ��ջ����ջ  
//		_stack.pop();
//		if (NULL != tmp->left_child)//��left��right���ܵߵ�  
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
//* ����ӡ��������ÿ�㲻��������ÿ������Ҫ��������㷨
//* ����Queue��ʵ�֣�Ҳ���ǹ������������BFS����˼��
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
//* ����Ԫ��
//* �ǵݹ�
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
//* ����Ԫ��
//* �ݹ�
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
///* �����Ԫ��*/
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
///*����СԪ��*/
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