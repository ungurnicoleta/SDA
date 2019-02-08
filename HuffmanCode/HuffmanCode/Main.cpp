#include <Windows.h>
#include "PriorityQueue.h"
#include "Iterator.h"
#include <iostream>
#include <cstring>
#include <string>
#define inf 99999
using namespace std;

int frequencies[255];
char text[1000];
string text1;
int len = 6;
int k = 0;
PriorityQueue pq{};
BinaryTree bt{};

Node* nodes[255];

void citeste()
{
	cout << "Introduceti textul: ";
	
	
	cin.get(text, 1000); 
	cin.get();
	int textLen = strlen(text);
	cout << "Sirul citit are" << " " << strlen(text) << " " << "caractere"<< endl;
	for (int i = 0; i < textLen; i++)
	{
		frequencies[int(text[i])]++;
	}

	for (int i = 0; i < 255; i++)
	{
		if (frequencies[i] != 0)
		{
			Node* newNode = new Node{ (char)(i), frequencies[i] };
			pq.push(newNode, pq.len);
		}
	}
}

void HuffmanTree()
{
	while (pq.len > 1)
	{
		Node* elem;
		Node* elem2;
		elem = pq.pop(1, pq.len);
		pq.len--;
		elem2 = pq.pop(1, pq.len);
		pq.len--;
		int sumFreq = elem->freq + elem2->freq;
		Node* elem3 = new Node{ (char)('_'), sumFreq };
		elem3->left = elem;
		elem3->right = elem2;
		pq.push(elem3, pq.len);
	}
}

void preorder_recursive(Node* node)
{
	if (node->isLeaf(node) == false)
	{
		if (node->left != NULL)
		{
			node->left->code += node->code;
			node->left->code += "0";
			preorder_recursive(node->left);
		}

		if (node->right != NULL)
		{
			node->right->code += node->code;
			node->right->code += "1";
			preorder_recursive(node->right);
		}

	}
	else
	{
		cout << node->toString(node) << " " << " Code: " << node->code << endl;
		nodes[k] = node;
		k++;
	}
}

void preorderRec(BinaryTree tree)
{
	preorder_recursive(tree.root);
}

string encoding()
{
	string str = "";
	for (int i = 0; i < strlen(text); i++)
		for (int j = 0; j < k; j++)
		{
			if (text[i] == (char)(nodes[j]->letter))
			{
				str += nodes[j]->code;
			}
		}
	return str;
}

string decoding(string code)
{
	string decode = "";
	Iterator it{ bt };
	Node* node = it.getCurrent();
	for (int i = 0; i < code.length(); i++)
	{
		if (code[i] == '0')
		{
			it.next(0);
			node = it.getCurrent();
		}

		if (code[i] == '1')
		{
			it.next(1);
			node = it.getCurrent();
		}

		if (node->isLeaf(node))
		{
			decode += (char)(node->letter);
		}
	}
	return decode;
}

int main()
{
	citeste();
	for(int i=1;i<=pq.len;i++)
		cout << pq.arr[i]->toString(pq.arr[i]) << endl;
	
	HuffmanTree();

	bt.root = pq.top(1);
	cout << "Root: ";
	cout << bt.root->toString(bt.root)<< endl;
	preorderRec(bt);
	string encode = encoding();
	cout << encode << endl;
	cout << "Introduceti textul: ";
	std::cin >> text1;
	int textLen = text1.size();
	string decode = decoding(text1);
	
	cout << decode << endl;
	cout << endl;
	system("pause");
	return 0;
}
 