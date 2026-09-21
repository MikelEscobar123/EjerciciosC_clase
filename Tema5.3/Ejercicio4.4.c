/*Este programa trabaja con los datos de un alumno mediante una estructura*/

#include<stdio.h>

typedef struct{
	char nombre[50];
	char primerApellido[50];
	char segundoApellido[50];
} tNombre;

typedef struct{
	float notas[10];
} tNotas;

typedef struct{
	tNombre nombre;
	int curso;
	tNotas notas;
} tAlumno;

tAlumno alumno = {
	{"Mikel", "Escobar", "Díaz"}, 1, {3.5, 6.3, 7.3, 5.0, 9.1, 4.7, 5.2, 6.1, 6.6, 7.9}};

int main(void){
	float notaMedia = 0;
	int i;
	for(i=0; i < 10; i++){
		notaMedia += alumno.notas.notas[i];	
	}
	notaMedia = notaMedia / 10;
	printf("Alumno: %s %s %s\n", alumno.nombre.nombre, alumno.nombre.primerApellido, alumno.nombre.segundoApellido);
	printf("Nota media: %.2f", notaMedia);
	return 0;
}
