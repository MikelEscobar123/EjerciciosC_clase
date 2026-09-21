/*Este programa lleva el control de un inventario de alquiler de películas de vídeo*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 5

typedef struct{
	int horas;
	int minutos;
	int segundos;
} tLongitud;

typedef struct{
	int dia;
	int mes;
	int anyo;
} tFechaAlquiler;

typedef struct{
	char titulo[50];
	tLongitud longitud;
	float precioAlquiler;
	char estadoAlquiler; // A -> Alquilado / D -> Disponible
} tPeliculas;

tPeliculas peliculas[TAM] = {
	{"El Padrino", {2, 55, 0}, 3.99, 'D'},
    {"Matrix", {2, 16, 0}, 2.99, 'A'},
    {"Interstellar", {2, 49, 0}, 3.50, 'D'},
    {"Inception", {2, 28, 0}, 3.75, 'D'},
    {"Titanic", {3, 14, 0}, 4.00, 'A'}
}; 

int main(void){
	int opcion;
	int i;
	char peliculaBuscada[150];
	while(1){
		printf("1 - Mostrar películas disponibles\n");
		printf("2 - Buscar película\n");
		printf("3 - Alquilar película\n");
		printf("4 - Salir\n");
		printf("Opción: ");
		scanf("%d", &opcion);
		printf("\n");
		switch(opcion){
			case 1:
				for(i = 0; i < TAM; i++){
					if(peliculas[i].estadoAlquiler == 'D'){
						printf("%s\n", peliculas[i].titulo);
					}
				}
				break;
			case 2:
					printf("Buscar película: ");
					while (getchar() != '\n');//Limpiamos el buffer
					gets(peliculaBuscada);
				for(i=0; i < TAM; i++){
					if(strcmp(peliculaBuscada, peliculas[i].titulo) == 0){
						printf("Título: \"%s\"\n", peliculas[i].titulo);
						printf("Longitud: %d:%d:%d\n", peliculas[i].longitud.horas, peliculas[i].longitud.minutos, peliculas[i].longitud.segundos);
						printf("Precio de alquiler: %.2f\n", peliculas[i].precioAlquiler);
						if(peliculas[i].estadoAlquiler == 'D'){
							printf("Estado: Disponible\n");
						}else{
							printf("Estado: Alquilada\n");
						}
						printf("\n");
						break;
						
					}
				}
				break;
			case 3:
				printf("Título: ");				
			    while (getchar() != '\n');
				gets(peliculaBuscada);
				for(i=0; i < TAM; i++){
					if(strcmp(peliculaBuscada, peliculas[i].titulo) == 0){
						if(peliculas[i].estadoAlquiler == 'D'){
							printf("Estado: Disponible\n");
							peliculas[i].estadoAlquiler = 'A';
							printf("Precio de alquiler: %.2f", peliculas[i].precioAlquiler);
						}else{
							printf("Estado: Alquilada\n");
						}
						printf("\n");
					}
				}
				break;
			case 4:
				exit(-1);
				break;
		}
		printf("\n");
	}
	return 0;
}
