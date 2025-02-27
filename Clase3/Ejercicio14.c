/*Este programa lee el radio de un círculo, y muestra su área y perímetro*/

#include<stdio.h>

#define PI 3.1415

int main(void){
	double radio;
	double area;
	double perimetro;
	
	//Se introduce el dato del radio y se recoge
	printf("Introduce el radio del círculo (cm): ");
	scanf("%lf",&radio);
	//Se calcula el area y perimetro
	area = PI * radio * radio;
	perimetro = 2 * PI * radio;
	//Se muestra el area y perimetro por pantalla
	printf("El área es %.2lf cm2\n",area);
	printf("El perímetro es %.2lfcm\n",perimetro);
	return 0;
}
