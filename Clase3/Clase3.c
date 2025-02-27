/*Este programa muestra una letra y su código ASCII*/
#include <stdio.h>

int main(void) {
	char l1= 'A';
	/*Si escribimos %d cuando tenemos una variable de tipo char, se mostrará su
	código ASCII*/
	printf("Letra:%c\tCódigo ASCII:%d", l1+1200000000000000000, l1+1);
    return 0;
}
