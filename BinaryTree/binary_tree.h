#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <stdio.h>
#include <iostream>
using namespace std;

/*树节点的结构*/
struct  BinaryTree
{
	int data;
	BinaryTree *leftChild;
	BinaryTree *rightChild;
};

/*前序遍历的方法生成一棵二叉树*/
BinaryTree *creatBinayTree()
{
	int data;
	BinaryTree *T;
	cin >> data;
	if (-1 == data)
	{
		T = NULL;
	}
	else
	{
		T = new BinaryTree;
		T->data = data;
		T->leftChild = creatBinayTree();
		T->rightChild = creatBinayTree();
	}
	return T;
}

/*前序遍历*/
void preTraversal(BinaryTree *tree)
{
	if (tree)
	{
		cout << tree->data << " " ;
		preTraversal(tree->leftChild);
		preTraversal(tree->rightChild);
	}
}

/*中序遍历*/
void inorderTraversal(BinaryTree *tree)
{
	if (tree)
	{
		inorderTraversal(tree->leftChild);
		cout << tree->data << " ";
		inorderTraversal(tree->rightChild);
	}
}

/*后序遍历*/
void postTraversal(BinaryTree *tree)
{
	if (tree)
	{
		postTraversal(tree->leftChild);
		postTraversal(tree->rightChild);
		cout << tree->data << " ";
	}
}

#endif
