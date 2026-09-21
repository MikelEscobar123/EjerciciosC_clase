/*Este programa lee números por teclado y muestra la suma de estos*/

#include<stdio.h>

int main(void){
	char confirmacion;
	int numero = 0;
	int suma, numero1;
	
	do{
		printf("Introduce un número: ");
		scanf("%d",&numero1);
		printf("¿Desea introducir otro número (s/n)?");
		scanf("\n%c",&confirmacion);
		numero += numero1;
		if(confirmacion == 'n'){
			printf("La suma es %d", numero);	
		}
		
	}while(confirmacion == 's');
	return 0;
}
