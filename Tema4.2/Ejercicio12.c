/*Este programa genera un número aleatorio entre el 1 y el 30, y muestra 
todos los número naturales entre el 1 y ese número*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(NULL));
	int numeroAleatorio;
	numeroAleatorio = rand() % 30 + 1;
	int i;
	printf("Número generado: %d\n", numeroAleatorio);
	for (i=1; i < numeroAleatorio + 1; i++){
		printf(" %d ", i);
	}
	return 0;
 }
