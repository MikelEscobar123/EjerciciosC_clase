/*Este programa recoge un número por teclado y lo descompone sus cifras*/

#include<stdio.h>

int main(void){
	int numero;
	
	printf("Introduce un número: ");
	scanf("%d",&numero);
	
	while (numero>0){
		//Calculamos cuál es el último dígito
		printf("%d\n", numero%10);
		/*numero /= 10 quita el último dígito(lo transforma a decimal, y
		como es int no se computa)*/
		numero /= 10; 
	}
	return 0;
}
