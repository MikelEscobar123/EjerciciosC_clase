#include <stdio.h>
#define TAM 4

typedef struct {
    int cantidad;
    char modelo[70];
} tProducto;

int main(void) {
    tProducto producto[TAM];
    int i;
    FILE *fichero;

    // Solicitar al usuario los datos
    for (i = 0; i < TAM; i++) {
        printf("Introduce el nombre del modelo #%d: ", i + 1);
        fgets(producto[i].modelo, sizeof(producto[i].modelo), stdin);
        printf("Introduce la cantidad del modelo #%d: ", i + 1);
        scanf("%d", &producto[i].cantidad);
        getchar();
        
    }

    // Guardar los datos en un fichero
    fichero = fopen("productos.txt", "w");
    if (fichero == NULL) {
        printf("Error: No se puede abrir el fichero para escritura.\n");
        return 1;
    }

    for (i = 0; i < TAM; i++) {
        fprintf(fichero, "%s %d\n", producto[i].modelo, producto[i].cantidad);
    }

    fclose(fichero);
    printf("Información guardada correctamente en 'productos.txt'.\n");

    return 0;
}

