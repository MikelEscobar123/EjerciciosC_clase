/*En este programa definimos una función que comprueba si un número es divisible por otro, y devuelve true
si son divisibles, si no, devuelve false.*/

#include<stdio.h>
#include<stdbool.h>

bool divisible(int n1, int n2);

int main(void){
	int n1, n2;
	printf("Introduce n1: ");
	scanf("%d", &n1);
	printf("Introduce n2: ");
	scanf("%d", &n2);
	if(divisible(n1,n2) == true){
		printf("Son divisibles");
	}else{
		printf("No son divisibles");
	}
	return 0;
}

bool divisible(int n1, int n2){
	if(n1 % n2 == 0){
		return true;
	}else{
		return false;
	}
}
