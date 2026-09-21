#include <stdio.h>

/*Incluir AQUÍ la declaración o prototipo de la función calcularPrecioConIVA*/
float calcularPrecioConIVA(float precioUnitario, int cantidad, int porcentajeIVA);


/*Función main*/
int main(void) {
    float precioUnitario, precioTotal;
    int cantidad, porcentajeIVA;

    // Solicitar al usuario los datos
    printf("Introduce el precio unitario del producto (sin IVA): ");
    scanf("%f", &precioUnitario);
    printf("Introduce el numero de productos adquiridos: ");
    scanf("%d", &cantidad);
    printf("Introduce el IVA a aplicar (en procentaje): ");
    scanf("%d", &porcentajeIVA);

    // Calcular el precio total con IVA
/*Incluir AQUÍ la llamada a la función calcularPrecioConIVA*/
	precioTotal = calcularPrecioConIVA(precioUnitario, cantidad, porcentajeIVA);
    // Mostrar el resultado
    printf("\nEl precio total a pagar, incluyendo el IVA, es de: %.2f Euros\n", precioTotal);

    return 0;
}


/*Incluir AQUÍ la definición de la función calcularPrecioConIVA*/
float calcularPrecioConIVA(float precioUnitario, int cantidad, int porcentajeIVA){
	float precioTotal;
	precioTotal = (precioUnitario * cantidad) * (1 + ((float)porcentajeIVA / 100));
	return precioTotal;
}

