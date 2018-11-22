#ifndef SELFLIST_HPP
#define SELFLIST_HPP
#include "node.hpp"
#include <iostream>
using namespace std;
class SelfList{
public:
	int size = 0;
	Node *head, *tail;
	SelfList();
	SelfList(int info);
	void addToTail(int info);
	void addToHead(int info);
	void killTail();
	void killHead();
	void insert(int i, int info);
	void remove(int i);
	void showAll();
	int toFront(int info);
};
#endif