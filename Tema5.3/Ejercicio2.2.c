/*Este programa lee por teclado los datos de un array de estructuras de alumnos. Posteriormente muestra el porcentaje
de alumnos aprobados y suspendidos*/

#include<stdio.h>
#define TAM 5

typedef struct{
	char nombre[50];
	char primerApellido[50];
	char segundoApellido[50];
} tNombre;

typedef struct{
	int numeroDNI;
	char letraDNI;
} tDni;

typedef struct{
	tNombre nombre;
	tDni dni;
	float nota;
} tAlumno;
tAlumno alumno[TAM];
int main(void){
	int i;
	int aprobados = 0;
	float porcentajeAprobados;
	for(i = 0; i < TAM; i++){
		printf("Introduce el nombre del alumno %d: ", i+1);
		gets(alumno[i].nombre.nombre);
		printf("Introduce el primer apellido del alumno %d: ",  i+1);
		gets(alumno[i].nombre.primerApellido);
		printf("Introduce el segundo apellido del alumno %d: ",  i+1);
		gets(alumno[i].nombre.segundoApellido);
		printf("Introduce el número del DNI del alumno %d: ",  i+1);
		scanf("%d", &alumno[i].dni.numeroDNI);
		printf("Introduce la letra del DNI del alumno %d: ",  i+1);
		scanf("\n%c", &alumno[i].dni.letraDNI);
		printf("Introduce la nota del alumno %d: ", i+1);
		scanf("%f", &alumno[i].nota);
		while (getchar() != '\n'); //Limpiar el buffer
		printf("\n");
		if(alumno[i].nota >= 5.0){
			aprobados++;
		}
	}
	porcentajeAprobados = ((float)aprobados / TAM) * 100.0;
	printf("EL porcentaje de aprobados es de: %.2f%%", porcentajeAprobados);
	return 0;
}
