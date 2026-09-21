/*Este programa lee el radio de un círculo por teclado y muestra su área,
a continuación le pregunta al usuario si quiere repetir esta operación*/

#include<stdio.h>
#define PI 3.14159265359
#include<math.h>

int main(void){
	float radio, area;
	char respuesta;
	do{
		printf("Introduce el radio(m) del círculo: ");
		scanf("%f",&radio);
		area = pow(radio, 2) * PI;	
		printf("Su área es %.2fm2\n", area);
		printf("¿Quieres repetir la operación?(s/n): ");
		scanf("\n%c",&respuesta);
		if(respuesta == 'n'){
			break;
		}
	}while(respuesta == 's');
	return 0;
}
