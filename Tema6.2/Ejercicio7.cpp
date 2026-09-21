/*En este programa se calcula la suma de los divisores propios de un número*/

#include<stdio.h>

int sumaDivisoresPropios(int num);
void sumaDivisoresPropios2(int num, int *rsdo);

int main(void){
	int x = 12, y = 16,
	rsdo = 0;
	sumaDivisoresPropios2(y, &rsdo);
	printf("Suma de los divisores propios(pasados por valor): %d\n", sumaDivisoresPropios(x));
	printf("Suma de los divisores propios(pasados por referencia): %d", rsdo);
	return 0;
}

//Función que devuelve un resultado pasado por valor
int sumaDivisoresPropios(int num){
	int i, divisores = 0;
	for(i=1; i < num; i++){
		if(num % i == 0){
			divisores += i;
		}
	}
	return divisores;
}

//Función que devuelve un resultado pasado por referencia
void sumaDivisoresPropios2(int num, int *rsdo){
	int i;
	for(i=1; i < num; i++){
		if(num % i == 0){
			*rsdo += i;
		}
	}
}

