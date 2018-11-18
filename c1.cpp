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
	int words = 0;
	while(1){
		prev = aux;
		aux = fgetc(arq);
		if((aux == EOF) || (aux == ' ') && (prev != ' ')){
			words++;
		}
		if(aux == EOF){
			break;
		}
	}
	fclose(arq);
	return words;
}
int main(){
	printf("%d\n", words("texto.txt"));
	return 0;
}