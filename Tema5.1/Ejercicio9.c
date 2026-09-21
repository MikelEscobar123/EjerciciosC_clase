/*Este programa intercambia el contenido de dos posiciones de un array
introducidas por teclado*/

#include<stdio.h>

int main(void){
	int lista[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int pos1;
	int pos2;
	int temp;
	printf("Introduce las dos posiciones del 1 al 10(p1-p2): ");
	scanf("%d-%d",&pos1, &pos2);
	
	if(pos1 > 10 || pos1 < 0 || pos2 > 10 || pos2 < 0){
		printf("ERROR");
	}
	
	int i;
	for(i=1;i<10;i++){
		printf(" %d ",lista[i]);
	}
	printf("\n");
	temp = lista[pos1];
	lista[pos1] = lista[pos2];
	lista[pos2] = temp;
	for(i=1;i<10;i++){
		printf(" %d ", lista[i]);
	}
	return 0;
}
