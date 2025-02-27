/*Este programa lee 2 números por teclado, siendo el primero menor que el
segundo, cuando esto se produce, los resta*/

#include<stdio.h>

int main(void){
	float n1, n2, resta;
	do{
		printf("Introduce dos números n1-n2, donde n1 <= n2\n");
		printf("Introduce n1: ");
		scanf("%f",&n1);
		printf("Introduce n2: ");
		scanf("%f",&n2);			
	}while(n1 > n2);
	if(n1 <= n2){
		resta = n1 - n2;
		printf("%.2f - %.2f = %.2f", n1, n2, resta);	
	}
	return 0;
}
