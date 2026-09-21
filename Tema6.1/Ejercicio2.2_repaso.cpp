/*En este ejercicio definimos una función llamada factorial, que dado un número x calcula su factorial*/

#include<stdio.h>

double factorial(int x);

int main(void){
	int x = 4;
	printf("%d! = %.2lf", x, factorial(x));
	return 0;
}

double factorial(int x){
	int i;
	double total = 1.0;
	for(i=1; i <= x; i++){
		total *= i;
	}
	return total;
}
