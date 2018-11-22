#include <iostream>
#include "node.hpp"
#include "doublylist.hpp"
using namespace std;
int main(){
	DoublyList *l = new DoublyList(2000);
	l->insert(1, 3000);
	l->addToTail(5000);
	l->insert(2, 4000);
	l->addToHead(1000);
	l->~DoublyList();
	l->showAll();
	return 0;
}