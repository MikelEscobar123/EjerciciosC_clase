/*Este programa muestra una letra y su código ASCII*/
#include <stdio.h>

int main() {
	char l1= 'A';
	/*Si escribimos %d cuando tenemos una variable de tipo char, se mostrará su
	código ASCII*/
	printf("Letra:%c	Código ASCII:%d", l1 + 3, l1 + 3);
    return 0;
}
 
