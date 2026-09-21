/*En este programa creamos una estructura que almacena el nombre del hotel, la población y el número de teléfono,
así como la disponibilidad de habitaciones de clase 1 a 5(array de 5 posiciones)*/

#include<stdio.h>

typedef struct{
	char nombre[50];
	char poblacion[50];
	int numeroTelefono;
	int clase[5];
} tHotel;

tHotel hotel = {"Hotel", "Badajoz", 999123456, {0, 20, 3, 5, 1}};


int main(void){
	int opcion;
	int tipoHabitacion;
	do{
		printf("1. Check-in\n");
		printf("2. Check-out\n");
		printf("3. Estado del hotel\n");
		printf("4. Salir\n");
		printf("Opción: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
				printf("Tipo de habitación(1-5): ");
				scanf("%d", &tipoHabitacion);
				switch(tipoHabitacion){
					case 1:
						if(hotel.clase[tipoHabitacion - 1] > 0){
							printf("No hay habitaciones disponibles.");
						}else{
							printf("Habitaciones disponibles: %d", hotel.clase[tipoHabitacion - 1]);	
						}
						printf("\n");
				}
		}
	}while(opcion != 4);
	return 0;	
}
