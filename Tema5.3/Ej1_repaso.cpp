#include<stdio.h>
#include<string.h>

#define TAM 10

typedef struct {
	char nombre[50];
	int telefono;
	char correo[200];
} tContacto;

tContacto contacto[TAM] = {
	{"Mikel", 618526300, "mikelescobar.opendeusto.es"},
	{"Guille", 684011171, "guille.velo.gmail.com"},
	{"Mauro", 654873212, "mauro.barreiro.iesbrion.com"},
	{"Dani", 675439889, "dani.garcia.usc.es"},
	{"Hugo", 630988765, "hugo.garcia.usc.es"}	
};

int main(void){
	int opcion;
	int i;

	do {
		printf("1. Añadir nuevo contacto\n");
		printf("2. Buscar contacto\n");
		printf("3. Mostrar todos los contactos\n");
		printf("4. Salir\n");
		printf("Opción: ");
		scanf("%d", &opcion);
		getchar(); // limpiar '\n' pendiente tras scanf
		printf("\n");

		switch(opcion) {
			case 1:
				for(i = 0; i < TAM; i++) {
					if(contacto[i].telefono == 0) {
						printf("Nombre: ");
						gets(contacto[i].nombre);

						printf("\nNúmero de teléfono: ");
						scanf("%d", &contacto[i].telefono);
						getchar();

						printf("\nCorreo electrónico: ");
						gets(contacto[i].correo);

						break;
					}
				}
				break;

			case 2: {
				char nombre[50];
				int encontrado = 0;

				printf("Nombre: ");
				gets(nombre);

				for(i = 0; i < TAM; i++) {
					if(strcmp(nombre, contacto[i].nombre) == 0) {
						printf("Datos:\n");
						printf("Nombre: %s\n", contacto[i].nombre);
						printf("Número de teléfono: %d\n", contacto[i].telefono);
						printf("Correo electrónico: %s\n", contacto[i].correo);
						encontrado = 1;
						break;
					}
				}
				if(!encontrado) {
					printf("El nombre introducido no se encuentra en la lista de contactos\n");
				}
				break;
			}

			case 3:
				for(i = 0; i < TAM; i++) {
					if(contacto[i].telefono != 0) {
						printf("Nombre: %s\n", contacto[i].nombre);
						printf("Número de teléfono: %d\n", contacto[i].telefono);
						printf("Correo electrónico: %s\n\n", contacto[i].correo);
					}
				}
				break;
		}
	} while(opcion != 4);

	return 0;
}

