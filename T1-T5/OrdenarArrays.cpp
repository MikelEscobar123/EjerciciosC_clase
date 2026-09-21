/*Este programa ordena un array de cadenas alfabéticamente*/

#include<stdio.h>

int main(void){
	int numeroCadenas;
	int i;
	char cadena[100];
	char cadenaAux[100];
	printf("Introduce el número de cadenas que vas a introducir: ");
	scanf("%d", &numeroCadenas);
	
	for(i=0; i < numeroCadenas; i++){
		printf("Introduce una frase: \n");
		gets(cadena);
		cadenaAux[i] = cadena[0];
	}
	int a, b, temp;
	for(a=0; a < numeroCadenas -1; a++){
		for(b=1; b < numeroCadenas; b++){
			if(b < a){
				temp = cadenaAux[a+1];
				cadenaAux[a+1] = cadenaAux[a];
				cadenaAux[a] = temp;
			}
		}
	}
	printf("%s", cadenaAux);
	return 0;
}
