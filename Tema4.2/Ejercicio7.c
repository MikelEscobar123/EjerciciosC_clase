/*Este programa lee una letra minúscula introducida por teclado, y muestra 
todas las letras de la 'a' a la letra*/

#include<stdio.h>

int main(void){
	char letra, contadorLetras;
	int i=0;
	contadorLetras = 'a';
	while(1){
		printf("Introduce una letra minúscula: ");
		scanf("\n%c",&letra);
		if(letra >= 'a' && letra <= 'z'){
			break;
		}else{
			printf("Error, el carácter introducido no es válido");
		}
		
	}
	for(contadorLetras = 'a'; contadorLetras <= letra; contadorLetras++){
			printf("%c", contadorLetras);
		}
	return 0;
}
