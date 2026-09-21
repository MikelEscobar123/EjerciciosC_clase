/*Este programa permite al usuario cifrar una frase siguiendo el cifrado
César*/

#include<stdio.h>

int main(void){
	int desplazamiento;
	char frase[100], fraseCifrada[100];
	
	printf("Introduce una frase: ");
	gets(frase);
	printf("Introduce el desplazamiento: ");
	scanf("%d", &desplazamiento);
	int i = 0;
	while(frase[i] != '\0'){
		fraseCifrada[i] = frase[i] + desplazamiento;
		i++;
	}
	printf("%s", fraseCifrada);
	return 0;
}
