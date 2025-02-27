/*Este programa es un piedra-papel-tijera en el que juegas contra el 
ordenador*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int opcion, piedra, papel, tijera, ordenador;
	piedra = 1;
	papel = 2;
	tijera = 3;
	srand(time(NULL));
	ordenador = (rand() % 3)+1;
	
	printf("Elige: \n");
	printf("1. Piedra\n");
	printf("2. Papel\n");
	printf("3. Tijera\n");
	printf("Opción: ");
	scanf("%d",&opcion);
	
	
	switch(opcion){
		case 1:
			if(ordenador == 1){
				printf("Tu eliges piedra y yo piedra, empate");
			}
			else if(ordenador == 2){
				printf("Tu eliges piedra y yo papel, yo gano");
			}
			else if(ordenador == 3){
				printf("Tu eliges piedra y yo tijeras, tú ganas");
			}
			break;
		case 2:
			if(ordenador == 1){
				printf("Tu eliges papel y yo piedra, tú ganas");
			}
			else if(ordenador == 2){
				printf("Tu eliges papel y yo papel, empate");
			}
			else if(ordenador == 3){
				printf("Tu eliges papel y yo tijeras, yo gano");
			}
			break;
		case 3:
			if(ordenador == 1){
				printf("Tu eliges tijeras y yo piedra, yo gano ");
			}
			else if(ordenador == 2){
				printf("Tu eliges tijeras y yo papel, tú ganas");
			}
			else if(ordenador == 3){
				printf("Tu eliges tijeras y yo tijeras, empate");
			}
			break;
		default:
			printf("Algo salió mal");
	}
	return 0;
}
