/**/

#include<stdio.h>

typedef struct{
	int dia;
	int mes;
	int anyo;
} TFECHA;

void escribirFechasFich(TFECHA fecha);
void leerFechasFich(TFECHA fecha);

int main(void){
	TFECHA fecha;
	escribirFechasFich(fecha);
	leerFechasFich(fecha);
}

void escribirFechasFich(TFECHA fecha){
	int i;
	char opcion;
	FILE *f = fopen("fechas.dat", "wb");
	if(f==NULL){
		printf("Error al abrir fechas.dat\n");
	}
	
	do{
		printf("Introduce el día: ");
		scanf("%d", &fecha.dia);
		printf("Introduce el mes: ");
		scanf("%d", &fecha.mes);
		printf("Introduce el año: ");
		scanf("%d", &fecha.anyo);
		
		fwrite(&fecha, sizeof(TFECHA), 1, f);
		printf("Quiere introducir una nueva fecha?(S/N): ");
		scanf("\n%c", &opcion);
		
	}while(opcion != 'N');
	
	fclose(f);
}

void leerFechasFich(TFECHA fecha){
	
	FILE *f = fopen("fechas.dat", "rb");
	if(f==NULL){
		printf("Error al abrir fechas.dat\n");
	}
	while(fread(&fecha, sizeof(TFECHA), 1, f) == 1){
		printf("%d-%d-%d\n", fecha.dia, fecha.mes, fecha.anyo);
	}
	fclose(f);	
}
