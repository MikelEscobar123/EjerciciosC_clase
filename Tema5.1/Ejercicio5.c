/*Este programa pide 10 números por teclado y los guarda en un array, después
busca un número dentro de él e indica las veces que aparece*/

#include<stdio.h>

int main(void){
	int lista[10];
	int numero;
	int numeroBuscar;
	int contadorApariciones;
	int i;
	for(i=0; i< 10; i++){
		printf("Introduce un número: ");
		scanf("%d", &numero);
		lista[i] = numero;	
	}
	printf("Introduce el número a buscar: ");
	scanf("%d",&numeroBuscar);
	for(i=0; i<10; i++){
		if(numeroBuscar / lista[i] == 1){
			contadorApariciones++;
		}
	}
	printf("El número de apariciones de %d es %d", numeroBuscar, contadorApariciones);
	return 0;
}
