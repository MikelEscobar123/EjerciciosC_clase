/*En este programa contamos con 2 productos, y queremos calcular cuál de los dos ha generado más beneficio*/

#include<stdio.h>

typedef struct{
	float precioCosto;
	float precioVenta;
	int codigo;
	int ventas;
	float beneficio;
} tProductos;

tProductos libros, discos;

int main(void){
	printf("Introduce el costo de los libros: ");
	scanf("%f", &libros.precioCosto);
	printf("Introduce el precio de venta de los libros: ");
	scanf("%f", &libros.precioVenta);
	printf("Introduce el código de artículo de los libros: ");
	scanf("%d", &libros.codigo);
	printf("Introduce el número de ventas de los libros: ");
	scanf("%d", &libros.ventas);
	printf("\n----------------------------------------------\n");
	libros.beneficio = (libros.ventas * (libros.precioVenta - libros.precioCosto));

	
	printf("\nIntroduce el costo de los discos: ");
	scanf("%f", &discos.precioCosto);
	printf("Introduce el precio de venta de los discos: ");
	scanf("%f", &discos.precioVenta);
	printf("Introduce el código de artículo de los discos: ");
	scanf("%d", &discos.codigo);
	printf("Introduce el número de ventas de los discos: ");
	scanf("%d", &discos.ventas);
	printf("\n----------------------------------------------\n");
	discos.beneficio = (discos.ventas * (discos.precioVenta - discos.precioCosto));
	
	printf("\nBeneficio libros: %.2f\n", libros.beneficio);
	printf("Beneficio discos: %.2f\n", discos.beneficio);
	
	if(libros.beneficio > discos.beneficio){
		printf("\nHan tenido más beneficio los libros");
	}else if(libros.beneficio == discos.beneficio){
		printf("\nHan tenido el mismo beneficio");
	}else{
		printf("\nHan tenido más beneficio los discos");
	}
	return 0;
}
