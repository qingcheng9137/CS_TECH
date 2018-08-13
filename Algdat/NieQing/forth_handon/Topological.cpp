/*************************************************************************************/
/*************************************** 2018.5.06 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

#include<iostream>
#include <list>
#include <queue>
using namespace std;

/************************������************************/
class Graph
{
	int V;             // �������
	list<int> *adj;    // �ڽӱ�
	queue<int> q;      // ά��һ�����Ϊ0�Ķ���ļ���
	int* indegree;     // ��¼ÿ����������
public:
	Graph(int V);                   // ���캯��
	~Graph();                       // ��������
	void addEdge(int v, int w);     // ��ӱ�
	bool topological_sort();        // ��������
};

/************************�ඨ��************************/
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];

	indegree = new int[V];  // ���ȫ����ʼ��Ϊ0
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
			q.push(i);         // ���������Ϊ0�Ķ������

	int count = 0;             // ��������¼��ǰ�Ѿ�����Ķ����� 
	while (!q.empty())
	{
		int v = q.front();      // �Ӷ�����ȡ��һ������
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
		// ������vָ��Ķ������ȼ�1��������ȼ�Ϊ0�Ķ�����ջ
		list<int>::iterator beg = adj[v].begin();
		for (; beg != adj[v].end(); ++beg)
			if (!(--indegree[*beg]))
				q.push(*beg);   // �����Ϊ0������ջ
	}

	if (count < V)
		return false;           // û�����ȫ�����㣬����ͼ���л�·
	else
		return true;            // ��������ɹ�
}

int main()
{
	Graph g(17);   // ����ͼ
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