#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
	Queue<int> queue;
	for (int i = 0; i < 6; i++)
	{
		queue.enqueue(i);
	}

	queue.dequeue();
	queue.dequeue();
	int a = queue.frontValue();
	cout << a << endl;

	system("pause");
	return 0;
}
