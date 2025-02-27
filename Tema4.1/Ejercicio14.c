/*Este programa lee un carácter por teclado e indica si es una vocal*/

#include<stdio.h>
#include<ctype.h>

int main(void){
	char letra;
	printf("Introduce un carácter: ");
	scanf("%c",&letra);
	letra = tolower(letra);
	switch(letra){
		case 'a':
			printf("Es vocal");
		break;
		
		case 'e':
			printf("Es vocal");
		break;
		
		case 'i':
			printf("Es vocal");
		break;
		
		case 'o':
			printf("Es vocal");
		break;
		
		case 'u':
			printf("Es vocal");
		break;
		
		default:
			printf("No es vocal");
	}
	return 0;
}
