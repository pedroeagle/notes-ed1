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

	nome.at(n); retorna o valor da posição indicada entre parênteses

	nome.begin(); se refere a primeira posição
	nome.begin()+n; se refere a posição n;

	nome.insert(posicao, n); insere o valor n na posição posicao
	nome.erase(n); limpa a posição e relocalização dos outros elementos.

	nome.clear() limpa todas as posições, o vetor fica literalmente vazio diferentemente da inicialização que deixa todas as posições iguais
	a 0.
	nome.empty() retorna 1 caso o vetor esteja vazio
	nome.pop_back() retira o último elemento
	nome1.swap(nome2) coloca os valores presentes em nome1 em nome2 e os presentes em nome2 em nome1 independente do tamanho.

	o operador igual iguala posição a posição de cada vector

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
	cout<<"Veja os inteiros que você digitou após a inserção:"<<endl;
	inteiros1.swap(inteiros2);
	inteiros2 = inteiros1;
	outputVector(inteiros1);
	outputVector(inteiros2);
	inteiros1.clear();
	inteiros2.clear();
	cout<<inteiros1.size()<<endl;
	cout<<inteiros2.size()<<endl;
	inteiros2 == inteiros1?cout<<"iguais"<<endl:cout<<"diferentes"<<endl;
	/*cout<<"Inteiro na posição do meio de cada vector:\n"
	<<"inteiros 1:\n"<<inteiros1.at(inteiros1.size()/2)<<"\n"
	<<"inteiros 2:\n"<<inteiros2.at(inteiros2.size()/2)<<endl;*/
	return 0;
}