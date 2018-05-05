#include "binary_tree.h"

int main()
{
	cout << "Please input a tree with the preorder,use -1 as NULL:"<<endl;
	BinaryTree *T = creatBinayTree();
	cout << endl;

	cout << "Preorder traversal:" << endl;
	preTraversal(T);
	cout << endl;

	cout << "Inorder traversal:" << endl;
	inorderTraversal(T);
	cout << endl;

	cout << "Postorder traversal:" << endl;
	postTraversal(T);
	cout << endl;

	system("pause");
	return 0;
}
