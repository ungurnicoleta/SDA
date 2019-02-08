#include "Iterator.h"
Node* Iterator:: getCurrent() {
	return current;
}

void Iterator::next(int param)
{
	if (current->letter != '_')
	{
		current = tree.root;
	}

	if (current->left != NULL && param == 0)
	{
		current = current->left;
		return;
	}

	if (current->right != NULL && param == 1)
	{
		current = current->right;
		return;
	}
	
}

bool Iterator::isValid() {
	if (current == NULL)
		return false;
	return true;
}