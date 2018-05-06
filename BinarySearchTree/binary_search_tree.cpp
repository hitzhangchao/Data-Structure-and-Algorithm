
#include "binary_search_tree.h"
#include <iostream>
using namespace std;

/*创建一个二叉树*/
BinarySearchTree *CreateBiTree()
{
	int data;
	BinarySearchTree *T;
	cin >> data;
	if (data == -1)
		T = NULL;
	else
	{
		T = new BinarySearchTree;
		T->data = data;
		T->leftChild = CreateBiTree();
		T->rightChild = CreateBiTree();
	}

	return T;
}

/*删除树*/
void DeleteTree(BinarySearchTree* tree)    //用后序遍历的方法删除树
{
	if (tree)
	{
		DeleteTree(tree->leftChild);
		DeleteTree(tree->rightChild);
		cout << "Delete : " << tree->data << endl;

		delete tree;
		tree = NULL;
	}

}

/*前序遍历二叉树*/
void PreTravel(BinarySearchTree* tree)
{
	if (tree)
	{
		cout << tree->data << " ";
		PreTravel(tree->leftChild);
		PreTravel(tree->rightChild);
	}
}

/*后序遍历二叉树*/
void PostTravel(BinarySearchTree* tree)
{
	if (tree)
	{
		PostTravel(tree->leftChild);
		PostTravel(tree->rightChild);
		cout << tree->data << " ";
	}
}

/*中序遍历二叉树*/
void InorderTravel(BinarySearchTree* tree)
{
	if (tree)
	{
		InorderTravel(tree->leftChild);
		cout << tree->data << " ";
		InorderTravel(tree->rightChild);
	}
}

/*插入节点*/
void Insert(BinarySearchTree * &tree, int data)  // *&是指向指针的引用，引用传递才能改变传入变量的值
{
	if (NULL == tree)                     //如果树为空，把插入的节点作为根节点新建出来
	{
		tree = new BinarySearchTree;
		tree->data = data;
		tree->leftChild = NULL;
		tree->rightChild = NULL;
	}
	else if (data < tree->data)        //如果data小于当前节点值，则把插入的节点放到左子树一侧
	{
		Insert(tree->leftChild, data);    //迭代
	}  
	else if (data > tree->data)        //如果data大于当前节点值，则把插入的节点放到右子树一侧
	{
		Insert(tree->rightChild, data);   //迭代
	}

}

/*移除节点*/
void Remove(BinarySearchTree * &tree, int data)  //同样的*&，引用传递的作用
{
	if (tree == NULL)
		return;    //这是种错误的用法，但是没有触犯编译器的底限。一般情况下，返回类型是void的函数使用
	               //return语句是为了引起函数的强制结束，这种return的用法类似于循环结构中的break语句。

	if (data > tree->data)
		Remove(tree->rightChild, data);

	else if (data < tree->data)
		Remove(tree->leftChild, data);    

	else if (tree->leftChild && tree->rightChild)  //判断当前节点是否左右孩子都有。当data = tree->data,即找到时需要移除的点时，执行这句。
	{
		tree->data = findMin(tree->rightChild);    //右子树中找到最小值
		Remove(tree->rightChild, tree->data);
	}

	else        //只有一个孩子的情况
		tree = (tree->leftChild) ? tree->leftChild : tree->rightChild; //判断是否有左孩子，若有则把tree->leftChild赋给tree;
		                                                               //若无，则把tree->leftChild赋给tree
}

/*寻找最小元素*/
int findMin(BinarySearchTree *tree)  //很明显，对于BST，最小元素在左子树最左边
{
	if (tree == NULL)
		return -1;
	else if (tree->leftChild == NULL)
		return tree->data;
	else
		return findMin(tree->leftChild);  //递归
}

/*寻找最大元素*/
int findMax(BinarySearchTree *tree)  //很明显，对于BST，最大元素在右子树最右边
{
	if (tree == NULL)
		return -1;
	else if (tree->rightChild == NULL)
		return tree->data;
	else
		return findMax(tree->rightChild);  //递归
}


