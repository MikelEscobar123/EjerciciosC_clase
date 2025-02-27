/*Este programa nos pide un número por teclado y nos indica si es par*/

#include<stdio.h>

int main(void){
	int numero;
	printf("Introduce un número: ");
	scanf("%d",&numero);
	
	if(numero % 2 == 0){
		printf("El numero es par");
	}
	else{
		printf("El número es impar");
	}
	return 0;
}
