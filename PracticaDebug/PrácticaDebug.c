#include <stdio.h>

int main(void)
{
	int entero1;
	int entero2;
	int suma, resta;

	printf("Introduce un número: ");
	scanf("%d", &entero1);

	printf("Introduce un número: ");
	scanf("%d", &entero2);

	suma=entero1+entero2;

	printf("%d + %d = %d\n", entero1, entero2, suma);

	resta=entero1-entero2;

	printf("%d - %d = %d\n", entero1, entero2, resta);
	return 0;
}
