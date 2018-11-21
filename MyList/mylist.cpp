#include "mylist.hpp"
#include <iostream>
using namespace std;
bool MyList::isEmpty(){
	return size == 0;
}
MyList::MyList(){
	head = tail = 0;
}
MyList::~MyList(){
	while(size){
		killHead();
	}
}
MyList::MyList(int info){
	head = new Node(info);
	tail = head;
}
void MyList::addToHead(int info){
	head = new Node(info, head);		//coloco o antigo head como next do novo head
	tail = tail? tail:head;
	size++;
}
void MyList::addToTail(int info){
	if(tail!=0){
		tail->next = new Node(info);	//crio um next para o atual tail
		tail = tail->next;				//troco o tail para o next do antigo
	}
	else{
		tail = new Node(info);			//se o tail for nulo quer dizer que minha lista está vazia
		head = tail;					//como a lista estava vazia tenho que criar um head igual ao tail (lista de 1 elemento)
	}
	size++;
}
void MyList::killHead(){
	if(!head){							//se o head é nulo a lista está vazia
		cout<<"lista vazia. não foi possível apagar o head."<<endl;
	}
	else if(head == tail){
		head = tail = 0;
		size--;
	}
	else{
		auto *temp = head->next;		//guardo o meu novo head para que eu possa apagar o antigo sem perder o novo
		tail = (head->next)? tail:head; //se o novo head for nulo quer dizer que minha lista está vazia então meu tail deve ser igual ao head
		delete head;
		head = temp;
		size--;
	}
}
void MyList::killTail(){
	if(!tail){
		cout<<"lista vazia. não foi possível apagar o tail."<<endl;
	}
	else if(tail == head){
		delete head;
		tail = head = 0;
		size--;
	}
	else{
		auto *temp = head;
		while(temp->next != tail){
			temp = temp->next;
		}
		delete tail;
		tail = temp;
		tail->next = 0;
		size--;
	}
}
void MyList::showAll(){
	auto temp = head;
	while(temp){
		cout<<temp->info<<endl;
		temp = temp->next;
	}
}
void MyList::insert(int i, int info){
	if(i == 0){
		addToHead(info);
		return;
	}
	else if(i == size){
		addToTail(info);
		return;
	}
	else if(i > size || i < 0){
		cout<<"posição inválida. não é possível fazer inserção na posição "<<i<<endl;
	}
	else{
		auto temp = head;
		while((i--)-1){
			temp = temp->next;
		}
		Node *insertion = new Node(info);
		insertion->next = temp->next;
		temp->next = insertion;
		size++;
	}
}
void MyList::remove(int i){
	if(head == 0){
		cout<<"lista vazia. não é possível remover o elemento "<<i<<endl;
		return;
	}
	else if(i == 0){
		killHead();
		return;
	}
	else if(i == size){
		killTail();
		return;
	}
	else if(i > size || i < 0){
		cout<<"posição inválida. não foi possível remover o elemento "<<i<<endl;
		return;
	}
	else{
		auto temp = head;
		while((i--)-1){
			temp = temp->next;
		}
		temp->next = temp->next->next;
		temp = temp->next;
		size--;
	}
}