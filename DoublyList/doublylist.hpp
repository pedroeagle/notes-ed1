#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H
#include "node.hpp"
class DoublyList{
public:
	int size = 0;
	Node *head, *tail;
	DoublyList();
	DoublyList(int info);
	void addToTail(int info);
	void addToHead(int info);
	void showAll();
	void insert(int i, int info);
	void remove(int i);
	void killTail();
	void killHead();
};
#endif