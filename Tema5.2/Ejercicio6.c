/*Este programa lee una palabra e indica si es un palíndromo(se lee igual de
izquierda a derecha)*/

#include<stdio.h>
#include<string.h>

int main(void){
	char palabra[15];
	int noesPalindromo = 0;
	printf("Introduce una palabra: ");
	gets(palabra);
	int i = 0;
	int j = strlen(palabra);
	while(palabra[i] != '\0'){
		if(palabra[i] == palabra[j]){
			noesPalindromo = 1;
		}
		i++;
		j--;
	}
	if(noesPalindromo == 0){
		printf("La palabra \"%s\" es un palíndromo", palabra);
	}
	else{
		printf("La palabra \"%s\" no es un palíndromo", palabra);
	}
	return 0;
}
