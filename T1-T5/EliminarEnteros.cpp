/*Este programa lee 10 números enteros en un array y luego pide un número por
pantalla. El programa debe eliminar todas las apariciones de dicho número*/

#include<stdio.h>

int main(void){
	int numeros[10];
	int eliminar;
	int numerosEliminados = 0;
	int i;
	for(i=0; i < 10; i++){
		printf("Introduce un número: ");
		scanf("%d", &numeros[i]);
	}
	printf("Introduce el número que quieres eliminar: ");
	scanf("%d", &eliminar);
	
	for(i=0; i < 10; i++){
		if(numeros[i] == eliminar){
			numeros[i] = 0;
			numerosEliminados++;
		}
	}
	for(i=0; i< 10; i++){
		printf(" %d ", numeros[i]);
	}
	if(numerosEliminados >= 1){
		printf("El número %d ha sido eliminado %d veces.", eliminar, numerosEliminados);
	}else{
		printf("El número %d no aparece en el array.", eliminar);
	}
	return 0;
}
