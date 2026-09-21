/*Definimos una función para un número n>o entero, pasado como parámetro, escribe por pantalla n, n-1...*/

#include<stdio.h>

//En este caso solo visualiza por pantalla, pero no devuelve nada, así que usamos void
void mostrarSecuenciaDecreciente(int num);


int main(void){
	int num;
	printf("Introduce un número > 0: ");
	scanf("%d", &num);
	mostrarSecuenciaDecreciente(num);
	return 0;
}

//Aquí defino la función
void mostrarSecuenciaDecreciente(int num){
	int i;
	for(i = num; i > 0; i--){
		printf(" %d ", i);
	}
}

