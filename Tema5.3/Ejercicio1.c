/*En este programa definimos una estructura que tiene un numerador y un 
denominador, de tipo entero. A continuación declaramos dos variables de tipo
tFracción y: a - Leemos los datos de frac1 de teclado; b - Inicializamos frac2
en el programa*/

#include<stdio.h>

struct tFraccion{
	int numerador;
	int denominador;
};
	
	struct tFraccion frac1;
	struct tFraccion frac2;

int main(void){
	
	printf("Introduce el numerador: ");
	scanf("%d", &frac1.numerador);
	
	frac2.denominador = 6;
	
	printf("%d/%d", frac1.numerador, frac2.denominador);
	return 0;
}
