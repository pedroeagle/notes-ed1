#include <iostream>
#include "mylist.hpp"
using namespace std;
int main(){
	MyList *teste;
	teste = new MyList();
	teste->addToTail(10);
	teste->addToTail(80);
	teste->addToHead(150);
	teste->addToTail(0);
	teste->killTail();
	teste->killHead();
	teste->insert(1, 1000);
	teste->insert(3, 123456789);
	teste->showAll();
	return 0;
}