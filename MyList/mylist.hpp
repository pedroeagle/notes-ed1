#ifndef mylist_hpp
#define mylist_hpp
#include "node.hpp"

class MyList{
public:
	Node *head, *tail;
	int size = 0;
	MyList();
	MyList(int info);
	~MyList();
	bool isEmpty();
	void addToHead(int info);
	void addToTail(int info);
	void killTail();
	void killHead();
	void showAll();
	void insert(int i, int info);
	void remove(int i);
};
#endif