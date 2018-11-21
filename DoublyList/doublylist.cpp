#include "doublylist.hpp"
#include <iostream>
using namespace std;
DoublyList::DoublyList(){
	head = tail = 0;
}
DoublyList::DoublyList(int info){
	addToHead(info);
}
void DoublyList::addToTail(int info){
	Node *newTail = new Node(info);
	if(tail != 0){
		tail->next = newTail;
		newTail->previous = tail;
		tail = newTail;
	}
	else{ //se for nulo minha lista é vazia
		head = newTail;
		tail = newTail;
	}
	size++;
}
void DoublyList::addToHead(int info){
	Node *newHead = new Node(info);
	if(head != 0){
		newHead->next = head;
		head->previous = newHead;
		head = newHead;
	}
	else{
		head = newHead;
		tail = newHead;
	}
	size++;
}
void DoublyList::showAll(){
	auto temp = head;
	while(temp){
		cout<<temp->info<<endl;
		temp = temp->next;
	}
}
void DoublyList::insert(int i, int info){
	if(!i){
		addToHead(info);
	}
	else if(i == size){
		addToTail(info);
	}
	else if(i > size || i < 0){
		cout<<"posição inválida. não foi possível fazer uma inserção  na posição "<<i<<endl;
	}
	else{
		auto temp = head;
		while(i--){
			temp = temp->next; //como a lista duplamente encadeada armazena o previous posso encontrar diretamente meu elemento
		}			
		Node *insertion = new Node(info, temp->previous, temp); //crio um novo nó em que o previous seja o previous do meu antigo nó naquela
																//posição porém meu next deve ser o nó que estava nessa posição
		temp->previous->next = insertion; //o next do meu elemento anterior deve ser meu novo nó
		temp->previous = insertion;	//o anterior do meu antigo nó nessa posição deve ser meu novo nó nessa posição
		size++;
	}
}
void DoublyList::remove(int i){
	if(i == 0){
		killHead();
	}
	else if(i == size){
		killTail();
	}
	else if(i > size || i < 0){
		cout<<"posição inválida. não foi possível fazer a remoção da posição "<<i<<endl;
	}
	else{
		auto temp = head;
		while(i--){
			temp = temp->next;
		}
		temp->previous->next = temp->next;
		temp->next->previous = temp->previous;
		delete temp;
		size--;
	}
}
void DoublyList::killTail(){
	if(tail == 0){
		cout<<"sua lista está vazia, não há tail a ser removido."<<endl;
		return;
	}
	else if(tail == head){
		delete tail;
		delete head;
		size--;
	}
	else{
		auto temp = tail;
		tail = tail->previous;
		tail->next = 0;
		delete temp;
		size--;
	}
}
void DoublyList::killHead(){
	if(head == 0){
		cout<<"sua lista está vazia, não há head a ser removido."<<endl;
		return;
	}
	else if(head == tail){
		delete head;
		delete tail;
		size--;
	}
	else{
		auto temp = head;
		head = head->next;
		head->previous = 0;
		delete temp;
		size--;
	}

}