/*Este programa lee la letra inicial de un punto cardinal y muestra el texto
completo*/

#include <stdio.h>
#include <ctype.h>

int main(void){
	char inicial;
	
	printf("Inroduce la inicial de un punto cardinal: ");
	scanf("\n%c",&inicial);
	inicial = tolower(inicial);
	
	switch(inicial){
		case 'n':
			printf("Norte");
		break;
		
		case 's':
			printf("Sur");
		break;
		
		case 'e':
			printf("Este");
		break;
		
		case 'o':
			printf("Oeste");
		break;
	}
	return 0;
}
