/*Este programa calcula el precio a pagar después de aplicar el descuento*/

#include<stdio.h>

int main(void){
	float precioDescuento, precio;
	
	printf("Introduzca el importe de la compra: ");
	scanf("\n%f", &precio);
	precioDescuento = 0.8 * precio;
	
	if(precio > 1000.0){
		printf("IMPORTE TOTAL: %.2f", precioDescuento);
	}
	else{
		printf("IMPORTE TOTAL: %.2f", precio);
	} 
	return 0;
}
