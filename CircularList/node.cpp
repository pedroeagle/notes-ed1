#include "node.hpp"

Node::Node(){
	next = previous = 0;
}

Node::Node(int info, Node *previous, Node *next){
	this->info = info;
	this->previous = previous;
	this->next = next;
}