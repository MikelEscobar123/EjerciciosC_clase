/*Este programa recoge el valor del lado de un cuadrado, y calcula el 
perímetro, área y valor de la diagonal*/

#include<stdio.h>
#include<math.h>

int main(void){
	float lado, perimetro, area, diagonal;
	
	printf("Introduzca el lado del cuadrado(m): ");
	scanf("%f",&lado);
	
	diagonal = sqrt(2*pow(lado,2));
	perimetro = lado * 4;
	area = pow(lado,2);
	
	printf("El perímetro del cuadrado es %.2fm\n",perimetro);
	printf("El área del cuadrado es %.2fm^2\n",area);
	printf("El valor de la diagonal es %.2fm\n", diagonal);
	
	return 0;
	
}
