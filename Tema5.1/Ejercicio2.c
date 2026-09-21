/*Este programa inicializa un array de 20 números y le pide un número al 
usuario y le indica si el número está en el array*/

#include<stdio.h>

int main(void){
	int enteros[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int numero;
	int numeroEsta = 0;
	int i;
	printf("Introduce un número: ");
	scanf("%d",&numero);
	for(i=0; i<20; i++){
		if(numero / enteros[i] == 1){
			printf("El número %d está en el array", numero);
			numeroEsta = 1;
			break;
		}
	}
	if(numeroEsta == 0){
		printf("El número %d no está en el array", numero);
	}
	return 0;
}
