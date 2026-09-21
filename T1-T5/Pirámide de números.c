/*Este programa imprime por consola un patrón, en este caso una pirámide de
números*/

#include<stdio.h>
#define N 5

int main(void){
	int i = 0, j = 0, k = 1;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(j <= i){
				printf("%d", k);
				k++;
			}
			
		}
	}
	return 0;
}
