/*En este programa vamos a definir una función que haga multiplicaciones, mediante sumas sucesivas*/

#include<stdio.h>

int multiplicar(int x, int y);

int main(void){
	int x = 13;
	int y = 4;
	printf("%d x %d = %d", x, y, multiplicar(x,y));
	return 0;
}

int multiplicar(int x, int y){
	int i;
	int total = 0;
	for(i = 0; i < y; i++){
		total += x;
	}
	return total;
}
