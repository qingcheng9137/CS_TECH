/*************************************************************************************/
/*************************************** 2018.4.09 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

/*implement a queue class using a vector*/
/*template<typename Object>
class queue
{
public:
	queue(int s) :maxSize(s), front(0), rear(0) { elements.resize(maxSize); }
	queue() { maxSize = 100; front = 0; rear = 0; elements.resize(maxSize); }
	~queue() { while (front != rear)deque(); }
	void enque(Object obj)
	{
		if (!full())
		{
			elements[rear] = obj;
			rear = (rear + 1) % maxSize;
		}
	}
	Object deque()
	{
		Object temp;
		if (!empty())
		{
			temp = elements[front];
			front = (front + 1) % maxSize;
			return temp;
		}
	}
	bool empty() { return front == rear; }
	bool full() { return (rear + 1) % maxSize == front; }
private:
	int front;
	int rear;
	int maxSize;
	vector<Object>elements;
};*/