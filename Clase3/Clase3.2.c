/*Este programa lee números enteros y muestra su suma, resta, multiplicación,
y división*/
#include <stdio.h>

int main(void){
	float n1,n2;
	printf("Introduce un número: ");
	scanf("%f",&n1);
	printf("Introduce otro número: ");
	scanf("%f",&n2);
	printf("%.2f + %.2f = %.2f\n", n1, n2, n1+n2);
	printf("%.2f - %.2f = %.2f\n", n1, n2, n1-n2);
	printf("%.2f x %.2f = %.2f\n", n1, n2, n1*n2);
	printf("%.2f / %.2f = %.2f\n", n1, n2, n1/n2);
	
	return 0;
}
