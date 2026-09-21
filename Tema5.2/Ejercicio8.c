/*Este programa lee una frase y cuenta el número de letras mayúsculas y 
minúsculas totales que contiene*/

#include<stdio.h>

int main(void){
	char frase[100];
	int mayus = 0;
	int minus = 0;
	
	printf("Introduce un texto: ");
	gets(frase);
	
	int i = 0;
	while(frase[i] != '\0'){
		if(65 <= frase[i] && frase[i] <= 90){
			mayus++;
		}
		else if(97 <= frase[i] && frase[i] <= 122){
			minus++;
		}
		i++;
	}
	printf("Hay %d mayúsculas y %d minúsculas", mayus, minus);
	return 0;
}
