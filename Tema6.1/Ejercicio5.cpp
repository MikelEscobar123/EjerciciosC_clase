/*En este programa definimos una función que toma un parámetro de tipo entero, y devuelve P si es positivo,
o N si es 0 o negativo*/
//Mikel Escobar Díaz

#include<stdio.h>

char positivoNegativo(int num);

int main(void){
	int numero;
	printf("Introduce un número: ");
	scanf("%d", &numero);
	positivoNegativo(numero);
	if(positivoNegativo(numero) == 'P'){
		printf("Es positivo");
	}else if(positivoNegativo(numero) == 'N'){
		printf("Es 0 o negativo");
	}
	return 0;	
}

char positivoNegativo(int num){
	if(num > 0){
		return 'P';
	}else{
		return 'N';
	}
}

