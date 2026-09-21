/*En este programa definimos una función llamada pot que calcula la potencia de un número elevado a otro, sin utilizar la función pow*/

#include<stdio.h>

double pot(int x, int y);

int main(void){
	int x = 2;
	int y = 6;
	printf("%d^%d = %.2lf", x, y, pot(x,y));
	return 0;
}

double pot(int x, int y){
	int i;
	double total = 1.0;
	for(i=0; i < y; i++){
		total *= x;
	}
	return total;
}
