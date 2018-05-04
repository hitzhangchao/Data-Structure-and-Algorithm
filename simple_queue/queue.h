/*基于数组的队列实现*/
#ifndef QUEUE_H
#define QUEUE_H
const int SIZE = 10;

template <class T>
class Queue
{
private:
	int front, back, currentSize;
	T theArray[SIZE];
public:
	Queue() : front(0), back(-1), currentSize(0)
	{

	}
	
	/*enqueue入队列*/
	void enqueue(T a)
	{
		++back;
		++currentSize;
		theArray[back] = a;
	}

	/*dequeue出队列*/
	void dequeue()
	{
		front++;
		currentSize--;
	}

	/*读取输出值*/
	T frontValue()
	{
		return theArray[front];
	}
	
};


#endif
