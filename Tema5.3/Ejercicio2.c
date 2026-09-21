/*En este programa creamos una estructura con las mascotas de la familia, para ello
definimos su raza(mediante un número entero), su color(mediante un carácter), 
su fecha de nacimiento(mediante el tipo tFecha); y su dueño(mediante el tipo
tPersona). A continuación, creamos dos mascotas...*/

#include<stdio.h>

typedef struct{
	int dia;
	int mes;
	int anyo;
} tFecha;

typedef struct{
	int numeroDNI;
	char letraDNI;
	int codigoPostal;
} tPersona;

typedef struct{
	int raza;
	char color;
	tFecha fecha;
	tPersona persona;
	
} tMascota;

tMascota Toby, Lucky;

int main(void){
	
	printf("RAZA, 1: Beagle, 2: Bulldog, 3: Galgo, 4: Siamés, 5: Bengala, 6: Persa.\n");
	printf("Introduce la raza del perro: ");
	scanf("%d", &Toby.raza);
	printf("COLOR: m: marrón, g: gris, b: blanco, n: negro\n");
	printf("Introduce el color del perro: ");
	scanf("\n%c", &Toby.color);
	printf("Introduce el día de nacimiento del perro: ");
	scanf("%d", &Toby.fecha.dia);
	printf("Introduce el mes de nacimiento del perro: ");
	scanf("%d", &Toby.fecha.mes);
	printf("Introduce el año de nacimiento del perro: ");
	scanf("%d", &Toby.fecha.anyo);
	printf("Introduce el número de DNI del dueño: ");
	scanf("%d", &Toby.persona.numeroDNI);
	printf("Introduce la letra de DNI del dueño: ");
	scanf("\n%c", &Toby.persona.letraDNI);
	printf("Introduce el código postal del dueño: ");
	scanf("%d", &Toby.persona.codigoPostal);
	
	printf("\nDatos de Toby: \n\n");
	printf("Raza: ");
	switch(Toby.raza){
		case 1:
			printf("Beagle");
			break;
		case 2:
			printf("Bulldog");
			break;
		case 3:
			printf("Galgo");
			break;
		case 4:
			printf("Siamés");
			break;
		case 5:
			printf("Bengala");
			break;
		case 6:
			printf("Persa");
			break;
	}
	printf("\nColor: ");
	switch(Toby.color){
		case 'm':
			printf("Marrón");
			break;
		case 'g':
			printf("Gris");
			break;
		case 'b':
			printf("Blanco");
			break;
		case 'n':
			printf("Negro");
			break;
	}
	
	printf("\nFecha de nacimiento: %d/%d/%d", Toby.fecha.dia, Toby.fecha.mes, Toby.fecha.anyo);
	printf("\n\nDatos del dueño: \n");
	printf("\nDNI: %d%c", Toby.persona.numeroDNI, Toby.persona.letraDNI);
	printf("\nCódigo postal: %d\n", Toby.persona.codigoPostal);
	
	Lucky.fecha.dia = 12;
	Lucky.fecha.mes = 6;
	Lucky.fecha.anyo = 2022;
	
	printf("\nDatos de Lucky: \n");
	printf("\nRaza: Persa");
	printf("\nColor: gris");
	printf("\nFecha de nacimiento: %d/%d/%d", Lucky.fecha.dia, Lucky.fecha.mes, Lucky.fecha.anyo);
	
	return 0;
}
