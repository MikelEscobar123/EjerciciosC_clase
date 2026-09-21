/*Este programa, dados dos arrays de 5 números cada uno, crea un tercera que 
contenga los números de ambos, intercalándolos*/

#include<stdio.h>

int main(void){
	int array1[] = {1, 3, 5, 7, 9};
	int array2[] = {2, 4, 6, 8, 10};
	int array3[10];
	int i, j=0;
	
	for(i=0; i < 5; i++){
		array3[i * 2] = array1[i];
		array3[i * 2 + 1] = array2[i];
	}
	for(i=0; i < 10; i++){
		printf(" %d ", array3[i]);
	}
	return 0;
}


