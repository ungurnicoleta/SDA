#include"PriorityQueue.h"

int PriorityQueue::compare(Node* a, Node* b)
{
	if (a == NULL || b == NULL)
		return 0;

	if (a->freq > b->freq)
		return 1;
	else
		return 0;
}


Node* PriorityQueue::pop(int index, int len)
{

	Node* st = arr[index * 2];
	Node* dr = arr[index * 2 + 1];

	Node* aux;
	if (index == 1)
	{
		aux = arr[len];
		arr[len] = arr[1];
		arr[1] = aux;
	}

	if ((compare(arr[index], st) && (index * 2)<len))
	{
		aux = arr[index];
		arr[index] = st;
		arr[2 * index] = aux;
		return pop(index * 2, len);
	}
	if ((compare(arr[index], dr) && (index * 2 + 1) < len))
	{
		aux = arr[index];
		arr[index] = dr;
		arr[2 * index + 1] = aux;
		return pop(index * 2 + 1, len);
	}

	else
	{
		return arr[len];
	}
}

Node* PriorityQueue::top(int index)
{
	return arr[1];

}

bool PriorityQueue::isEmpty()
{
	if (len == 0)
		return true;
	return false;
}

Node* PriorityQueue::push(Node* newElem, int index)
{

	if (index == len)
	{
		arr[++len] = newElem;
		index = len;
	}

	if (index <= 1)
		return newElem;

	if (compare(arr[index / 2], arr[index]) == 1)
	{
		Node* aux = arr[index / 2];
		arr[index / 2] = arr[index];
		arr[index] = aux;
		return push(arr[index / 2], index / 2);
	}
	else
	{
		return newElem;
	}
}

bool PriorityQueue::ifFull()
{
	if (len == 255)
		return true;
	return false;
}