///*************************************************************************************/
///*************************************** 2018.4.12 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////write functions to implement insertion sort,Shellsort,heapsort,quicksort
////use current system time as random seed,generate n(=20,100,1000,10000)integers
////output the data before sorted and after sorted
////output running time of differe4nt sort algorithms
////compare the performance of different sort algorithms
//
//#include "iostream"
//#include "stdio.h"
//#include "ctime"
//
//using namespace std;
//
///*InsertionSort*/
//void InsertionSort(int A[], int n)
//{
//	for (int i = 1; i < n; i++)         // ����ץ�˿�������
//	{
//		int get = A[i];                 // ����ץ��һ���˿���
//		int j = i - 1;                  // ���������ϵ�����������õ�
//		while (j >= 0 && A[j] > get)    // ��ץ�����������ƴ���������бȽ�
//		{
//			A[j + 1] = A[j];            // ��������Ʊ�ץ�����ƴ󣬾ͽ�������
//			j--;
//		}
//		A[j + 1] = get; // ֱ�������Ʊ�ץ������С(��������)����ץ�����Ʋ��뵽�������ұ�(���Ԫ�ص���Դ���δ�䣬���Բ����������ȶ���)
//	}
//}
//
///*ShellSort*/
//void ShellSort(int A[], int n)
//{
//	int h = 0;
//	while (h <= n)                          // ���ɳ�ʼ����
//	{
//		h = 3 * h + 1;
//	}
//	while (h >= 1)
//	{
//		for (int i = h; i < n; i++)
//		{
//			int j = i - h;
//			int get = A[i];
//			while (j >= 0 && A[j] > get)
//			{
//				A[j + h] = A[j];
//				j = j - h;
//			}
//			A[j + h] = get;
//		}
//		h = (h - 1) / 3;                    // �ݼ�����
//	}
//}
//
//
///*QuickSort*/
//void Swap(int A[], int i, int j)
//{
//	int temp = A[i];
//	A[i] = A[j];
//	A[j] = temp;
//}
//
//int Partition(int A[], int left, int right)  // ���ֺ���
//{
//	int pivot = A[right];               // ����ÿ�ζ�ѡ�����һ��Ԫ����Ϊ��׼
//	int tail = left - 1;                // tailΪС�ڻ�׼�����������һ��Ԫ�ص�����
//	for (int i = left; i < right; i++)  // ������׼���������Ԫ��
//	{
//		if (A[i] <= pivot)              // ��С�ڵ��ڻ�׼��Ԫ�طŵ�ǰһ��������ĩβ
//		{
//			Swap(A, ++tail, i);
//		}
//	}
//	Swap(A, tail + 1, right);           // ���ѻ�׼�ŵ�ǰһ��������ĺ�ߣ�ʣ�µ���������Ǵ��ڻ�׼��������
//										// �ò������п��ܰѺ���Ԫ�ص��ȶ��Դ��ң����Կ��������ǲ��ȶ��������㷨
//	return tail + 1;                    // ���ػ�׼������
//}
//
//void QuickSort(int A[], int left, int right)
//{
//	if (left >= right)
//		return;
//	int pivot_index = Partition(A, left, right); // ��׼������
//	QuickSort(A, left, pivot_index - 1);
//	QuickSort(A, pivot_index + 1, right);
//}
//
///*HeapSort*/
//void Heapify(int A[], int i, int size)//��A[i]���½��жѵ���
//{
//	int left_child = 2 * i + 1;	//��������
//	int right_child = 2 * i + 2;	//�Һ�������
//	int max = i;	//ѡ����ǰ�ڵ�������Һ�������֮�����ֵ
//	if (left_child<size&&A[left_child]>A[max])
//	{
//		max = left_child;
//	}
//	if (right_child<size&&A[right_child]>A[max])
//	{
//		max = right_child;
//	}
//	if (max != i)
//	{
//		Swap(A, i, max);	//�ѵ�ǰ�ڵ����������(ֱ��)�ӽڵ���н���
//		Heapify(A, max, size);	//�ݹ���ã������ӵ�ǰ�ڵ����½��жѵ���
//	}
//}
//int BuildHeap(int A[], int n)	//������(O(n))
//{
//	int heap_size = n;
//	for (int i = heap_size / 2 - 1; i >= 0; i--)//��ÿһ����Ҷ�ڵ㿪ʼ���½��жѵ���
//	{
//		Heapify(A, i, heap_size);
//	}
//	return heap_size;
//}
//void HeapSort(int A[], int n)
//{
//	int heap_size = BuildHeap(A, n);	//����һ������
//	while (heap_size > 1)	//��(������)Ԫ�ظ�������1��δ�������
//	{
//		// ���Ѷ�Ԫ����ѵ����һ��Ԫ�ػ��������Ӷ���ȥ�����һ��Ԫ��
//		// �˴������������п��ܰѺ���Ԫ�ص��ȶ��Դ��ң����Զ������ǲ��ȶ��������㷨
//		Swap(A, 0, --heap_size);
//		Heapify(A, 0, heap_size);	// ���µĶѶ�Ԫ�ؿ�ʼ���½��жѵ�����ʱ�临�Ӷ�O(logn)
//	}
//}
//
//int main()
//{
//	cout << "Input your n(20,100,1000,10000)" << endl;
//	int n;
//	cin >> n;
//	srand((unsigned)time(NULL));
//	int* a=new int[n];
//	int* b = new int[n];
//	int* c = new int[n];
//	int* d = new int[n];
//	int* e = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand();
//		cout << a[i] << ' ';
//	}
//	for (int i = 0; i < n; i++)
//	{
//		b[i] = a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		c[i] = a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		d[i] = a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		e[i] = a[i];
//	}
//	int nlength = n;
//	cout << endl;
//	cout << "After sort,the data are:" << endl;
//	InsertionSort(a, nlength);
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	{
//		clock_t start, end;
//		start = clock();
//		InsertionSort(d, nlength);
//		cout << endl;
//		cout << "The time of InsertionSort is:";
//		end = clock();
//		cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
//	}
//	{
//		clock_t start, end;
//		start = clock();
//		ShellSort(b, nlength);
//		cout << "The time of ShellSort is:";
//		end = clock();
//		cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
//	}
//	{
//		clock_t start, end;
//		start = clock();
//		HeapSort(e, nlength);
//		cout << "The time of HeapSort is:";
//		end = clock();
//		cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
//	}
//	{
//		clock_t start, end;
//		start = clock();
//		QuickSort(c, 0, nlength - 1);
//		cout << "The time of QuicklSort is:";
//		end = clock();
//		cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
//	}
//	delete a;
//	delete b;
//	delete c;
//	delete d;
//	delete e;
//
//	system("pause");
//	return 0;
//
//}
//
//
//
