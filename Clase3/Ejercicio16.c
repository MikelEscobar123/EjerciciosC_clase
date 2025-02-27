/*Este programa convierte millas a km*/

#include <stdio.h>

int main(void){
	float millas, km;
	printf("Introduce la distancia en millas: ");
	scanf("%f",&millas);
	km = millas * 1609;
	printf("%.2f millas son %.2f km",millas, km);
	return 0;
}
