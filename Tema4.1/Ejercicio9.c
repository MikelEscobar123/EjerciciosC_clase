/*Este programa recoge por pantalla 3 notas, y devuelve la media, además 
calcula si el curso está superado (media >= 5)*/
#include<stdio.h>

int main(void){
	float nota1, nota2, nota3, media;
	
	printf("Introduce nota [0-10]: ");
	scanf("%f",&nota1);
	printf("Introduce nota [0-10]: ");
	scanf("%f",&nota2);
	printf("Introduce nota [0-10]: ");
	scanf("%f",&nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	if(media >= 5){
		printf("Tu media es %.2f, has aprobado", media);
	}
	else if(media < 5){
		printf("Tu media es %.2f, has suspendido", media);
	}
	return 0;
}

