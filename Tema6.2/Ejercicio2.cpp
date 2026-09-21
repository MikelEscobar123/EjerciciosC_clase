/*En este programa escribimos una función que recibe la dirección de una estructura de tipo tFecha, y lee por teclado los
datos relativos a la fecha*/

#include<stdio.h>

typedef struct{
	int dia, mes, anyo;
} tFecha;

void leerFecha(tFecha *f);
void escribirFecha(tFecha *f);


int main(void){
	tFecha fecha;
	leerFecha(&fecha);
	escribirFecha(&fecha);
	return 0;
}

void leerFecha(tFecha *f){
	printf("Introduce el día: ");
	scanf("%d", &f->dia);
	printf("\nIntroduce el mes: ");
	scanf("%d", &f->mes);
	printf("\nIntroduce el año: ");
	scanf("%d", &f->anyo);
}

void escribirFecha(tFecha *f){
	printf("Fecha: %d/%d/%d", f->dia, f->mes, f->anyo);
}

