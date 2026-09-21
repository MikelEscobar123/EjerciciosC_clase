/*Este programa invierte una frase recogida por teclado*/

#include<stdio.h>
#include<string.h>

int main(void){
	char frase[100];
	char fraseInversa[100];
	int longitud;
	
	printf("Introduzca una frase: ");
	gets(frase);
	longitud = strlen(frase);
	
	int i = 0, j = 0;
	for(j = longitud; j > 0; j--){
		fraseInversa[j] = frase[i];
		i++;
	}
	
	printf("%s", fraseInversa);
	return 0;
}
