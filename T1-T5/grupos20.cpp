/*Este programa escribe todos los números comprendidos entre 1 y 1000, 
en grupos de 20, solicitando al usuario si quiere seguir visualizando el siguiente
grupo de números*/

#include<stdio.h>

int main(void){
	int numeros;
	int respuesta;
	int a = 0;
	int i;
	int n;
	int final;
	printf("De qué número quieres partir: ");
	scanf("%d", &i);
	printf("Hasta que número quieres ir: ");
	scanf("%d", &final);
	printf("En grupos de cuánto: ");
	scanf("%d", &n);
	do{
		for(i=a; i <= n; i++){
		printf(" %d ", i);
		}
		printf("\nQuiere seguir?(1-Si/2-No): ");
		scanf("%d", &respuesta);
		a = n;
		n += n;
	}while(respuesta != 2 || a != final);
	return 0;
}
