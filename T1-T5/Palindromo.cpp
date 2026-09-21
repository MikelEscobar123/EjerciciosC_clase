/*Este programa detecta si una palabra es un palíndromo*/

#include<stdio.h>
#include<string.h>

int main(void){
	char palabra[30];
	int longitud;
	int esPalindromo = 1;
	
	printf("Introduce una palabra: ");
	gets(palabra);
	
	longitud = strlen(palabra);
	int i = 0;
	int j = longitud;
	
	for(i = 0; i < longitud; i++){
		if(palabra[i] != palabra[j-1]){
			esPalindromo = 0;
			break;
		}
		j--;
	}
	if(esPalindromo == 1){
		printf("La palabra \"%s\" es un palíndromo.", palabra);
	}else{
		printf("La palabra \"%s\" no es un palíndromo.", palabra);
	}
	return 0;
}
