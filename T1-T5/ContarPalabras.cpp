/*Este programa cuenta el número de palabras en una frase*/

#include<stdio.h>

int main(void){
	char frase[150];
	int palabras = 0;
	int espacios = 0;
	int i = 0;
	
	printf("Introduce una frase: ");
	gets(frase);
	
	while(frase[i] != '\0'){
		if(frase[i] == ' '){
			espacios++;
		}
		i++;
	}
	palabras = espacios + 1;
	printf("En la frase \"%s\" hay %d palabras.", frase, palabras);
	return 0;
}
