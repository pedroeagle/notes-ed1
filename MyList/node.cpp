#include "node.hpp"
Node::Node(){
	next = 0;
}
Node::Node(int info, Node *next){ //se eu não adicionar um parâmetro para o next ele será por padrão igual a 0	
	this->next = next;
	this->info = info;
}