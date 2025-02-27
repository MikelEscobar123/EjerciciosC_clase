/*Este programa lee un número por teclado en un intervalo [0..10]. Si se acierta
el número, se muestra el cuadrado de este número*/

#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main(void){
	int numero, random, cuadrado;
	srand(time(NULL));
	random = rand() % 11;
	
	do{
		printf("Introduce un número[0..10]: ");
		scanf("%d",&numero);
	}
	while(numero != random);
	
	if(numero == random){
		cuadrado = random * random;
		printf("El cuadrado de %d es %d", random, cuadrado);
	}
	else{
		printf("Algo salió mal");
	}
	return 0;
}
