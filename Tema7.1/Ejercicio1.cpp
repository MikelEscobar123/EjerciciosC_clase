/*En este programa vamos a trabajar con ficheros*/

#include<stdio.h>
#include<string.h>

typedef struct{
	char nombre[20];
	float temp;
} t_ciudad;

void leerFichero(t_ciudad ciudades[], int numCiudades);


t_ciudad ciudades[10];

int main(void){
	leerFichero(ciudades, 7);
	return 0;
}

void leerFichero(t_ciudad ciudades[], int numCiudades) {
    int i, cont = 0;
    float tempMedia = 0.0;
    float tempMax = -1000, tempMin = 1000;
    char ciudadMin[20], ciudadMax[20];

    FILE *f = fopen("tempera.txt", "r");
    if (f == NULL) {
        printf("Error: No se puede abrir el fichero.\n");
        return;
    }

    for (i = 0; i < numCiudades; i++) {
        fscanf(f, "%s %f", ciudades[i].nombre, &ciudades[i].temp);
    }

    // Calcular media
    for (i = 0; i < numCiudades; i++) {
        tempMedia += ciudades[i].temp;
        cont++;
    }
    tempMedia = tempMedia / cont;

    // Buscar máx y mín
    for (i = 0; i < numCiudades; i++) {
        if (ciudades[i].temp > tempMax) {
            tempMax = ciudades[i].temp;
            strcpy(ciudadMax, ciudades[i].nombre);
        }
        if (ciudades[i].temp < tempMin) {
            tempMin = ciudades[i].temp;
            strcpy(ciudadMin, ciudades[i].nombre);
        }
    }

    printf("La temperatura media ha sido %.2f\n", tempMedia);
    printf("Ciudad más fresca: %s\n", ciudadMin);
    printf("Ciudad más cálida: %s\n", ciudadMax);

    fclose(f);
}


