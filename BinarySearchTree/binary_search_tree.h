#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

/*树节点*/
typedef struct BinarySearchTree
{
	int data;
	BinarySearchTree *leftChild;
	BinarySearchTree *rightChild;
};

BinarySearchTree *CreateBiTree();
void DeleteTree(BinarySearchTree* tree);
void PreTravel(BinarySearchTree* tree);
void PostTravel(BinarySearchTree* tree);
void InorderTravel(BinarySearchTree* tree);
void Insert(BinarySearchTree * &tree, int data);
int findMin(BinarySearchTree *tree);
int findMax(BinarySearchTree *tree);
void Remove(BinarySearchTree * &tree, int data);

#endif
