#ifndef NODE_HPP
#define NODE_HPP
class Node{
public:
	Node *next;
	int info;
	Node();
	Node(int info, Node *next = 0);	
};
#endif