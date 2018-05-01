#ifndef LINKED_STACK_H
#define LINKED_STACK_H
#include <stdio.h>
template<class T>
class LinkedStack
{
private:
	struct Node
	{
		T data;
		Node *next;
	};

	Node *head;
	Node *p;

public:
	LinkedStack()
	{
		head = NULL;
		p = NULL;
	}

	/*压栈*/
	void push(T a)    
	{
		p = new Node;
		p->data = a;
		p->next = head;    //将p插入链表头
		head = p;          //直接将p赋成head
		p = NULL;
	}

	/*出栈*/
	T pop()
	{
		T a = head->data;
		head = head->next;
		return a;
	}

	/*读取栈顶元素*/
	T top()
	{
		return (head->data);
	}

	/*判断栈是否为空*/
	bool isEmpty()
	{
		return(NULL == head);
	}
	
};

#endif
