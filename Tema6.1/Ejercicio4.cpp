/*En este programa definimos una función que lee dos enteros positivos, y visualiza los múltiplos de 5 
comprendidos entre ambos números*/

#include<stdio.h>
#include<stdbool.h>

void visualizarMultiplos5(int n1, int n2);

int main(void){
	int num1, num2, i;
	printf("Introduce el primer número: ");
	scanf("%d", &num1);
	printf("Introduce el segundo número: ");
	scanf("%d", &num2);
	leerPositivo(num1, num2);
	printf("Los múltiplos de 5 comprendidos entre %d y %d son: ", num1, num2);
	visualizarMultiplos5(num1, num2);
	return 0;	
}

void visualizarMultiplos5(int n1, int n2){
	int i;
	for(i = n1; i < n2; i++){
		if(i % 5 == 0){
			printf(" %d ", i);
		}
	}
}

