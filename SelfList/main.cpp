#include <iostream>
#include "node.hpp"
#include "selflist.hpp"
int main(){
	SelfList *s = new SelfList();
	s->insert(1, 555);
	s->insert(1, 55);
	s->toFront(20);
	s->toFront(20);
	s->addToTail(123456789);
	s->addToTail(98764321);
	s->showAll();
	return 0;
}