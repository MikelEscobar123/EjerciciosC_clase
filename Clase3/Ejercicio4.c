/*Este programa recibe una temperatura en Fahrenheit y devuelve su equivalente
en celsius*/

#include <stdio.h>

int main(void){
	float fh, celsius;
	printf("Introduce la temperatura en grados Fahrenheit: ");
	scanf("%f",&fh);
	celsius = (fh-32)/1.8;
	printf("%.0f grados Fahrenheit son %.2f grados celsius", fh, celsius);
	return 0;
}
