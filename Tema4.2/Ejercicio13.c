/*Este programa genera un número aleatorio entre 1 y 10, y muestra la suma
de todos los número naturales entre 1 y ese número*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(NULL));
	int numeroAleatorio, suma;
	numeroAleatorio = rand() % 30 + 1;
	int i;
	printf("Número generado: %d\n", numeroAleatorio);
	
	for(i=0; i<numeroAleatorio+1; i++){
		suma += i;
	}
	printf("Suma de 1 a %d = %d", numeroAleatorio, suma);
	return 0;
}
