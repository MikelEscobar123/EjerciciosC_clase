/*Este programa recibe una frase y un desplazamiento y cifra la frase con
el algoritmo del César*/

#include <stdio.h>
#include <string.h>  // Para usar strlen

int main(void) {
    int desplazamiento;
    char texto[100]; 

    printf("Introduce el texto a cifrar: ");
    fgets(texto, sizeof(texto), stdin);  // Leer la frase completa

    printf("Desplazamiento: ");
    scanf("%d", &desplazamiento);

    int i;
    int longitud = strlen(texto);
    for (i = 0; i < longitud; i++) {
        if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')) {
            texto[i] += desplazamiento;
        }
    }

    printf("Texto cifrado: %s\n", texto);

    return 0;
}


