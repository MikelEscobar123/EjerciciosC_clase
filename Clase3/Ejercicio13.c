/*Este código pide una cantidad por teclado en euros y muestra su 
valor correspondiente en pesetas*/

#include<stdio.h>

int main(void){
	double euros;
	
	printf("Introduce la cantidad de euros: ");
	scanf("%lf",&euros);
	printf("Corresponde a %.2lf pesetas", euros*166,386);
	return 0;
}
