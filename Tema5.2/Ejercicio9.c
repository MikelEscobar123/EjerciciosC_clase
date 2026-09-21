/*Este programa obtiene las iniciales del nombre y apellidos introducidos por
teclado*/

#include<stdio.h>

int main(void){
	char iniciales[100];
	printf("Nombre y apellidos: ");
	gets(iniciales);
	
	int i = 0;
	while(iniciales[i] != '\0'){
		if(65 <= iniciales[i] && iniciales[i] <= 90){
			printf("%c", iniciales[i]);
		}
		i++;
	}
	return 0;
}
