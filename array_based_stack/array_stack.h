#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
const int SIZE = 1024;

template <class T>
class ArrayStack
{
private:
	T buf[SIZE];
	int index;
public:
	ArrayStack() :index(-1){};

	/*压栈*/
	void push(T a)
	{
		buf[++index] = a;
	}

	/*出栈*/
	T pop()
	{
		return buf[index--];
	}

	/*读取栈顶数据*/
	T top()
	{
		return buf[index];
	}

	/*判断栈是否为空*/
	bool isEmpty()
	{
		return (index == -1);
	}
};

#endif
