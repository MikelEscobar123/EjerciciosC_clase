/*Esta dunción calcula el factorial de un número*/

#include<stdio.h>

int factorial(int x);

int main(){
	int x = 6;
	factorial(x);
	printf("%d! = %d", x, factorial(x));
	return 0;
}

int factorial(int x){
	int total = 1;
	int i;
	int j = 1;
	for(i = 0; i < x ; i++){
		total *= j * (j + i);
	}
	return total;
}
