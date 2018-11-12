#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
long int words(const char *in) {

if (in == NULL) {
return -1;
}

FILE *arq = fopen(in, "r");

if (arq == NULL) {
return -2;
}
long int espacos = 0;
char aux;
while (1){
	aux = fgetc(arq);
	if(aux == ' '){
		espacos++;
	}
	else if(aux == EOF){
		break;
	}
}

fclose(arq);

return espacos;
}