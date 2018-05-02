#include "array_stack.h"
#include <iostream>
using namespace std;

int main()
{
	ArrayStack<int> stack;
	for (int i = 0; i < 10; i++)
	{
		stack.push(i);
	}

	cout << "栈顶数据：" << stack.top() << endl;
	cout << "出栈数据：" << stack.pop() << endl;
	cout << "栈顶数据：" << stack.top() << endl;

	system("pause");
	return 0;
}
