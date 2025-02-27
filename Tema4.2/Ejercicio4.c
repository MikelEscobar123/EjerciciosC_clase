/*Este programa lee un intervalo por pantalla, validando que el primer 
número es menor o igual que el segundo, cuando esto se cumple, pide un 
número que esté en ese intervalo, y mostrará su cuadrado*/

#include<stdio.h>

int main(void){
	int n1, n2, n3, cuadrado;
	do{
		printf("Introduce dos números n1-n2, donde n1 <= n2\n");
		printf("Introduce n1: ");
		scanf("%d",&n1);
		printf("Introduce n2: ");
		scanf("%d",&n2);			
	}while(n1 > n2);
	if(n1 <= n2){
		do{
			printf("Introduce un número en el intervalo[%d..%d]: ", n1, n2);
			scanf("\n%d",&n3);
		}while(!((n3 >= n1)&&(n3 <= n2)));
		cuadrado = n3*n3;
		printf("El cuadrado de %d es %d", n3, cuadrado);
	}
	return 0;
}
