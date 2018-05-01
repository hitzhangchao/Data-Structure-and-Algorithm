#include<iostream>
using namespace std;

struct  Node
{
	int data;
	Node *next;
};

int main()
{
	Node *head;  //链表头
	Node *tail;  //链表尾
	Node *p1, *p2;
	Node *p;
	
	p = new Node;
	p->data = 0;
	p->next = NULL;
	head = p;        //建立第一个节点(head)

	p1 = new Node;
	p1->data = 1;
	p1->next = NULL;
	head->next = p1;  //建立第二个节点(p1)

	p2 = new Node;
	p2->data = 2;
	p2->next = NULL;
	p1->next = p2;  //建立第三个节点(p2)

	tail = new Node;
	tail->data = 3;
	tail ->next = NULL;
	p2->next = tail;  //建立第三个节点(tail)

	cout << head->data << "->";
	cout << head->next->data << "->";
	cout << head->next->next->data << "->";
	cout << head->next->next->next->data <<endl;   //遍历输出各节点data

	/* 现在在p1和p2之间插入一个节点px */
	Node *px;
	px = new Node;
	px->data = 10;
	px->next = p1->next;
	p1->next = px;
	cout << head->data << "->";
	cout << head->next->data << "->";
	cout << head->next->next->data << "->";
	cout << head->next->next->next->data <<"->";   
	cout << head->next->next->next->next->data << endl;  //遍历输出各节点data

	/* 现在将px从链表中删掉: p1->px->p2 */
	p1->next = px->next;
	delete px;
	px = NULL;
	cout << head->data << "->";
	cout << head->next->data << "->";
	cout << head->next->next->data << "->";
	cout << head->next->next->next->data << endl;   //遍历输出各节点data


	system("pause");
	return 0;
}
