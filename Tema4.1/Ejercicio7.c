/*Este programa muestra un menú con operaciones aritméticas básicas y cuando
se elige una opción, se solicitan los operandos y realiza el cálculo*/

#include<stdio.h>

int main(void){
	float n1, n2, sumar, restar, multiplicar, dividir;
	int opcion;
	printf("Opciones:\n");
	printf("1. Sumar\n");
	printf("2. Restar\n");
	printf("3. Multiplicar\n");
	printf("4. Dividir\n");
	printf("Opción: ");
	scanf("%d",&opcion);
	printf("Primer operando: ");
	scanf("\n%f",&n1);
	printf("Segundo operando: ");
	scanf("\n%f",&n2);
	
	if(opcion == 1){
		sumar = n1 + n2;
		printf("%f + %f = %f", n1, n2, sumar);
	}
	else if(opcion == 2){
		restar = n1 - n2;
		printf("%f - %f = %f", n1, n2, restar);
	}
	else if(opcion == 3){
		multiplicar = n1 * n2;
		printf("%f x %f = %f", n1, n2, multiplicar);
	}
	else if(opcion == 4){
		dividir = n1 / n2;
		printf("%f / %f = %f", n1, n2, dividir);
	}
	else{
		printf("Algo salió mal");
	}
	return 0;
	
}
