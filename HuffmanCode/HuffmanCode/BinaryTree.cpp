#include "BinaryTree.h"

bool BinaryTree:: isEmpty() {
	if (root->left == NULL && root->right == NULL)
		return true;
	return false;
}

Node* BinaryTree::rootOfTree()
{
	return root;
}

Node* BinaryTree::leftTree() 
{
	return root->left;
}

Node* BinaryTree::rightTree()
{
	return root->right;
}


Node* BinaryTree::initLeaf(Node* node)
{
	return root = node;
}

Node* BinaryTree::initTree(Node* left, Node* right)
{
	root->left = left;
	root->right = right;
	return root;
}

Node* BinaryTree::initLeftSubree(Node* left)
{
	root->left = left;
	return root;
}

Node* BinaryTree::initRightSubree(Node* right)
{
	root->right = right;
	return root;
}

void BinaryTree::rootP() {
	
	Node* node = initLeaf(root);
}

void BinaryTree::rightTreeP(){
	Node* node = rightTree();
}

void BinaryTree::leftTreeP(){ Node* node = leftTree(); }

void BinaryTree::initLeafP() { 
	Node* node1 = initLeaf(root); }

void BinaryTree::initTreeP(){
	Node* left = NULL;
	Node* right = NULL;
	root = initTree(left, right);
}
void BinaryTree::initLeftSubreeP() { 
	Node* left = NULL;
	root = initLeftSubree(left);
}
void BinaryTree::initRightSubreeP(){
	Node* right = NULL;
	root = initRightSubree(right);
}