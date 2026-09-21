/*Este programa recoge una frase por pantalla y le elimina las vocales*/

#include<stdio.h>
int main(void){
	char frase[100];
	int vocales = 0;
	int cont = 0;
	
	printf("Introduzca una frase: ");
	gets(frase);
	
	while(frase[cont] != '\0'){
		if(frase[cont] == 'A' || frase[cont] == 'E' || frase[cont] == 'I' ||
		frase[cont] == 'O' || frase[cont] == 'U' || frase[cont] == 'a' ||
		frase[cont] == 'e' || frase[cont] == 'i' || frase[cont] == 'o' ||
		frase[cont] == 'u'){
			vocales++;
			frase[cont] = ' ';
		}
		cont++;
	}
	printf("Número de vocales eliminadas: %d", vocales);
	printf("\n%s", frase);
	return 0;	
}
