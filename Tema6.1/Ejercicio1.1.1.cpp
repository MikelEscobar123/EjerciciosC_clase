/*Esta función intercambia los valores de dos posiciones en un array*/

#include<stdio.h>
#define TAM 10

void intercambiar(int v[], int pos1, int pos2);

int main(void){
	int v[TAM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	intercambiar(v, 1, 3);
	for(int i = 0; i < TAM; i++){
		printf(" %d", v[i]);
	}
	return 0;
}

void intercambiar(int v[], int pos1, int pos2){
	int temp;
	temp = v[pos1];
	v[pos1] = v[pos2];
	v[pos2] = temp;
}
