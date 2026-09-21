/*Este programa pide dos cadenas y verifica si la segunda está contenida en
la primera*/

#include<stdio.h>
#include<string.h>

int main(void){
	char cadena[150];
	char subcadena[150];
	int i = 0, j;
	
	printf("Introduce la cadena: ");
	gets(cadena);
	printf("Introduce la subcadena: ");
	gets(subcadena);
	
	if(strstr(cadena, subcadena) != NULL){
		printf("La subcadena \"%s\" se encuentra en la cadena \"%s\"", subcadena, cadena);
	}else{
		printf("No se encuentra");
	}
}
