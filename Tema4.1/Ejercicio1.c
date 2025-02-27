/*Este programa lee el radio de un círculo por teclado y posteriormente pregunta
que queremos calcular, y en función de eso muestra el resultado*/

#include <stdio.h>
#define PI 3.1415
#include<math.h>

int main(void){
	float radio, perimetro, superficie;
	char letra;
	
	
	printf("Introduce el radio del círculo(m): ");
	scanf("%f",&radio);
	
	printf("¿Quieres calcular el perímetro(P) o la superficie(S)?\n");
	printf("(P/S): ");
	scanf("\n%c",&letra);
	if(letra == 'P'){
		perimetro = 2 * PI * radio;
		printf("El perímetro es: %.2fm", perimetro);
	}
	else if(letra == 'S'){
		superficie = PI * pow(radio,2);
		printf("La superficie es: %.2fm2", superficie);
	}
	else{
		printf("Algo ha salido mal.");
	}
	return 0;
}
