#ifndef LINKED_STACK
#define LINKED_STACK
template<class T>
class LinkStack
{
private:
	struct Node
	{
		T data;
		Node* next;
	}*head, *p;
public:
	LinkStack()
	{
		head = NULL;
		p = NULL;
	} 

	~LinkStack()
	{
		p = head;
		while (p)
		{
			head = p->next;
			delete p;
			p = head;
		}
	}

	void push(T a)             //压栈
	{
		p = new Node;
		p->data = a;
		p->next = head;
		head = p;
		p = NULL;
	}

	T pop()                   //出栈
	{
		T a = head->data;
		p = head;
		head = head->next;
		delete p;
		p = NULL;
		return a;
	}

	T top()                   //出栈顶元素
	{
		return head->data;
	}

	bool isEmpty(){ return NULL == head; }    //判是否为空
};
#endif
