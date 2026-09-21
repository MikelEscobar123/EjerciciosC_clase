/*Este programa lee 5 notas por teclado y muestra la media de esas notas*/

#include<stdio.h>

int main(void){
	float notas, sumaNotas, media;
	int numeroDeNotas;
	int i;
	
	printf("¿Cuántas notas vas a introducir?: ");
	scanf("%d",&numeroDeNotas);
	
	for (i=0; i<numeroDeNotas; i++){
		printf("Introduce una nota: ");
		scanf("%f",&notas);
		sumaNotas += notas;
	}
	
	media = sumaNotas / numeroDeNotas;
	printf("La nota media es %.2f", media);
	return 0;
}
