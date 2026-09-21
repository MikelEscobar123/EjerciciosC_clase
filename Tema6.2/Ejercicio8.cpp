/*En este programa escribimos una función que dado un entero binario, devuelve su valor decimal, y un código indicando si la conversión ha sido posible*/

#include<stdio.h>
#include<math.h>

int convertirBinario(int numero, int *dec);

int main(void) {
	int dec; // Variable entera normal, no puntero
    int resultado = convertirBinario(1001, &dec);
    
    if (resultado) {
        printf("Conversión exitosa. Valor decimal: %d\n", dec);
    } else {
        printf("El número no es binario.\n");
    }

    return 0;
}

int convertirBinario(int numero, int *dec){
	int digito, esBinario = 1;

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
            decimal += digito * (pow(2,i));
            numero /= 10;  // Elimina el último dígito
            i++;
        }
		*dec = decimal;
    } else {
        printf("El número %d NO es binario.\n", numero);
    }
}
