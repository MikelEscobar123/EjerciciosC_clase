#include <stdio.h>
#include <string.h>
#define TAM 3

typedef struct{
	char nombre[50];
	char apellido[50];
} tAutor;

typedef struct{
	char titulo[100];
	tAutor autor;
	int ISBN;
	char estado; // d -> disponible, p -> prestado
} tLibro;

tLibro libro[TAM] = {
	{"Los santos inocentes", {"Miguel", "Delibes"}, 1234, 'd'},
	{"El árbol de la ciencia", {"Pío", "Baroja"}, 3425, 'p'},
	{"Niebla", {"Miguel", "Unamuno"}, 6975, 'd'}
};

int main(void){
	int opcion;
	int i, encontrado;
	char titulo[100];
	do{
		printf("1. Buscar libro por título\n");
		printf("2. Prestar libro\n");
		printf("3. Devolver libro\n");
		printf("4. Ver libros disponibles\n");
		printf("5. Salir\n");
		printf("Opción: ");
		scanf("%d", &opcion);
		getchar(); // Limpiar buffer
		printf("\n");

		switch(opcion){
			case 1:
				printf("Título: ");
				gets(titulo);
				encontrado = 0;
				for(i = 0; i < TAM; i++){
					if(strcmp(titulo, libro[i].titulo) == 0){
						printf("Datos del libro:\n");
						printf("Título: %s\n", libro[i].titulo);
						printf("Autor: %s %s\n", libro[i].autor.nombre, libro[i].autor.apellido);
						printf("ISBN: %d\n", libro[i].ISBN);
						printf("Estado: %c\n", libro[i].estado);
						encontrado = 1;
						break;
					}
				}
				if(!encontrado){
					printf("Ese libro no se encuentra en la base de datos.\n");
				}
				break;
			
			case 2:
				printf("Libros disponibles:\n");
				for(i = 0; i < TAM; i++){
					if(libro[i].estado == 'd'){
						printf("Título: %s\n", libro[i].titulo);
					}
				}
				printf("Libro a prestar: ");
				gets(titulo);
				encontrado = 0;
				for(i = 0; i < TAM; i++){
					if(strcmp(titulo, libro[i].titulo) == 0 && libro[i].estado == 'd'){
						libro[i].estado = 'p';
						printf("Libro prestado con éxito.\n");
						encontrado = 1;
						break;
					}
				}
				if(!encontrado){
					printf("El libro introducido no está disponible o no existe.\n");
				}
				break;
			case 3:
				printf("Libros disponibles:\n");
				for(i = 0; i < TAM; i++){
					if(libro[i].estado == 'p'){
						printf("Título: %s\n", libro[i].titulo);
					}
				}
				printf("Libro a devolver: ");
				gets(titulo);
				encontrado = 0;
				for(i = 0; i < TAM; i++){
					if(strcmp(titulo, libro[i].titulo) == 0 && libro[i].estado == 'p'){
						libro[i].estado = 'd';
						printf("Libro devuelto con éxito.\n");
						encontrado = 1;
						break;
					}
				}
				if(!encontrado){
					printf("El libro introducido no está disponible o no existe.\n");
				}
				break;
			case 4:
				printf("Libros disponibles:\n");
				for(i=0; i < TAM; i++){
					printf("Título: %s\n", libro[i].titulo);
					printf("Autor: %s %s\n", libro[i].autor.nombre, libro[i].autor.apellido);
					printf("ISBN: %d\n", libro[i].ISBN);
					if(libro[i].estado == 'p'){
						printf("Estado: prestado\n");
					}else{
						printf("Estado: disponible\n");
					}
					printf("\n");
				}
				break;
		}
		printf("\n");
	}while(opcion != 5);
	return 0;
}

