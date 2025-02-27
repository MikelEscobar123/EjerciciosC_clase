/*Este programa lee el número de mes, y muestra el número de días que tiene*/

#include<stdio.h>

int main(void){
	int mes, numDias;
	
	printf("Introduce un mes[1..12]: ");
	scanf("%d",&mes);
	
	switch(mes){
		case 1: case 3: case 5: case 8: case 10: case 12:
			numDias = 31;
			printf("El número de días es %d", numDias);
		break;
		
		case 2:
			numDias = 28;
			printf("El número de días es %d", numDias);
		break;
		
		case 4: case 6: case 7: case 9: case 11:
			numDias = 30;
			printf("El número de días es %d", numDias);
		break;
	}
	return 0;
}
