/*三数中值为枢纽元素的快排*/
#include <iostream>
#include <vector>
using namespace std;

const int CUT_OFF = 4;

/*子函数：交换两个数的值*/
static void swap(int &x, int &y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

/*子函数：从前中后三个位置比较选枢纽元*/
static int medianThree(vector<int> &v, int left, int right)
{
	int center = (left + right) / 2;

	if (v[left] > v[right]) 
		swap(v[left], v[right]);
	if (v[left] > v[center]) 
		swap(v[left], v[center]);
	if (v[center] > v[right]) 
		swap(v[center], v[right]);
	swap(v[center], v[right - 1]);
	return v[right - 1];      //将枢纽元存在v[right-1]的位置
}

static void quickSortRecursive(vector<int> &v, int left, int right)
{
	if (right - left + 1 >= CUT_OFF) {
		int i, j;
		int pivot = medianThree(v, left, right);

		i = left;
		j = right - 1;
		while (true) {
			while (v[++i] < pivot) {}
			while (v[--j] > pivot) {}
			if (i < j) {
				swap(v[i], v[j]);
			}
			else {
				break;
			}
		}
		swap(v[i], v[right - 1]);
		quickSortRecursive(v, left, i - 1);
		quickSortRecursive(v, i + 1, right);
	}
	else {
		int i, j;
		int tmp;

		for (i = left + 1; i <= right; ++i) {
			tmp = v[i];
			for (j = i; j > left && v[j - 1] > tmp; --j) {
				v[j] = v[j - 1];
			}
			v[j] = tmp;
		}
	}
}

void quickSort(vector<int> &v)
{
	int n = (int)v.size();
	quickSortRecursive(v, 0, n - 1);
}

int main()
{
	vector<int> v;
	int n, i;
	cout << "排序元素个数：";
	while (cin >> n && n > 0) {
		v.resize(n);        //重新指定容器有效的元素个数
		cout << "输入排序数列： ";
		for (i = 0; i < n; ++i) {
			cin >> v[i];
		}
		quickSort(v); 
		cout << "排序后数列： ";
		for (i = 0; i < n; ++i) {
			cout << v[i] << ' ';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
