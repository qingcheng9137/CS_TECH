/*************************************************************************************/
/*************************************** 2018.5.06 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

#include<iostream>
#include <list>
#include <queue>
using namespace std;

/************************类声明************************/
class Graph
{
	int V;             // 顶点个数
	list<int> *adj;    // 邻接表
	queue<int> q;      // 维护一个入度为0的顶点的集合
	int* indegree;     // 记录每个顶点的入度
public:
	Graph(int V);                   // 构造函数
	~Graph();                       // 析构函数
	void addEdge(int v, int w);     // 添加边
	bool topological_sort();        // 拓扑排序
};

/************************类定义************************/
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];

	indegree = new int[V];  // 入度全部初始化为0
	for (int i = 0; i<V; ++i)
		indegree[i] = 0;
}

Graph::~Graph()
{
	delete[] adj;
	delete[] indegree;
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	++indegree[w];
}

bool Graph::topological_sort()
{
	for (int i = 0; i<V; ++i)
		if (indegree[i] == 0)
			q.push(i);         // 将所有入度为0的顶点入队

	int count = 0;             // 计数，记录当前已经输出的顶点数 
	while (!q.empty())
	{
		int v = q.front();      // 从队列中取出一个顶点
		q.pop();

		switch (v)
		{
		case 0:
			cout << "MAC3311" << endl;
			break;
		case 1:
			cout << "COP3210" << endl;
			break;
		case 2:
			cout << "CAP3700" << endl;
			break;
		case 3:
			cout << "MAD2104" << endl;
			break;
		case 4:
			cout << "COP3400" << endl;
			break;
		case 5:
			cout << "COP3337" << endl;
			break;
		case 6:
			cout << "COP4555" << endl;
			break;
		case 7:
			cout << "MAD3305" << endl;
			break;
		case 8:
			cout << "MAD3512" << endl;
			break;
		case 9:
			cout << "COP3530" << endl;
			break;
		case 10:
			cout << "CDA4101" << endl;
			break;
		case 11:
			cout << "CDA4400" << endl;
			break;
		case 12:
			cout << "COP4540" << endl;
			break;
		case 13:
			cout << "COP5621" << endl;
			break;
		case 14:
			cout << "CIS4610" << endl;
			break;
		case 15:
			cout << "COP4610" << endl;
			break;
		case 16:
			cout << "COP4225" << endl;
			break;

		default:
			break;
		}
		++count;
		// 将所有v指向的顶点的入度减1，并将入度减为0的顶点入栈
		list<int>::iterator beg = adj[v].begin();
		for (; beg != adj[v].end(); ++beg)
			if (!(--indegree[*beg]))
				q.push(*beg);   // 若入度为0，则入栈
	}

	if (count < V)
		return false;           // 没有输出全部顶点，有向图中有回路
	else
		return true;            // 拓扑排序成功
}

int main()
{
	Graph g(17);   // 创建图
	g.addEdge(0, 3);
	g.addEdge(1, 3);
	g.addEdge(1, 4);
	g.addEdge(1, 5);
	g.addEdge(3, 2);
	g.addEdge(5, 6);
	g.addEdge(3, 7);
	g.addEdge(3, 8);
	g.addEdge(3, 9);
	g.addEdge(3, 10);
	g.addEdge(3, 11);
	g.addEdge(4, 10);
	g.addEdge(5, 9);
	g.addEdge(5, 10);
	g.addEdge(10, 11);
	g.addEdge(8, 13);
	g.addEdge(9, 12);
	g.addEdge(9, 14);
	g.addEdge(9, 15);
	g.addEdge(10, 15);
	g.addEdge(14, 13);
	g.addEdge(15, 16);
	g.topological_sort();
	system("pause");
	return 0;
}