/*Este programa determina si una palabra es un palíndromo*/

#include<stdio.h>
#include<string.h>

int main(void){
	char palabra[15];
	
	printf("Introduce una palabra: ");
	gets(palabra);
	
	int esPalindromo = 0;
	int i = 0, j = strlen(palabra)-1;
	
	while(palabra[i] != '\0'){
		if(palabra[i] == palabra[j]){
			esPalindromo = 1;
		}else{
			esPalindromo = 0;
		}
		i++;
		j--;
	}
	
	if(esPalindromo == 1){
		printf("La palabra %s es un palíndromo", palabra);
	}else{
		printf("La palabra %s no es un palíndromo", palabra);
	}
	return 0;
}
