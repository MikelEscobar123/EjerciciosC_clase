/*Este programa genera 10 números aleatorios entre 1 y 100, y los guarda en 
un array. Después busca un número dentro de él e indica en que posición está*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void){
	srand(time(NULL));
	int numeroGenerado;
	int tamanoLista;
	printf("Introduce el tamaño de la lista: ");
	scanf("%d",&tamanoLista);
	int numerosAleatorios[tamanoLista];
	int numero;
	int estaEnLaLista = 0;
	int i;
	for(i=0; i<tamanoLista; i++){
		numeroGenerado = rand() % 100 + 1;
		numerosAleatorios[i] = numeroGenerado;
	}
	printf("Introduce un número: ");
	scanf("%d",&numero);
	for(i=0; i<tamanoLista; i++){
		if(numero == numerosAleatorios[i]){
			printf("\nEl número %d está en la lista",numero),
			estaEnLaLista = 1;
			break;
		}
	}
	if(estaEnLaLista == 0){
		printf("El número %d no está en la lista\n", numero);
	}
	for(i=0; i<tamanoLista; i++){
		printf(" %d ",numerosAleatorios[i]);
	}
	return 0;
}

