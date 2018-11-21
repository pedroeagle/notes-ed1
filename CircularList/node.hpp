#ifndef NODE_HPP
#define NODE_HPP
class Node{
public:
	int info;
	Node *next, *previous;
	Node();
	Node(int info, Node *previous = 0, Node *next = 0);
};
#endif