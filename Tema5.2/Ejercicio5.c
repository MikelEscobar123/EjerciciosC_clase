/*Este programa lee una frase y una letra, y comprueba si dicha letra se 
encuentra en la frase*/

#include<stdio.h>

int main(void){
	char frase[15];
	int cont = 0;
	char letra;
	printf("Introduce una frase: ");
	gets(frase);
	printf("Introduce una letra: ");
	scanf("%c",&letra);
	int seEncuentra = 0;
	
	while(frase[cont] != '\0'){
		if(frase[cont] == letra){
			seEncuentra = 1;
		}
		cont++;
	}
	if(seEncuentra == 1){
		printf("La letra se encuentra en la frase");
	}
	else{
		printf("La letra no se encuentra en la frase");
	}
	return 0;
}
