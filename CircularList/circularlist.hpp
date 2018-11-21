#ifndef CIRCULARLIST_HPP
#define CIRCULARLIST_HPP
#include "node.hpp"
class CircularList: public Node{
public:
	Node *head, *tail;
	int size = 0;
	CircularList();
	CircularList(int info);
	void addToTail(int info);
	void addToHead(int info);
	void showAll();
	void insert(int i, int info);
	void remove(int i);
	void killTail();
	void killHead();
};
#endif