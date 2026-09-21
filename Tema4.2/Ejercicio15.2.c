/*Este programa recoge un número introducido por teclado y lo factoriza*/

#include<stdio.h>

int main(void){
	int numero, factor;
	printf("Introduce un número: ");
	scanf("%d",&numero);
	int i;
		for(i=1; i<numero+1; i++){
			if(numero % i == 0){
				numero /= i;
				printf("%d\n", i);
			}
		} 
	return 0;
	
}
