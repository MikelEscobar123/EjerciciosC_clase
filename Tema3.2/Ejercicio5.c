/*Este programa define el coste de una compra y el dinero que se ha pagado
para devolver los cambios en monedas*/

#include<stdio.h>

int main(void){
	float coste, dineroPagado, devolver, d1, d2, d50c, d20c, d10c, d5c, d1c;
	
	printf("Introduce el coste de la compra: ");
	scanf("\n%f",&coste);
	printf("Introduce el dinero pagado: ");
	scanf("\n%f",&dineroPagado);
	devolver = dineroPagado - coste;
	printf("Devolver: %f", devolver);
	
	d2 = devolver/2;
	d1 = 
}

