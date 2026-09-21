/*Este programa inicializa a 0 un array de 10 posiciones*/

#include<stdio.h>

void inicializarArray(int v[]);

int main(void){
	int i;
	int array[10];
	inicializarArray(array);
	for(i=0; i < 10; i++){
		printf(" %d ", array[i]);
	}
	return 0;
}

void inicializarArray(int *v){
	int i;
	for(i=0; i < 10; i++){
		*(v + i) = 0;
	}
}
