/*Este programa define una variable entera para indicar tu edad, y calcula
el número de minutos que has vivido*/

#include <stdio.h>

int main(void){
	int edad, minutos;
	printf("Introduce tu edad: ");
	scanf("%d",&edad);
	minutos= edad * 365 * 24 * 60;
	printf("Has vivido por lo menos %d minutos", minutos);
	return 0;
}
