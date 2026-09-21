/*Este programa pide 20 números enteros por teclado y los almacena en un array,
después le pregunta un número al usuario e indica cuántas veces lo ha 
introducido*/

#include<stdio.h>

int main(void){
	int enteros[20];
	int numeroContar, contador = 0;
	int i;
	for(i=0; i<20; i++){
		printf("Introduce un número: ");
		scanf("%d",&enteros[i]);
	}
	printf("Introduce el número que quieres contar: ");
	scanf("%d",&numeroContar);
	for(i=0; i<20; i++){
		if(numeroContar / enteros[i] == 1){
			contador++;
		}
	}
	printf("El número %d aparece %d veces", numeroContar, contador);
	return 0;
}
