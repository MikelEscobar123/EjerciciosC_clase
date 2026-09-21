/*En este programa vamos a trabajar con ficheros, se nos pide un programa que incrementa en uno la edad de los estudiantes y actualiza el curso
al final del curso académico*/

#include <stdio.h>
#define TAM 4

typedef struct {
    char nombre[20];
    int edad;
    int curso;
} datos_persona;

datos_persona gente[TAM];

int leerDatos(datos_persona gente[]);
void actualizarDatos(datos_persona gente[], int numPersonas);
void guardarDatos(datos_persona gente[], int numPersonas);

int main(void) {
    int numPersonas = leerDatos(gente);
    actualizarDatos(gente, numPersonas);
    guardarDatos(gente, numPersonas);
    return 0;
}

int leerDatos(datos_persona gente[]) {
    int i = 0;
    FILE *fichero = fopen("datos.txt", "r");
    if (fichero == NULL) {
        printf("Error: No se puede abrir el fichero.\n");
    } else {
        while (fscanf(fichero, "%s %d %d", gente[i].nombre, &gente[i].edad, &gente[i].curso) == 3) {
            i++;
        }
        fclose(fichero);
    }
    return i;
}

void actualizarDatos(datos_persona gente[], int numPersonas) {
    int i;
    char respuesta;

    printf("Tenemos datos de %d personas\n", numPersonas);
    for (i = 0; i < numPersonas; i++) {
        gente[i].edad++; 
        printf("%s sigue en el curso %d ? (s/n): ", gente[i].nombre, gente[i].curso);
        scanf(" %c", &respuesta); 
        if (respuesta == 's' || respuesta == 'S') {
            gente[i].curso++;
        }
    }

    printf("\nDatos actualizados:\n");
    for (i = 0; i < numPersonas; i++) {
        printf("%s %d %d\n", gente[i].nombre, gente[i].edad, gente[i].curso);
    }
}

void guardarDatos(datos_persona gente[], int numPersonas) {
	int i;
    FILE *fichero = fopen("datos.txt", "w");
    if (fichero == NULL) {
        printf("Error: No se puede abrir el fichero para escribir.\n");
        return;
    }

    for (i = 0; i < numPersonas; i++) {
        fprintf(fichero, "%s %d %d\n", gente[i].nombre, gente[i].edad, gente[i].curso);
    }

    fclose(fichero);
}

