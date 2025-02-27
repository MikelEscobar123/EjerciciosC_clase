/*Este programa muestra la velocidad y espacio recorrido de un cuerpo 
en caída libre durante los primero 10 segundos*/

#include<stdio.h>

int main(void){
	//Declaramos las variables a utilizar
	int tiempo, tiempo_escogido;
	float velocidad, espacio;
	printf("A lo largo de cuánto tiempo quieres calcular la trayectoria: ");
	scanf("\n%d",&tiempo_escogido);
	//Inicializamos el bucle 
	for (tiempo=0; tiempo <= tiempo_escogido; tiempo++){
		//Calculamos velocidad y espacio recorrido
		velocidad = 9.8 * tiempo;
		espacio = 0.5 * 9.8 * (tiempo * tiempo);
		printf("t = %d, v = %.2f, %.2f m recorridos.\n",tiempo, velocidad, espacio);
	}
	return 0;
}
