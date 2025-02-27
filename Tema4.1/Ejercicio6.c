/*Este programa recibe un float entre 0.0 y 10.0, y muestra la calificación
obtenida*/

#include<stdio.h>

int main(void){
	float nota;
	printf("Introduce tu nota: ");
	scanf("%f",&nota);
	
	if(nota < 5.0){
		printf("Tu calificación es SUSPENSO");
	}
	else if(5.0 <= nota && nota < 7.0){
		printf("Tu calificación es BIEN");
	}
	else if(7.0 <= nota && nota < 9.0){
		printf("Tu calificación es NOTABLE");
	}
	else if(9.0 <= nota && nota <= 10.0){
		printf("Tu calificación es SOBRESALIENTE");
	}
	else{
		printf("Algo salió mal");
	}
	return 0;
}
