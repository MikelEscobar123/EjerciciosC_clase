/*Este programa lee una fecha en formato entero y la muestra 
en formato invertido*/

#include<stdio.h>

int main(void){
	int n1,n2,n3;
	printf("Introduce la fecha: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("La fecha invertida es: %d-%d-%d", n3,n2,n1);
	return 0;
}
