/*Este programa trata sobre un juego en el que se empieza con un conjunto de 
números del 1 al 9 desordenados, y se van solicitando posiciones hasta 
lograr ordenar todos los números*/

#include <stdio.h>

int main(void) {
    int numeros[9] = {2, 3, 5, 6, 9, 1, 4, 7, 8}; 
    int posicion, temp;
    int i;
	int k = 0; 
     
    while (1) {
        printf("\nNúmeros actuales: ");
        for (i = 0; i < 9; i++) {
            printf(" %d ", numeros[i]);
        }

        int ordenado = 1;
        for (i = 0; i < 9; i++) {
            if (numeros[i] != i + 1) {
                ordenado = 0;
                break;
            }
        }
        if (ordenado = 0) {
            printf("\n¡Felicidades! Has ordenado los números.\n");
            break;
        }
        printf("\nElige una posición (1-9): ");
        scanf("%d", &posicion);
        posicion--;
        if (posicion < 0 || posicion >= 9) {
            printf("Posición fuera de rango. Intenta de nuevo.\n");
            continue;
        }
        temp = numeros[posicion];
        numeros[posicion] = numeros[k];
        numeros[k] = temp;
        if (numeros[k] == k + 1) {
            k++;
        }
    }

    return 0;
}

