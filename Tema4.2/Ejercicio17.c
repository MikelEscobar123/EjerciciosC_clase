#include <stdio.h>
#include <math.h>

int main(void) {
    int numero, digito, esBinario = 1;

    printf("Introduce un número: ");
    scanf("%d", &numero);

    int temp = numero;  // Guardamos una copia del número para verificar sus dígitos
    int decimal = 0;
    int i = 0;

    // Verificación de si es un número binario
    while (temp > 0) {
        digito = temp % 10;  // Extrae el último dígito
        if (digito != 0 && digito != 1) {
            esBinario = 0;  // Si encuentra un dígito diferente de 0 o 1, no es binario
            break;
        }
        temp /= 10;  // Elimina el último dígito
    }

    if (esBinario != 0) {
        printf("El número %d es binario.\n", numero);
        
        // Conversión de binario a decimal
        while (numero != 0) {
            digito = numero % 10;  // Obtiene el último dígito
            decimal += digito * (1 << i); // Se usa desplazamiento de bits en lugar de pow(2, i)
            numero /= 10;  // Elimina el último dígito
            i++;
        }

        printf("Su valor decimal es: %d\n", decimal);
    } else {
        printf("El número %d NO es binario.\n", numero);
    }

    return 0;
}

