/*Insertion Sort: 插入排序*/
#include <iostream>
using namespace std;

int main()
{
	int asize = 6;
	int a[] = { 34, 8, 64, 51, 32, 21 };
	int i = 0,j = 0;
	for (i = 1; i < asize; i++)    //从数组第二个值开始
	{
		int tmp = a[i];
		for (j = i; j > 0 && tmp <= a[j - 1]; j--) //这个判断条件是核心
		{
			a[j] = a[j - 1];
		}
		a[j] = tmp;
	}
	
	for (int k = 0; k < asize; k++)
	{
		cout << a[k] << " ";
	}
	system("pause");
	return 0;
}
