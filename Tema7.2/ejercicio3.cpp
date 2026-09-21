/**/

#include<stdio.h>
#define NUMJUGADORES 5

typedef struct{
	int codigo; // 1-5
	char posicion; // P,D,A,C
}tJugador;

typedef struct{
	int jornada;
	int codigo;
	int numGoles;
} tGoles;

typedef struct{
	int jugador;
	char posicion;
	int goles;
} tJugadorGoles;
void escribirJugadores(tJugador jugadores[]);
void escribirGoles(tGoles goles[]);
void cargarJugadores(tJugadorGoles v[]);

int main(void){
	tJugador jugadores[NUMJUGADORES] = {
		{1, 'P'},
		{2, 'D'},
		{3, 'A'},
		{4, 'P'},
		{5, 'C'}
	};
	tGoles goles[NUMJUGADORES];
	tJugadorGoles jugadorGoles[NUMJUGADORES];	
	
	escribirJugadores(jugadores);
	escribirGoles(goles);
	cargarJugadores(jugadorGoles);
}

void escribirJugadores(tJugador jugadores[]){
	int i;
	
	FILE *f = fopen("jugadores.dat", "wb");
	if(f==NULL){
		printf("Error al abrir jugadores.dat\n");
	}
	for(i=0; i < NUMJUGADORES; i++){
		fwrite(&jugadores[i], sizeof(tJugador), 1, f);
	}
	fclose(f);
}

void escribirGoles(tGoles goles[]){
	int i = 0;
	char opcion;
	
	FILE *f = fopen("goles.dat", "wb");
	if(f==NULL){
		printf("Error al abrir goles.dat\n");
	}
	do{
		printf("Introduce jornada: ");
		scanf("%d", &goles[i].jornada);
		printf("Introduce código(1-5): ");
		scanf("%d", &goles[i].codigo);
		printf("Introduce número de goles: ");
		scanf("%d", &goles[i].numGoles);
		fwrite(&goles[i].numGoles, sizeof(int), 1, f);
		printf("Seguir introduciendo datos(s/n): ");
		scanf("\n%c", &opcion);
		printf("\n");
		i++;
	}while(opcion != 'n' && i != NUMJUGADORES);
	fclose(f);
	
}

void cargarJugadores(tJugadorGoles v[]){
	int i;
	FILE *f = fopen("jugadores.dat", "rb");
	if(f==NULL){
		printf("Error al abrir jugadores.dat");
	}
	for(i=0; i < NUMJUGADORES; i++){
		fread(&v[i], sizeof(tJugadorGoles), 1, f);
	}
	fclose(f);
}
