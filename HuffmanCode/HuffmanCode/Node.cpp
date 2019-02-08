#include "Node.h"

std::string Node::toString(Node* a)
{
	string str = "";
	str += (char)(a->letter);
	str += " ";
	str += to_string(a->freq);
	return str;
}

bool Node::isLeaf(Node* node)
{
	if (node->left == NULL && node->right == NULL)
		return true;
	return false;
}