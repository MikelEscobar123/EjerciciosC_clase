/*Este programa genera 50 números aleatorios entre 1 y 100 y los guarda en un
array, después busca un número dentro de él e indica en que posición está*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	srand(time(NULL));
	int tamanho, numero, posicion;
	int i;
	int encontrado = 0;
	
	printf("Introduce el tamaño de la lista: ");
	scanf("%d", &tamanho);
	int lista[tamanho];
	
	printf("Introduce el número a buscar en la lista: ");
	scanf("%d", &numero);
	
	for(i=1; i < tamanho; i++){
		lista[i] = rand() % 100 + 1;
	}
	for(i=1; i < tamanho; i++){
		if(lista[i] == numero){
			encontrado = 1;
			posicion = i;
			break;
		}
	}
	for(i=1; i < tamanho; i++){
		printf(" %d ", lista[i]);
	}
	if(encontrado){
		printf("\nEL número %d está en la posición %d.", numero, posicion);
	}else{
		printf("\nEl número %d no se encuentra en la lista.", numero);
	}
	return 0;
}
