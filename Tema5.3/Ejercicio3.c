/*En este programa describimos mediante estructuras a 6 ciclistas del Tour
de Francia. A continuación, pide el código de un equipo por teclado, y muestra
los datos de todos sus ciclistas*/
// Mikel Escobar Díaz - 46095441Z - I. EIA
#include<stdio.h>
#define TAM 6

typedef struct{
	int horas;
	int minutos;
	int segundos;
} tTiempo;

typedef struct{
	int codigoEquipo;
	int dorsal;
	int puesto;
	tTiempo tiempo;
	char maillot;
	
} tCiclista;

tCiclista ciclista[6];

int main(void){
		int i = 0;
		int codigoEquipoIntroducido;
		
		for(i=0; i < TAM; i++){
		printf("Introduce el código de equipo: ");
		scanf("%d", &ciclista[i].codigoEquipo);
		printf("Introduce el dorsal del ciclista: ");
		scanf("%d", &ciclista[i].dorsal);
		printf("Introduce el puesto del ciclista: ");
		scanf("%d", &ciclista[i].puesto);
		printf("Introduce el tiempo del ciclista(hh:mm:ss): ");
		scanf("%d:%d:%d", &ciclista[i].tiempo.horas, &ciclista[i].tiempo.minutos, &ciclista[i].tiempo.segundos);
		printf("Tiene maillot de montaña(s/n): ");
		scanf("\n%c", &ciclista[i].maillot);
		printf("\n");
		}
		
			printf("\nIntroduce el código de un equipo para ver su información: ");
			scanf("%d", &codigoEquipoIntroducido);
			for(i = 0; i < TAM; i++){
				if(codigoEquipoIntroducido == ciclista[i].codigoEquipo){
					printf("\nCódigo de equipo: %d\n", ciclista[i].codigoEquipo);
					printf("Dorsal: %d\n", ciclista[i].dorsal);
					printf("Puesto: %d\n", ciclista[i].puesto);
					printf("Tiempo: %d:%d:%d\n", ciclista[i].tiempo.horas, ciclista[i].tiempo.minutos, ciclista[i].tiempo.segundos);
					printf("Lleva maillot: %c\n", ciclista[i].maillot);
					break;
				}
			}

			for(i=0; i < TAM; i++){
				if(ciclista[i].puesto == 1){
					printf("\nCiclista en primer puesto: \n");
					printf("Código de equipo: %d\n", ciclista[i].codigoEquipo);
					printf("Dorsal: %d\n", ciclista[i].dorsal);
					printf("Puesto: %d\n", ciclista[i].puesto);
					printf("Tiempo: %d:%d:%d\n", ciclista[i].tiempo.horas, ciclista[i].tiempo.minutos, ciclista[i].tiempo.segundos);
					printf("Lleva maillot: %c\n", ciclista[i].maillot);
					break;
				}
			}
			
			for(i=0; i < TAM; i++){
				if(ciclista[i].maillot == 's'){
					printf("Código de equipo: %d\n", ciclista[i].codigoEquipo);
					printf("Dorsal: %d\n", ciclista[i].dorsal);
					printf("Puesto: %d\n", ciclista[i].puesto);
					printf("Tiempo: %d:%d:%d\n", ciclista[i].tiempo.horas, ciclista[i].tiempo.minutos, ciclista[i].tiempo.segundos);
					printf("Lleva maillot: %c\n", ciclista[i].maillot);
				}
			}
		return 0;	
}
