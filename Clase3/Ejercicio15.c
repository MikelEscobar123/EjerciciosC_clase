/* Este programa calcula el valor de la hipotenusa de un triángulo a partir 
del valor de sus dos catetos*/

#include <stdio.h>
#include <math.h>

int main(void){
	//declaramos las variables
	double c1, c2, hipotenusa;
	//Pedimos y recogemos el valor de los catetos
	printf("Introduce el valor del primer cateto: ");
	scanf("\n%lf",&c1);
	printf("Introduce el valor del segundo cateto: ");
	scanf("%lf",&c2);
	//calculamos la hipotenusa
	hipotenusa = sqrt((c1*c1)+(c2*c2));
	//mostramos el valor de la hipotenusa por pantalla
	printf("El valor de la hipotenusa es: %.2lf", hipotenusa);
	
	return 0;	
}
