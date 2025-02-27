/*Lee tres números enteros por teclado y los muestra en orden descendente*/

#include<stdio.h>

int main(void){
	int n1, n2, n3;
	
	printf("Introduce un número: ");
	scanf("\n%d",&n1);
	printf("Introduce un número: ");
	scanf("\n%d",&n2);
	printf("Introduce un número: ");
	scanf("\n%d",&n3);
	if(n1 >= n2 && n2 >= n3){
		printf("%d %d %d", n1, n2, n3);
	}
	else if(n1 > n3 && n3 > n2){
		printf("%d %d %d", n1, n3, n2);
	}
	else if(n1 < n2 && n1 > n3){
		printf("%d %d %d", n2, n1, n3);
	}
	else if(n1 > n2 && n3 > n1){
		printf("%d %d %d", n3, n1, n2);
	}
	else if(n1 < n2 && n3 > n2){
		printf("%d %d %d", n3, n2, n1);
	}
	else if(n1 < n3 && n2 > n3){
		printf("%d %d %d", n2, n3, n1);
	}
	else{
		printf("Algo salió mal");
	}
	return 0;
}
