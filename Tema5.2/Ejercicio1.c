/*Este programa lee tu nombre por teclado y saluda*/

#include<stdio.h>

int main(void){
	char nombre[10];
	printf("Introduce tu nombre: ");
	gets(nombre);
	printf("¡Hola, %s!", nombre);
	return 0;
}
