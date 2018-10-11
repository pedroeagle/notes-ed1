/* 	página 288 - Deitel
	sintaxe de vector para c++
	vector é uma classe.
	quando se cria um variável do tipo vector na verdade está criando um objeto da classe vector
	deve ser incluída a biblioteca <vector>
	o uso é semelhante a arrays porém mais elaborado e trabalha com ponteiros a variáveis estáticas
	menos propício a erros
	possui funções e métodos adicionais bastante úteis
	DECLARAÇÃO:	
	vector <tipo> nome(quantidade);
	EX:
	vector <int> inteiros1(10);
	não é obrigatório determinar a quantidade de elementos na inicialização
	nesse exemplo foi criado um vector com 11 inteiros1
	o número entre parênteses determina a posição do último elemento
	importante ressaltar que todas as posições são iniciadas com 0
	
	nome.size(); 
	retorna a quantidade de elementos
	para acessar uma única posição do vector é utilizado [pos] assim como com arrays

	nome.push_back(valor);
	coloca 'valor' na última posição do vector nome
	caso o tamanho (size) seja 1 armazena na primeira posição
	caso a posição não exista ele cria uma posição

	nome1.swap(nome2);
	faz a troca de todos os elementos que estão em nome1 com os elementos presentes em num2

	nome.front();
	retorna o primeiro elemento

	nome.back();
	retorna o último elemento



*/
#include <vector>
#include <iostream>
using namespace std;
void outputVector(const vector<int> &vetor){
	for(int i = 0; i < vetor.size(); i++){
		cout<<vetor[i]<<" ";	
	}
	cout<<endl;
}
void inputVector(vector<int> &vetor){
	for(int i = 0; i < vetor.size(); i++){
		cin>>vetor[i];
	}
}
int main(){
	vector< int > inteiros1(7);
	vector< int > inteiros2(10);
	cout<<"Veja os vetores na hora da inicialização:"<<endl;
	outputVector(inteiros1);
	outputVector(inteiros2);
	cout<<"Digite 17 inteiros"<<endl;
	inputVector(inteiros1);
	inputVector(inteiros2);
	cout<<"Veja os inteiros que você digitou:"<<endl;
	outputVector(inteiros1);
	outputVector(inteiros2);

	inteiros2 == inteiros1?cout<<"iguais"<<endl:cout<<"diferentes"<<endl;
	return 0;
}