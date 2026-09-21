/*Trabajamos con ficheros binarios*/

#include<stdio.h>

typedef struct{
	char codigo;
	int edad;
	int sueldo;
	int categoria;
}TTRABAJADOR;

void leerTrabajador(TTRABAJADOR *t);
void inicializarTrabajador(TTRABAJADOR v[]);
void leerFichero(TTRABAJADOR v[]);
void escribirFichero(TTRABAJADOR v[]);

int main(void){
	TTRABAJADOR trabajador[20];
	
	inicializarTrabajador(trabajador);
	escribirFichero(trabajador);
	leerFichero(trabajador);
	escribirFichero(trabajador);
}

void leerTrabajador(TTRABAJADOR *t){
	
	printf("Introduce la edad del trabajador: ");
	scanf("%d", &t->edad);
	printf("Introduce el sueldo del trabajador: ");
	scanf("%d", &t->sueldo);
	printf("Introduce la categoria del trbajador: ");
	scanf("%d", &t->categoria);
	printf("\n");
	
}

void inicializarTrabajador(TTRABAJADOR v[]){
	int i;
	for(i=0; i < 10; i++){
		v[i].codigo = 'A' + i;
		leerTrabajador(&v[i]);
	}
	
	
}

void leerFichero(TTRABAJADOR v[]){
	int i;
	
	FILE *f = fopen("trabajadores.dat", "rb");
	if(f==NULL){
		printf("Error al abrir trabajadores.dat\n");
	}
	for(i=0; i < 10; i++){
		fread(&v[i], sizeof(TTRABAJADOR), 1, f);
	}
	
	fclose(f);
	
}

void escribirFichero(TTRABAJADOR v[]){
	int i;
	FILE *f = fopen("trabajadores.dat", "wb");
	if(f==NULL){
		printf("Error al abrir trabajadores.dat\n");
	}
	
	for(i=0; i < 10; i++){
		fwrite(&v[i], sizeof(TTRABAJADOR), 1, f);
	}
	
	fclose(f);
}



















