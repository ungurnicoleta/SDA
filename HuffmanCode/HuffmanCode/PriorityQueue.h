#pragma once
#include<iostream>
#include "Node.h"
#define inf 99999
using namespace std;

class PriorityQueue
{
public:
	Node* arr[255];
	int len = 0;
	int capacity = 255;
	int compare(Node* a, Node* b);
	Node* push(Node* newElem, int index);
	Node* pop(int index, int len);
	Node* top(int index);
	bool isEmpty();
	bool ifFull();
	PriorityQueue() {};
	~PriorityQueue() {};
};
