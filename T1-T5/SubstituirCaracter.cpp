/*Este programa substituye un carácter por otro en una cadena*/

#include<stdio.h>

int main(void){
	char frase[150];
	char caracter;
	char caracterSubs;
	int i = 0;
	
	printf("Introduce una frase: ");
	gets(frase);
	printf("Introduce un carácter perteneciente a la frase: ");
	scanf("%c", &caracter);
	printf("Introduce el carácter para substituir: ");
	scanf(" %c", &caracterSubs);
	
	while(frase[i] != '\0'){
		if(frase[i] == caracter){
			frase[i] = caracterSubs;
		}
		i++;
	}
	printf("%s", frase);
	return 0;
}
