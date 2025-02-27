/*Este programa indica si una letra introducida por teclado es vocal o no*/

#include <stdio.h>
#include <ctype.h>
int main(void){
	char letra;
	
	printf("Introduce una letra: ");
	scanf("%c", &letra);
	
	letra = tolower(letra);
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		printf("Es vocal");
	}
	else{
		printf("No es vocal");
	}
	return 0;
}

