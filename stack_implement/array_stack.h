#ifndef ARRAY_STACK
#define ARRAY_STACK
const int SIZE = 1024;                //设置栈容量为1024
template <class T>
class ArrayStack
{
private:
	T buf[SIZE];
	int index;
public:
	ArrayStack() :index(-1){};        //构造函数
	void push(T a)                    //压栈
	{
		buf[++index] = a;
	};
	T pop()                           //出栈
	{
		return buf[index--];
	};
	T top()                           //返回栈顶元素
	{
		return buf[index];
	};
	bool isEmpty(){ return -1 == index; }         //判断栈是否为空
	bool isFull(){ return (SIZE - 1) == index; }  //判断栈是否为满
};
#endif
