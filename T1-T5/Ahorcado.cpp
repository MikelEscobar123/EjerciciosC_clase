/*Este programa trata sobre el juego del ahorcado*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main(void){
	char palabra[] = "portatil";
	char letraIntroducida;
	int longitudPalabra = strlen(palabra);
	char copiaPalabra[longitudPalabra];
	int i;
	strcpy(copiaPalabra, palabra);
	
	for(i=0; i<longitudPalabra; i++){
			copiaPalabra[i] = '-';
		}
	
	while(true){
		printf("\nIntroduce una letra: ");
		scanf("\n%c", &letraIntroducida);
		
			while(1){
			if(letraIntroducida == palabra[i]){
				copiaPalabra[i] = letraIntroducida;
				printf("%s", copiaPalabra); 
			}
			for(i=0; i<longitudPalabra; i++){
			if(palabra[i] == copiaPalabra[i]){
				printf("\nEnhorabuena, has acertado.");
				exit(-1);
			}
		}
		}
		for(i=0; i<longitudPalabra; i++){
			if(palabra[i] == copiaPalabra[i]){
				printf("\nEnhorabuena, has acertado.");
				exit(-1);
			}
		}	
	}
	return 0;
}
