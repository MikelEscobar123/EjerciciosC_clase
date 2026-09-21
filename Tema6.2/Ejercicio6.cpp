/*Escribimos una función que recibe una cadena de carácteres, y devuelve las 3 iniciales*/

#include<stdio.h>

void obtenerIniciales(char cadena[], char *n, char *ap1, char *ap2);

int main(void){
	char cadena[30] = "Mikel Escobar Díaz";
	char n, ap1, ap2;
	
	obtenerIniciales(cadena, &n, &ap1, &ap2);
	printf("%c%c%c", n, ap1, ap2);
	return 0;
}

void obtenerIniciales(char cadena[], char *n, char *ap1, char *ap2){
	int i = 0, j;
	while(*(cadena + i) != '\0'){
		*n = cadena[0];
		if(cadena[i] == ' '){
			*ap1 = cadena[i+1];
			for( j = i + 1; j != '\0'; j++){
				if(cadena[j] == ' '){
					*ap2 = cadena[j+1];
					break;
				}
			}
			break;
		}
		i++;
	}
}
