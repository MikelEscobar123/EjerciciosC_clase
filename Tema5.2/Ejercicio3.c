/*Este programa lee las vocales que tiene una frase y cuenta el número que hay
de cada tipo*/

#include<stdio.h>

int main(void){
	char frase[15];
	int cont = 0;
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	printf("Introduce una frase: ");
	gets(frase);
	
	while(frase[cont] != '\0'){
		if(frase[cont] == 'A' || frase[cont] == 'a'){
			a++;
		}
		if(frase[cont] == 'E' || frase[cont] == 'e'){
			e++;
		}
		if(frase[cont] == 'I' || frase[cont] == 'i'){
			i++;
		}
		if(frase[cont] == 'O' || frase[cont] == 'o'){
			o++;
		}
		if(frase[cont] == 'U' || frase[cont] == 'u'){
			u++;
		}
		cont++;
	}
	printf("La frase \"%s\" tiene: ", frase);
	printf("\nA: %d", a);
	printf("\nE: %d", e);
	printf("\nI: %d", i);
	printf("\nO: %d", o);
	printf("\nU: %d", u);
	return 0;
}
