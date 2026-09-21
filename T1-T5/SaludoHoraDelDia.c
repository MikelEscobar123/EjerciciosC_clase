/*Este programa en función de la hora del día introducida te dirá buenos días, 
tardes o noches*/

#include<stdio.h>

int main(void){
	char nombre[15];
	float hora;
	printf("Introduce tu nombre: ");
	gets(nombre);
	
	printf("Introduce la hora actual(hh.mm): ");
	scanf("%f", &hora);
	
	if(hora >= 6.00 && 12.00 >= hora){
		printf("Buenos días, %s", nombre);
	}
	else if(12.00 < hora && 21.00 >= hora ){
		printf("Buenas tardes, %s", nombre);
	}
	else if(21.00 < hora && hora < 6.00){
		printf("Buenas noches, %s", nombre);
	}
	return 0;
}
