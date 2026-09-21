/*Este programa lee las inciales de tu nombre en minúsculas y las muestra
en mayúsculas*/

#include<stdio.h>

int main(void){
	char l1, l2, l3;
	while(1){
	printf("Introduce tus iniciales en minúsculas: ");
	scanf("\n%c%c%c",&l1,&l2,&l3);
		if((l1 >= 'a' && l1 <= 'z') && 
		(l2 >= 'a' && l2 <= 'z') && 
		(l3 >= 'a' && l3 <= 'z')){
			break;
			}
		else{
			printf("Los caracteres introducidos no son válidos");
		}
	}
	l1 = l1 -32;
	l2 = l2 -32;
	l3 = l3 -32;
	printf("%c%c%c", l1, l2, l3);
	return 0;
}



