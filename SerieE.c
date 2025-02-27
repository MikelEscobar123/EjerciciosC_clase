/*Este programa calcula dígitos del número de Euler (e)*/

#include <stdio.h>

double calcular_e(int iteraciones) {
    double e = 1.0;
    double factorial = 1.0;
	long i;
    for (i = 1; i < iteraciones; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }

    return e;
}

int main() {
    int digitos;
    printf("Ingrese la cantidad de iteraciones (mayor = más precisión): ");
    scanf("%d", &digitos);

    printf("Aproximación de e: %.20f\n", calcular_e(digitos));
    return 0;
}

