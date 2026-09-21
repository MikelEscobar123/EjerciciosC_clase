/*Método burbuja*/

#include<stdio.h>

int main(void){
	int numeros[] = {9, 11, 2, 4, 5, 8};
	int temp;
	int i, j;
	int longitud = sizeof(numeros)/sizeof(numeros[0]);
	for(i=0; i < longitud -1; i++){
		for(j=1; j < longitud; j++){
			if(numeros[j] < numeros[j-1]){
			temp = numeros[j];
			numeros[j] = numeros[j-1];
			numeros[j-1] = temp;
			}
		}
	}
	for(i=0;i<longitud; i++){
		printf(" %d ",numeros[i]);
	}
	return 0;
	
}
