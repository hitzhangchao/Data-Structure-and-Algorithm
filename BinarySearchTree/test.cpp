// Tree.cpp : Defines the entry point for the console application.
//
#include "binary_search_tree.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Please input a tree with the preorder, use -1 as null" << endl;
	cout << "An Example: 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1" << endl << endl;
	//示例中已经是一个BST了，这里是直接建立了一颗二叉查找树

	BinarySearchTree *root;
	root = CreateBiTree();

	cout << endl << endl << "Preorder Traversal" << endl << endl;
	PreTravel(root);
	cout << endl << endl;


	cout << "Postorder Traversal" << endl << endl;
	PostTravel(root);
	cout << endl << endl;

	cout << "Inorder Traversal" << endl << endl;
	InorderTravel(root);
	cout << endl << endl;

	cout << "Min : " << findMin(root) << endl;

	cout << "Max : " << findMax(root) << endl << endl;

	/*测试移除*/
	cout << "Remove 4" << endl;
	Remove(root, 4);
	cout << "Inorder Traversal" << endl << endl;
	InorderTravel(root);
	cout << endl << endl;

	/*测试插入*/
	cout << "Insert 5" << endl;
	Insert(root, 5);
	cout << "Inorder Traversal" << endl << endl;
	InorderTravel(root);
	cout << endl << endl;


	cout << "Delete Tree" << endl;
	DeleteTree(root);

	system("pause");

	return 0;
}

