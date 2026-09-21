/*Definimos una función llamada pot que calcula la potencia de un número x elevado a otro y sin utilizar la función pow*/

#include<stdio.h>

int pot(int x, int y);

int main(void){
	int x = 3;
	int y = 4;
	pot(x, y);
	printf("%d^%d = %d", x, y, pot(x,y));
	return 0;
}

int pot(int x, int y){
	int i;
	int total = 1;
	for(i = 0; i < y; i++){
		total *= x;
	}
	return total;
}
