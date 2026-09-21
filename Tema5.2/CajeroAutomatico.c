/*Este programa simula un cajero automático en el que el usuario tiene que 
ingresar su pin y tiene 3 intentos, una vez autenticado, puede elegir entre
ver saldo, retirar dinero o salir*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
	char pin[] = "9853";
	char pinIntroducido[4];
	float saldo = 9000.54;
	float dineroRetirado;
	int i = 0, j = 0;
	int esCorrecto = 0;
	int atras = 0;
	int opcion;
	
	for(i = 0; i < 3; i++){
		printf("Introduzca su pin: ");
		gets(pinIntroducido);
	
		printf("Cargando...\n");
		for(j=0; j<5; j++){
		printf("...\n");
		}
		
	
		if(0 == strcmp(pin, pinIntroducido)){
		printf("\nPin correcto, puede continuar.\n");
		esCorrecto = 1;
		break;	
		}else{
		printf("Pin incorrecto\n");
		}
	}
	if(0 == esCorrecto){
		exit(-1);
	}
	else{
		while(atras == 0){
		printf("\n\nVer saldo. Introduzca 1.\n");
		printf("Retirar dinero. Introduzca 2.\n");
		printf("Salir. Introduzca 3.");
		printf("\nOpción: ");
		scanf("%d", &opcion);
		while(0 >= opcion || opcion > 3){
			printf("Algo salió mal.");
			break;
		}
		switch(opcion){
			case 1:
				printf("%.2feuros", saldo);
				break;
			case 2:
				printf("¿Cantidad a retirar?: ");
				scanf("%f", &dineroRetirado );
				if(saldo >= dineroRetirado){
					saldo -= dineroRetirado;
					printf("Saldo restante: %.2f", saldo);
				}else{
					printf("Dinero insuficiente.");
				}
				break;
			case 3:
				exit(-1);
		}
	}
	
	return 0;
}
}
