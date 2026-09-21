/*Este programa lee una palabra por teclado e indica si corresponde a un
número o no*/

#include<stdio.h>

int main(void){
	char palabra[15];
	int cont = 0;
	int esNumero = 1;
	printf("Escribe una palabra: ");
	gets(palabra);
	while(palabra[cont] != '\0'){
		if('0' > palabra[cont] || '9' < palabra[cont]){
			esNumero = 0;
			break;
		}
		cont++;
	}
	if(esNumero == 1){
		printf("La palabra %s sí es un número", palabra);
	}
	else{
		printf("La palabra %s no es un número", palabra);
	}
	return 0;
}
