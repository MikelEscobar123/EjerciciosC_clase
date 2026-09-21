/*En este programa definimos una función que nos permite calcular el valor aproximado de sen(x) utilizando la serie de Taylor*/

#include<stdio.h>

double senoAprox(double x, int n);
int factorial(int x);
int pot(int x, int y);

int main(void){
	int n;
	double x;
	printf("Introduce el valor de n: ");
	scanf("%d", &n);
	printf("Introduce el valor de x: ");
	scanf("%lf", &x);
	printf("sen(%lf) = %lf", x, senoAprox(x, n));
	return 0;
}

double senoAprox(double x, int n){
	int i;
	double seno;
	for(i=1; i < n; i++){
		seno += x + pot(-1,i) * (pot(x,(2*(i + 1) - 1))/factorial(2*(i + 1) - 1));
	}
	return seno;
}

int factorial(int x){
	int i;
	int total = 1;
	for(i=0; i < x; i++){
		total *= i + 1;
	}
	return total;
}

int pot(int x, int y){
	int i;
	int total = 1;
	for(i=0; i < y; i++){
		total *= x;
	}
	return total;
}
