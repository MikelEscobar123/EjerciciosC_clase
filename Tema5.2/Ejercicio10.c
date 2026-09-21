/*Este programa lee dos nombres y dos apellidos, y muestra por pantalla si 
ambas personas tienen el mismo apellido*/

#include<stdio.h>

int main(void){
	char nombre1[300];
	char nombre2[300];
	int i = 0, j = 0;
	int esIgual = 0;
	
	printf("Introduce nombre y dos apellidos: ");
	gets(nombre1);
	printf("Introduce nombre y dos apellidos: ");
	gets(nombre2);
	
	// Extraemos el primer apellido de nombre2
    while (nombre1[i] != ' ' && nombre1[i] != '\0') {
        i++;
    }
    // Pasamos a la primera letra del apellido, ya que el while nos deja en el espacio
    i++; 
    // Extraemos el primer apellido de nombre2
    while (nombre2[j] != ' ' && nombre2[j] != '\0') {
        j++;
    }
    j++;
	// Iteramos sobre el primer apellido
    while (nombre1[i] != ' ' && nombre1[i] != '\0' && nombre2[j] != ' ' && nombre2[j] != '\0') {
		if (nombre1[i] == nombre2[j]) {
            esIgual = 1;
        }else{
        	esIgual = 0;
		}
        i++;
        j++;
    }
	
    if (1 == esIgual) {
        printf("El primer apellido es igual\n");
    }else {
        printf("El primer apellido es distinto\n");
    }
	return 0;
}
