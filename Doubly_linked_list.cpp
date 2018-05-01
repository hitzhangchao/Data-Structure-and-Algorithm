#include <iostream>
using namespace std;

struct  Node
{
	int data;
	Node *pre, *next;
};

int main()
{
	Node *head;
	Node *tail;
	Node *p1, *p2;

	head = new Node;       //建立第一个节点（head）
	head->data = 0;
	head->pre = NULL;
	head->next = NULL;

	p1 = new Node;        //建立第二个节点(p1)
	p1->data = 1;
	head->next = p1;
	p1->next = NULL;
	p1->pre = head;

	p2 = new Node;        //建立第三个节点(p2)
	p2->data = 2;
	p1->next = p2;
	p2->next = NULL;
	p2->pre = p1;

	tail = new Node;        //建立最后一个个节点(tail)
	tail->data = 3;
	tail->next = NULL;
	p2->next = tail;
	tail->pre = p2;

	cout << head->data << " ->";
	cout << head->next->data << " ->";
	cout << head->next->next->data << " ->";
	cout << head->next->next->next->data << endl;    //顺序输出各节点data

	cout << tail->data << "<- ";
	cout << tail->pre->data << "<- ";
	cout << tail->pre->pre->data << "<- ";
	cout << tail->pre->pre->pre->data << endl;    //逆序输出各节点data

	/*双链表插入节点*/
	Node *p = new Node;
	p->data = 10;
	p->next = p1->next;
	p1->next = p;
	p->pre = p1;
	p2->pre = p;

	cout << head->data << " ->";
	cout << head->next->data << " ->";
	cout << head->next->next->data << " ->";
	cout << head->next->next->next->data <<" ->";    //顺序输出各节点data
	cout << head->next->next->next->next->data << endl;    //顺序输出各节点data

	cout << tail->data << "<- ";
	cout << tail->pre->data << "<- ";
	cout << tail->pre->pre->data << "<- ";
	cout << tail->pre->pre->pre->data << "<- ";    //逆序输出各节点data
	cout << tail->pre->pre->pre->pre->data << endl;    //逆序输出各节点data

	/*双链表删除节点*/
	p1->next = p->next;
	p2->pre = p->pre;
	delete p;
	p = NULL;

	cout << head->data << " ->";
	cout << head->next->data << " ->";
	cout << head->next->next->data << " ->";
	cout << head->next->next->next->data << endl;    //顺序输出各节点data

	cout << tail->data << "<- ";
	cout << tail->pre->data << "<- ";
	cout << tail->pre->pre->data << "<- ";
	cout << tail->pre->pre->pre->data << endl;    //逆序输出各节点data

	system("pause");
	return 0;
}
