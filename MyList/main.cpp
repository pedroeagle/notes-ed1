#include <iostream>
#include "mylist.hpp"
using namespace std;
int main(){
	MyList *teste;
	teste = new MyList(5);
	teste->addToTail(10);
	teste->addToTail(80);
	teste->addToHead(150);
	teste->addToTail(0);
	teste->killTail();
	teste->killHead();
	teste->insert(2, 1000);
	teste->remove(2);
	teste->showAll();
	return 0;
}