/*Este programa imprime por consola un patrón, en este caso una pirámide de
números*/

#include<stdio.h>
#define N 5

int main(void){
	int i, j;
	
	for(i=1; i<N; i++){
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
