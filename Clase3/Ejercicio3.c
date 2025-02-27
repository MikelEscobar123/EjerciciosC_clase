/*Este programa calcula la cantidad de litros de agua que contiene
una piscina*/

#include <stdio.h>

int main(void){
	float ancho, largo, profundidad, cantidad;
	printf("Introduce el ancho(m): ");
	scanf("\n%f",&ancho);
	printf("Introduce el largo(m): ");
	scanf("\n%f",&largo);
	printf("Introduce la profundidad(m): ");
	scanf("\n%f",&profundidad);
	cantidad = ancho * largo * profundidad * 1000;
	printf("Una piscina de %.2f de largo, %.2f de ancho y %.2f de profundidad contiene %.2f litros de agua", ancho, largo, profundidad, cantidad);
	return 0; 
	
}
