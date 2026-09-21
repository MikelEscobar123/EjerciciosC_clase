/*Este programa ordena un array de enteros de menor a mayor, utilizando 
el método burbuja*/

#include<stdio.h>

int main(void){
	int longitud;
	int datosLista;
	int i, j, temp;
	
	printf("Introduce la longitud de la lista: ");
	scanf("%d",&longitud);
	int numeros[longitud];
	for(i=0; i<longitud;i++){
		printf("Introduce un número: ");
		scanf("%d",&datosLista);
		numeros[i] = datosLista;
	}
	//Calculamos el número de elementos del array
	int elementos = sizeof(numeros)/sizeof(numeros[1]);
	//Ordenamos de menor a mayor con el método burbuja
	for(i=0; i < elementos - 1; i++){
		for(j=1; j < elementos; j++){
			if(numeros[j] < numeros[j-1]){
				temp = numeros[j];
				numeros[j] = numeros[j-1];
				numeros[j-1] = temp;
			}
		}
	}
	
	for(i=0;i<elementos; i++){
		printf(" %d ",numeros[i]);
	}
	
	return 0;
}
