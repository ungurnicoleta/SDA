#pragma once
#include "BinaryTree.h"
class Iterator 
{

public:
	BinaryTree tree{};
	Node* stack[255];
	int len = 0;
	Node* current;
	Iterator(BinaryTree bt) : tree(bt)
	{
		current= tree.root;
	}
	Node* getCurrent();
	bool isValid();
	void next(int param);
};