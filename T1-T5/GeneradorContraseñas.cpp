/*Este programa sirve para crear contraseñas aleatorias de diferentes 
longitudes y complejidades*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	int num;
	srand(time(NULL));
	int longitud;
	int i;
	int ctr1[30];
	char ctr2[30];
	char ctr3[30];
	
	do{
	printf("Introduce el nivel de complejidad de la contraseña: \n");
	printf("1. Simple\n");
	printf("2. Difícil\n");
	printf("3. Imposible\n");
	printf("Nº: ");
	scanf("%d", &num);
	printf("Longitud: ");
	scanf("%d", &longitud);
	}while(num < 1 || num > 3 || longitud < 0);
	
	switch(num){
		case 1:
			for(i = 0; i < longitud; i++){
				ctr1[i] = rand() % 10;
			}
			break;
		case 2: 
			for(i = 0; i < longitud; i++){
				ctr2[i] = rand() % 65 + 57;
			}
			break;
		case 3:
			for(i = 0; i < longitud; i++){
				ctr3[i] = rand() % 200;
			}
			break;
	}
	if(num == 1){
		printf("Contraseña: ");
		for(i=0; i < longitud; i++){
			printf("%d", ctr1[i]);
		}
	}else if(num == 2){
		printf("Contraseña: %s", ctr2);
	}else if(num == 3){
		printf("Contraseña: %s", ctr3);
	}
	return 0;
}
