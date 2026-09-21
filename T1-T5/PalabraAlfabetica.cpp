/*Este programa comprueba si una palabra es alfabética(contiene solo letras)*/

#include<stdio.h>

int main(void){
	char palabra[15];
	int esAlfabetica = 1;
	int i = 0;
	printf("Introduzca una palabra: ");
	gets(palabra);
	
	while(palabra[i] != '\0'){
		if(palabra[i] < 65 || palabra[i] > 122){
			esAlfabetica = 0;
		}
		i++;
	}
	if(esAlfabetica == 1){
		printf("La palabra \"%s\" es alfabética.", palabra);
	}
	else{
		printf("La palabra \"%s\" no es alfabética.", palabra);
	}
	return 0;
}
