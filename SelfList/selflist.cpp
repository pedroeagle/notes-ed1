#include "selflist.hpp"
SelfList::SelfList(){
	head = tail = 0;
}
SelfList::SelfList(int info){
	head = new Node(info);
	tail = head;
	size++;
}
void SelfList::addToTail(int info){
	if(!tail){
		tail->info = info;
		tail->next = 0;
		tail->previous = 0;
		head = tail;
	}
	else{
		auto temp = tail;
		tail->next = new Node(info);
		tail->next->previous = tail;
		tail->next->next = 0;
		tail = tail->next;
		tail->next = 0;
	}
	size++;
}
void SelfList::addToHead(int info){
	if(!head){
		head = new Node(info);
		head->next = 0;
		head->previous = 0;
		tail = head;
	}
	else{
		Node *insertion = new Node(info);
		head->previous = insertion;
		insertion->next = head;
		insertion->previous = 0;
		head = insertion;
	}
	size++;
}
void SelfList::killTail(){
	if(tail == 0 || head == 0){
		cout<<"lista vazia. não é possível remover o tail."<<endl;
	}
	else if(tail == head){
		delete tail;
		delete head;
		tail = head = 0;
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
void SelfList::killHead(){
	if(head == 0 || tail == 0){
		cout<<"lista vazia. não é possível remover o head."<<endl;
	}
	else if(tail = head){
		delete tail;
		delete head;
		tail = head = 0;
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
void SelfList::insert(int i, int info){
	if(i == 0){
		addToHead(info);
	}
	else if(i == size){
		addToTail(info);
	}
	else if(i < 0 || i > size){
		cout<<"posição inválida. não foi possível inserir na posição "<<i<<endl;
	}
	else{
		auto temp = head;
		while(i--){
			temp = temp->next;
		}
		Node *insertion = new Node(info);
		temp->previous->next = insertion;
		insertion->previous = temp->previous;
		insertion->next = temp;
		temp->previous = insertion;

		size++;
	}
}
void SelfList::remove(int i){
	if(i == 0){
		killHead();
	}
	else if(i == size-1){
		killTail();
	}
	else if(i < 0 || i > size){
		cout<<"posição inválida. não foi possível remover o elemento na posição "<<i<<endl;
	}
	else if(head == 0){
		cout<<"lista vazia. não foi possível remover o elemento na posição "<<i<<endl;
	}
	else{
		auto temp = head;
		while(i > 0){
			temp = temp->next;
			i--;
		}
		temp->previous->next = temp->next;
		temp->next->previous = temp->previous;
		delete temp;
		size--;
	}
}
void SelfList::showAll(){
	auto temp = head;
	while(temp!=0){
		cout<<temp->info<<endl;
		temp = temp->next;
	}
}

int SelfList::toFront(int info){
	int i = 0;
	auto temp = head;
	while(temp->info != info){
		temp = temp->next;
		if(temp == 0){
			break;
		}
		i++;
	}
	if(temp == 0){
		addToTail(info);
		delete temp;	
		return 1;
	}
	else{
		remove(i);
		addToHead(info);
		delete temp;
		return 2;
	}
}
