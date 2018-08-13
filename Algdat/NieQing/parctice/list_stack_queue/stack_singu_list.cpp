/*************************************************************************************/
/*************************************** 2018.4.09 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

/*implement a stack class using a singly linked list*/
/*no header no tail nodes*/
/*template<typename Object>
struct node
{
	node() { next = NULL; }
	node(Object obj) :data(obj) {}
	node(Object obj, node*ptr) :data(obj), next(ptr) {}
	Object data;
	node*next;
};

template<typename Object>
class stack
{
public:
	stack() { head = NULL; }
	~stack() { while (head)pop(); }
	void push(Object obj)
	{
		node<Object>*ptr = new node <Object>(obj, head);
		head = ptr;
	}
	Object top() { return(head->data); }
	void pop()
	{
		node<Object>*ptr = head->next;
		delete head;
		head = ptr;
	}
private:
	node<Object>*head;
};

*/