/*En este programa hacemos una estructura que se llama tHotel, y en la que se muestra un menú de manera repetitiva con 4 opciones*/

#include<stdio.h>

typedef struct{
	char nombreHotel[100];
	char poblacion[50];
	int telefono;
	int disponibilidad[5];
} tHotel;

tHotel hotel = {
    "Menstruación",
    "Madrid",
    912129219,
    {3, 4, 23, 12, 21}  // Disponibilidad por tipo de habitación (1 a 5)
};

int main(void){
	int opcion;
	int tipoHabitacion, numHabitaciones;
	int i;
	do{
	printf("1. Check-in\n");
	printf("2. Check-out\n");
	printf("3. Estado del hotel\n");
	printf("4. Salir\n");
	printf("Opción: ");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1: 
			printf("\nIntroduce el tipo de habitación(1-5): ");
			scanf("%d", &tipoHabitacion);
			printf("\nIntroduce el número de habitaciones a reservar: ");
			scanf("%d", &numHabitaciones);
			if(numHabitaciones > hotel.disponibilidad[tipoHabitacion - 1]){
				printf("No hay habitaciones de ese tipo disponibles\n\n");
			}else{
				printf("¡Habitaciones reservadas!\n\n");
				hotel.disponibilidad[tipoHabitacion - 1] -= numHabitaciones;
				printf("Habitaciones de tipo %d disponibles: %d\n\n", tipoHabitacion, hotel.disponibilidad[tipoHabitacion - 1]);
			}
			break;
		case 2:
			printf("\nIntroduce el tipo de habitación(1-5): ");
			scanf("%d", &tipoHabitacion);
			printf("\nIntroduce el número de habitaciones a liberar: ");
			scanf("%d", &numHabitaciones);
			hotel.disponibilidad[tipoHabitacion - 1] += numHabitaciones;
			printf("Habitaciones de tipo %d disponibles: %d\n\n", tipoHabitacion, hotel.disponibilidad[tipoHabitacion - 1]);
			printf("\n");
			break;
		case 3:
			printf("\nDatos del hotel:\n");
			printf("Nombre: \"%s\"\n", hotel.nombreHotel);
			printf("Número de teléfono: %d\n", hotel.telefono);
			printf("Población: %s\n", hotel.poblacion);
			printf("Datos de las habitaciones: \n");
			for(i=0; i < 4; i++){
				printf("Habitación disponibles de tipo %d: %d\n", i + 1, hotel.disponibilidad[i]);
			}
			printf("\n");
	}
	}while(opcion != 4);
	return 0;
}

