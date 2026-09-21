/*Este programa crea un array de 10 enteros, y solicita al usuario un entero
por teclado y solo almacena el entero si es >= que el anterior; repite esto
hasta llenar el array, y posteriormente muestra el contenido de este*/

#include <stdio.h>

int main(void) {
    int lista[10];  
    int numero = 0; 
    int numeroIntroducido;
    int i = 0;     

    while (i < 10) { 
        printf("Dime un número >= %d: ", numero);
        scanf("%d", &numeroIntroducido);

        if (numeroIntroducido < numero) { 
            printf("ERROR: El número debe ser mayor o igual que el anterior.\n");
            continue; 
        }

        lista[i] = numeroIntroducido; 
        numero = numeroIntroducido;   
        i++; 
    }
    printf("\nEl contenido del array es:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    return 0;
}

