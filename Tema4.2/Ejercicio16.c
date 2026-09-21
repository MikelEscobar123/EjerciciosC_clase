/*Este programa lee un número por teclado y comprueba si es binario*/

#include <stdio.h>

int main(void) {
    long int numero, digito, esBinario = 1;

    printf("Introduce un numero: ");
    scanf("%d", &numero);

    int temp = numero;  // Guardamos una copia del número para verificar sus dígitos

    while (temp > 0) {
        digito = temp % 10;  // Extrae el último dígito
        if (digito != 0 && digito != 1) {
            esBinario = 0;  // Si encuentra un dígito diferente de 0 o 1, no es binario
            break;
        }
        temp /= 10;  // Elimina el último dígito
    }

    if (esBinario != 0) {
        printf("El numero %d es binario.\n", numero);
    } else {
        printf("El numero %d NO es binario.\n", numero);
    }
	return 0;
}

