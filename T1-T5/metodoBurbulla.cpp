/*Método burbulla*/

#include<stdio.h>

int main(void){
	int numeros[] = {3, 1, 7, 10, 90, 2, 6};
	
	int temp;
	int i, j;
	int elementos = sizeof(numeros) / sizeof(numeros[0]);
	
	for(i = 0; i < elementos -1; i++){
		for(j = 1; j < elementos; j++){
			if(numeros[j] < numeros[j-1]){
				temp = numeros[j];
				numeros[j] = numeros[j-1];
				numeros[j-1] = temp;
			}
		}
	}
	for(i = 0; i < elementos; i++){
		printf(" %d ", numeros[i]);
	}
	return 0;
}
