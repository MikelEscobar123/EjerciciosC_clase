/*Este programa lee una frase y cuenta el número de vocales que tiene*/

#include<stdio.h>
#define TAM 10

int main(void){
	char frase[TAM];
	int cont = 0;
	int vocales = 0;
	printf("Introduce una frase: ");
	gets(frase);
	while(frase[cont] != '\0'){
		if(frase[cont] == 'A' || frase[cont] == 'a' || frase[cont] == 'E' || frase[cont] == 'e' ||
		frase[cont] == 'I' || frase[cont] == 'i' || frase[cont] == 'O' || frase[cont] == 'o' ||
		frase[cont] == 'U' || frase[cont] == 'u'){
			vocales++;
		}
		cont++;
	}
	printf("El numero de vocales que tiene la cadena es: %d vocales", vocales);
	return 0;
}
