#pragma once
#include <string>
#include "Node.h"
class BinaryTree
{

private:
	
	Node* rootOfTree();

	Node* leftTree();
	Node* rightTree();
	
	Node* initLeaf(Node* node);
	Node* initTree(Node* left, Node* right);
	Node* initLeftSubree(Node* left);
	Node* initRightSubree(Node* right);
public:
	Node* root = NULL;
	BinaryTree() {};
	~BinaryTree() {};
	bool isEmpty();
	int size = 0;
	
	void rootP();
	void rightTreeP();
	void leftTreeP();
	void initLeafP();
	void initTreeP();
	void initLeftSubreeP();
	void initRightSubreeP();
	

};