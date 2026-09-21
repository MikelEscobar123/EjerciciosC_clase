/*En este programa definimos una función llamada ealax, en la que calculamos de forma aproximada e^x*/

#include<stdio.h>

double pot(int x, int y);
double factorial(int x);
double ealax(double x, int n);

int main(void){
	double x;
	int n;
	printf("Introduce la potencia de x que quieres calcular: ");
	scanf("%lf", &x);
	printf("Introduce el número de términos de la fórmula que quieres calcular: ");
	scanf("%d", &n);
	printf("e^%.2lf = %lf", x, ealax(x,n));
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

double factorial(int x){
	int i;
	double total = 1.0;
	for(i=1; i <= x; i++){
		total *= i;
	}
	return total;
}

double ealax(double x, int n){
	int i;
	double ealax = 0.0;
	
	for(i = 0; i < n; i++){
		ealax += (pot(x, i))/(factorial(i));
	}
	return ealax;
}

