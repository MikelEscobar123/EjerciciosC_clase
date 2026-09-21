/*En este programa contamos con 10 productos, y queremos calcular el total de ganancias que ha producido cada negocio este mes*/
// Mikel Escobar Díaz - 46095441Z - I. EIA
#include<stdio.h>
#define TAM 10

typedef struct{
	float precioCosto;
	float precioVenta;
	int codigo;
	int ventas;
	float beneficioProducto;
} tProductos;

tProductos producto[TAM];

int main(void){
	int i=0;
	float beneficioTotal = 0.0;
	
	for(i = 0; i < TAM; i++){
		printf("Introduce el costo del artículo %d: ", i+1);
		scanf("%f", &producto[i].precioCosto);
		printf("Introduce el precio de venta del artículo %d: ", i+1);
		scanf("%f", &producto[i].precioVenta);
		printf("Introduce el código del artículo %d: ", i+1);
		scanf("%d", &producto[i].codigo);
		printf("Introduce el número de ventas del artículo %d: ", i+1);
		scanf("%d", &producto[i].ventas);
		printf("\n----------------------------------------------\n\n");
		producto[i].beneficioProducto = (producto[i].ventas * (producto[i].precioVenta - producto[i].precioCosto));
		beneficioTotal += producto[i].beneficioProducto;
	}
	for(i=0; i < TAM; i++){
		printf("Beneficio producto %d: %.2f\n", i+1, producto[i].beneficioProducto);
	}
	printf("\nBeneficio total del negocio: %.2f\n", beneficioTotal);
	return 0;
}
