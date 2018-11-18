#include <stdio.h>
#include <stdlib.h>
int words(const char *in){
	if(in == NULL){
		return -1;
	}

	FILE *arq = fopen(in, "r");

	if(arq == NULL){
		return -2;
	}

	char aux = ' ', prev;
	int qtd = 0;
	while(1){
		prev = aux;
		aux = fgetc(arq);
		if((aux == ' ' || aux == EOF) && (prev != ' ')){
			qtd++;
		}
		if(aux == EOF){
			break;
		}
	}
	fclose(arq);
	return qtd;
}