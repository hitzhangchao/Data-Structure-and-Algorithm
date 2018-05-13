/*Shell Sort: 希尔排序*/
#include <iostream>
using namespace std;

int main()
{
	const int asize = 7;
	int a[7] = { 34, 8, 64, 51, 32, 23, 21 };
	int i, j, gap;
	for (gap = asize / 2; gap > 0; gap /= 2)
	{
		for (i = gap; i < asize; i++)
		{
			int tmp = a[i];
			j = i;
			for (; j >= gap&&tmp < a[j - gap]; j -= gap)
			{
				a[j] = a[j - gap];
			}
			a[j] = tmp;
		}
	}

	for (int k = 0; k < asize; k++)
		cout << a[k] << " ";

	system("pause");
	return 0;
}
