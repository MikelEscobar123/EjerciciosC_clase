/*Este programa lee una cadena, y la muestra al revés*/

#include<stdio.h>

int main(void){
	char palabra[30];
	char reves[30];
	int i = 0, j, n = 0;
	
	printf("Introduce una palabra: ");
	gets(palabra);
	
	while(palabra[i] != '\0'){
		
		if(palabra[i+1] == '\0'){
			
		for(j = i; j>=0; j--){
		reves[j] = palabra[n];
		n++;
		}
		
		}
		i++;
	}
	
	printf("%s\n", palabra);
	printf("%s", reves);

	return 0;
}
