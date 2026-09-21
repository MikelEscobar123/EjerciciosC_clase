/*Este programa lleva el control de un inventario de alquiler de películas de vídeo*/

#include<stdio.h>
#include<string.h>
#define TAM 5

//Definimos la estructura que define la longitud de las películas
typedef struct{
	int horas;
	int minutos;
	int segundos;
} tLongitud;

//Definimos la estructura que define la fecha en la que se alquiló la peli
typedef struct{
	int dia;
	int mes;
	int anyo;
} tFechaAlquiler;

//Definimos la estructura principal
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
    {"Oppenheimer", {3, 0, 0}, 3.75, 'D'},
    {"El club de la lucha", {2, 19, 0}, 4.00, 'A'}
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
					getchar();//Limpiamos el buffer
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
						
					}else{
							printf("Película no encontrada\n");
							break;
						}
				}
				break;
			case 3:
				printf("Título: ");				
			    getchar();//Limpiamos buffer
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
				return 0;
				break;
		}
		printf("\n");
	}
	return 0;
}
