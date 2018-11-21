#include "circularlist.hpp"
#include <iostream>
using namespace std;
int main(){
	CircularList *l = new CircularList(2000);
	l->insert(1, 3000);
	l->addToTail(5000);
	l->insert(2, 4000);
	l->addToHead(1000);
	l->showAll();
	return 0;
}