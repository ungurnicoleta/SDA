#pragma once
#include <string>
using  namespace std;
class Node 
{
public:
	char letter;
	int freq;
	std::string code = "";
	Node* left = NULL;
	Node* right=NULL;

	Node(char letter, int freq): letter(letter), freq(freq) {};
	~Node() {};
	
	std::string toString(Node* a);
	bool isLeaf(Node* node);
};
