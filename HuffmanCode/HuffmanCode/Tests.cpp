#include "Tests.h"
#include <assert.h>
void Tests::testPriorityQueue()
{
	PriorityQueue pq{};
	Node* zero = new Node{ '-', 0 };
	Node* node1 = new Node{ 'a', 1};
	Node* node2 = new Node{ 'b', 2 };
	Node* zr = pq.push(zero, pq.len);
	assert(pq.len == 1);
	Node* a = pq.push(node1, pq.len);
	assert(pq.len == 2);
	Node* b = pq.push(node2, pq.len);
	assert(pq.len == 3);

	Node* elem = pq.pop(1, pq.len);
	assert(pq.len == 2);
	Node* elem2 = pq.top(1);
	assert(pq.len == 2);

}


//void Tests::testBinaryTree()
//{
//	BinaryTree bt{};
//	Iterator it{ bt };
//	assert(bt.root == NULL);
//	bt.rightTree()->letter = 'n';
//	assert(bt.rightTree()->letter == 'n');
//	bt.rightTree()->letter = 'm';
//	assert(bt.leftTree()->letter == 'm');
//	Node* node1 = new Node{ 'a', 1 };
//	bt.initLeaf(node1);
//	Node* node2 = new Node{ 'b', 1 };
//	assert(bt.initLeaf(node1) == node1);
//	assert(bt.initTree(node1, node2) == bt.root);
//}


void Tests::testIterator()
{
	BinaryTree bt{};
	Iterator it{ bt };

	Node* node1 = new Node{ 'a', 1 };
	Node* node2 = new Node{ 'b', 1 };
	Node* node3 = new Node{ 'c', 1 };
	bt.root = node1;
	bt.root->right = node2;
	assert(it.getCurrent() == bt.root);
	it.next(1);
	assert(it.getCurrent() == node2);
	assert(it.isValid() == true);

}