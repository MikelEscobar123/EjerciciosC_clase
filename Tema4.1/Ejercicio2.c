/*Este programa lee un número real por teclado e indica si es negativo o no*/

#include<stdio.h>

int main(void){
	float numero;
	printf("Introduce un número: ");
	scanf("%f",&numero);
	if(numero>0){
		printf("El número no es negativo");
	}
	else{
		printf("El número es negativo");
	}
	return 0;
}
