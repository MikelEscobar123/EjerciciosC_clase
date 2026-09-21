/*Este programa cuenta cuantas vocales hay en una cadena*/

#include<stdio.h>

int main(void){
	char frase[100];
	int vocales = 0;
	int i = 0;
	printf("Introduce una frase: ");
	gets(frase);
	
	while(frase[i] != '\0'){
		if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' ||
		frase[i] == 'O' || frase[i] == 'U' || frase[i] == 'a' || 
		frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' ||
		frase[i] == 'u'){
			vocales++;
		}
		i++;
	}
	printf("En la frase \"%s\" hay %d vocales.", frase, vocales);
	return 0;
}
