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
//	for (int i = 1; i < n; i++)         // 类似抓扑克牌排序
//	{
//		int get = A[i];                 // 右手抓到一张扑克牌
//		int j = i - 1;                  // 拿在左手上的牌总是排序好的
//		while (j >= 0 && A[j] > get)    // 将抓到的牌与手牌从右向左进行比较
//		{
//			A[j + 1] = A[j];            // 如果该手牌比抓到的牌大，就将其右移
//			j--;
//		}
//		A[j + 1] = get; // 直到该手牌比抓到的牌小(或二者相等)，将抓到的牌插入到该手牌右边(相等元素的相对次序未变，所以插入排序是稳定的)
//	}
//}
//
///*ShellSort*/
//void ShellSort(int A[], int n)
//{
//	int h = 0;
//	while (h <= n)                          // 生成初始增量
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
//		h = (h - 1) / 3;                    // 递减增量
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
//int Partition(int A[], int left, int right)  // 划分函数
//{
//	int pivot = A[right];               // 这里每次都选择最后一个元素作为基准
//	int tail = left - 1;                // tail为小于基准的子数组最后一个元素的索引
//	for (int i = left; i < right; i++)  // 遍历基准以外的其他元素
//	{
//		if (A[i] <= pivot)              // 把小于等于基准的元素放到前一个子数组末尾
//		{
//			Swap(A, ++tail, i);
//		}
//	}
//	Swap(A, tail + 1, right);           // 最后把基准放到前一个子数组的后边，剩下的子数组既是大于基准的子数组
//										// 该操作很有可能把后面元素的稳定性打乱，所以快速排序是不稳定的排序算法
//	return tail + 1;                    // 返回基准的索引
//}
//
//void QuickSort(int A[], int left, int right)
//{
//	if (left >= right)
//		return;
//	int pivot_index = Partition(A, left, right); // 基准的索引
//	QuickSort(A, left, pivot_index - 1);
//	QuickSort(A, pivot_index + 1, right);
//}
//
///*HeapSort*/
//void Heapify(int A[], int i, int size)//从A[i]向下进行堆调整
//{
//	int left_child = 2 * i + 1;	//左孩子索引
//	int right_child = 2 * i + 2;	//右孩子索引
//	int max = i;	//选出当前节点和其左右孩子三者之中最大值
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
//		Swap(A, i, max);	//把当前节点和它的最大的(直接)子节点进行交换
//		Heapify(A, max, size);	//递归调用，继续从当前节点向下进行堆调整
//	}
//}
//int BuildHeap(int A[], int n)	//建立堆(O(n))
//{
//	int heap_size = n;
//	for (int i = heap_size / 2 - 1; i >= 0; i--)//从每一个非叶节点开始向下进行堆调整
//	{
//		Heapify(A, i, heap_size);
//	}
//	return heap_size;
//}
//void HeapSort(int A[], int n)
//{
//	int heap_size = BuildHeap(A, n);	//建立一个最大堆
//	while (heap_size > 1)	//堆(无序区)元素个数大于1，未完成排序
//	{
//		// 将堆顶元素与堆的最后一个元素互换，并从堆中去掉最后一个元素
//		// 此处交换操作很有可能把后面元素的稳定性打乱，所以堆排序是不稳定的排序算法
//		Swap(A, 0, --heap_size);
//		Heapify(A, 0, heap_size);	// 从新的堆顶元素开始向下进行堆调整，时间复杂度O(logn)
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
