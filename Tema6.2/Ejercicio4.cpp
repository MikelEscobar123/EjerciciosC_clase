/*En este programa vamos a escribir una función que recibe dos números y devuelve el resultado y el resto de dividir a / b, utilizando punteros*/

#include<stdio.h>

void divisionResto(int a, int b, int *division, int *resto);

int main(void){
	int a, b, division, resto;
	printf("Introduce un número: ");
	scanf("%d", &a);
	printf("Introduce otro número: ");
	scanf("%d", &b);
	
	divisionResto(a, b, &division, &resto);
	return 0;
	
}

void divisionResto(int a, int b, int *division, int *resto){
	*division = a / b;
	*resto = a % b;
	printf("División: %d\n", *division);
	printf("Resto: %d", *resto);
}
