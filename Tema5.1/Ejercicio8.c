/*Este programa recibe una longitud por teclado y genera una contraseña de 
esa longitud*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(NULL));
	int longitud;
	char letra;
	
	printf("Introduce la longitud de la contraseña: ");
	scanf("%d",&longitud);
	
	char lista[longitud];
	
	int i;
	for(i=0; i<longitud; i++){
		letra = rand() % (122 - 65 + 1) + 65;
		lista[i] = letra;
	}
	printf("Contraseña: ");
	for(i=0; i<longitud; i++){
		printf("%c",lista[i]);
	}
	return 0;
}
