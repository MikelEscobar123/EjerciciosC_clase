/*Este programa recibe 3 números por teclado, y muestra por pantalla cuantos
de ellos son positivos*/

#include<stdio.h>

int main(void){
	int positivo, n1;
	int i;
	
	for (i=0; i<10; i++){
		printf("Introduce un número entero: ");
		scanf("%d",&n1);
		
		if(n1 > 0){
			positivo++;
		}
		else{
			positivo = positivo;
		}
		
	}
	printf("Números positivos: %d", positivo);
	return 0;
}
