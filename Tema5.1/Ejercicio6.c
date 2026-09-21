/*Este programa genera 100 números aleatorios entre 1 y 1000 y los guarda en 
un array después busca el más pequeño e indica en que posición esta*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int lista[100];
    int menor, posicion;
    int i;
    for (i = 0; i < 100; i++) {
        lista[i] = rand() % 1000 + 1;
        printf("%d ", lista[i]);
    }
    // Inicializar el menor con el primer elemento del array
    menor = lista[0];
    posicion = 0;
    // Buscar el menor número y su posición
    for (i = 1; i < 100; i++) {
        if (lista[i] < menor) {
            menor = lista[i];
            posicion = i;
        }
    }
    printf("\nEl menor número es %d y está en la posición %d", menor, posicion);
    return 0;
}

