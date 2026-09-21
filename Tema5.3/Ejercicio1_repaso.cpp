/*En este programa creamos una estructura que guarda los datos de 5 amigos, a continuación pide un dato por teclado, y muestra los datos del amigo
cuyo dato coincide con el pedido por teclado*/

#include<stdio.h>

typedef struct{
	char nombre[30];
	char apellido[30];
} tNombre;

typedef struct{
	char calle[50];
	int numero;
	int codigoPostal;
} tDireccion;

typedef struct{
	tNombre nombre;
	int edad;
	char sexo;
	tDireccion direccion;
	int telefono; 
} tAmigos;

tAmigos amigos[5] = {
	{{"Mikel", "Escobar"}, 18, 'm', {"Agronovo", 19, 15280}, 999999999},
    {{"Ane", "Martínez"}, 20, 'f', {"Lauroeta", 5, 48940}, 666123456},
    {{"Jon", "López"}, 19, 'm', {"Elexalde", 12, 48991}, 688765432},
    {{"Laura", "González"}, 21, 'f', {"San Pedro", 7, 48004}, 677987654},
    {{"Iker", "Fernández"}, 22, 'm', {"Zabala", 33, 48003}, 699456123}
};

int main(void){
	char sexo;
	int i, j;
	do{
		printf("Introduce sexo(m/f): ");
		scanf("%c", &sexo);
		getchar();
	}while(sexo != 'm' && sexo != 'f');
	for(i = 0; i < 5; i++){
		if(amigos[i].sexo == sexo){
			printf("\nNombre+Apellido: %s %s\n", amigos[i].nombre.nombre, amigos[i].nombre.apellido);
			printf("Edad: %d\n", amigos[i].edad);
			printf("Sexo: %c\n", amigos[i].sexo);
			printf("Dirección+CP: %s, %d, %d\n", amigos[i].direccion.calle, amigos[i].direccion.numero, amigos[i].direccion.codigoPostal);
			printf("Número de teléfono: %d\n", amigos[i].telefono);
		}
	}
	return 0;
}
