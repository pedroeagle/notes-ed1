#include <stdio.h>
#include <stdlib.h>
int words(const char *in) {

if (in == NULL) {
return -1;
}

FILE *arq = fopen(in, "r");

if (arq == NULL) {
return -2;
}
int palavras = 0;
char aux = ' ', prev;
int i = 0;
while(1){
	prev = aux;
	aux = fgetc(arq);
	if((aux == ' ' || aux == EOF) && prev != ' '){
		palavras++;
	}
	if(aux == EOF){
		break;
	}
}

fclose(arq);

return palavras;
}
int main(){
	printf("%d\n", words("texto.txt"));
	return 0;
}