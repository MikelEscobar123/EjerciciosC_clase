/*Este programa lee una frase y cuenta el número de consonantes*/

#include<stdio.h>

int main(void){
	char frase[100];
	int numeroConsonantes = 0;
	int cont = 0;
	printf("Introduce una frase: ");
	gets(frase);
	
	while(frase[cont] != '\0'){
		if(frase[cont] != 'A' && frase[cont] != 'E' && frase[cont] != 'I' ||
		frase[cont] != 'O' && frase[cont] != 'U' && frase[cont] != 'a' ||
		frase[cont] != 'e' && frase[cont] != 'i' && frase[cont] != 'o' ||
		frase[cont] != 'u'){
			numeroConsonantes++;
		}
	cont++;
	}
	printf("Número de consonantes: %d" , numeroConsonantes);
	return 0;
}
