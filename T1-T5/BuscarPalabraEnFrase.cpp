/*Este programa recoge una frase y una palabra por pantalla, y busca la palabra
en la frase*/

#include<stdio.h>
#include<string.h>

int main(void){
	char frase[100];
	char palabra[15];
	char palabraAux[15];
	char fraseAux[15];
	int aparecer = 0;
	int i = 0, j = 0;
	
	printf("Introduzca una frase: ");
	gets(frase);
	printf("Introduzca una palabra: ");
	gets(palabra);
	
	for(i = 0; i < 15; i++){
		palabraAux[i] = palabra[i];
	}
	
	while(frase[i] != '\0'){
		fraseAux[i] = frase[i];
		if(frase[i] == ' '){
			for(j=0; j<10; j++){
				fraseAux[j] = '\0';
			}
			fraseAux[i] = frase[i+1];
		}
		if(strcmp(fraseAux, palabraAux) == 0){
			aparecer = 1;
		}
		i++;
	}
	if(aparecer == 1){
		printf("La palabra \"%s\" aparece en la frase \"%s\".", palabra, frase);
	}else{
		printf("La palabra \"%s\" no aparece en la frase \"%s\".", palabra, frase);
	}
	return 0;
}
