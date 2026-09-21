/*En este programa escrbimos una función que lee tres números por teclado, y devuelve el mayor y el menor, utilizando punteros*/

#include <stdio.h>

void mayorMenor(int *mayor, int *menor) {
    int a, b, c;

    printf("Introduce el primer número: ");
    scanf("%d", &a);
    printf("Introduce el segundo número: ");
    scanf("%d", &b);
    printf("Introduce el tercer número: ");
    scanf("%d", &c);
	
	//Suponemos que a es el valor mayor y menor, para poder comparar con el resto de valores
    *mayor = a;
	*menor = a;
	
	//Utilizamos if separados, para poder evaluar todos los casos (si usamos else if no se evalúan todos los casos)
    if (b > *mayor){
    	//Cambiamos el valor de la variable a la que apunta *mayor
    	*mayor = b;	
	}
	if (c > *mayor){
		*mayor = c;	
	}
	if (b < *menor){
		*menor = b;	
	}
	if (c < *menor){
		*menor = c;	
	}
}

int main() {
    int max, min;
    
	//Establecemos max y min como las direcciones a las que apuntan *mayor y *menor
    mayorMenor(&max, &min);

    printf("El mayor número es: %d\n", max);
    printf("El menor número es: %d\n", min);

    return 0;
}

