/*En este programa creamos una función que recibe un array de 20 elementos de tipo char, y devuelve el número de mayúsculas y minúsculas que contiene*/

#include<stdio.h>
#define TAM 20

void numMayMin(char v[], int *min, int *may); 
int numMayMin2(char v[], int *may);

int i;

int main(void){
	char cadena[TAM] = {'g', 'P', 't', '-', 'c', 'H',
	'A', 't','2', '0', '2', '5', '!', '#', 'x',
	'Y','Z', '@', 'a', 'z'};
	int nMin, nMay;
	numMayMin(cadena, &nMin, &nMay);
	printf("Número de mayúsculas: %d\n", nMay);
	printf("Número de minúsculas: %d", nMin);
	
	
}

void numMayMin(char v[], int *min, int *may){
	*min = 0;
	*may = 0;
	for(i=0; i < TAM; i++){
		if(v[i] >= 'a' && v[i] <= 'z'){
			(*min)++;
		}else if(v[i] >= 'A' && v[i] <= 'Z'){
			(*may)++;
		}
	}	
}
 

