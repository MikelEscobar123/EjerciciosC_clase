/*Este programa define el coste de la compra y calcula las vueltas en monedas*/

#include<stdio.h>

int main(void){
	int coste, pagado, devolver;
	float costeReal, pagadoReal;
	int d2e, d1e, d50c, d20c, d10c, d5c, d1c;
	printf("Introduce el coste de la compra: ");
	scanf("\n%f",&costeReal);
	coste = costeReal * 100;
	
	printf("Introduce el dinero pagado: "),
	scanf("\n%f",&pagadoReal);
	pagado = pagadoReal * 100;
	
	devolver = pagado - coste;
	printf("Devolver: %.2f\n",(float) devolver/100);
	devolver = pagado - coste;
	d2e = devolver / 200;
	d1e = (devolver-(d2e*200))/100;
	d50c = (devolver-(d2e*200)-(d1e*100))/50;
	d20c = (devolver-(d2e*200)-(d1e*100)-(d50c*50))/20;
	d10c = (devolver-(d2e*200)-(d1e*100)-(d50c*50)-(d20c*20))/10;
	d5c = (devolver-(d2e*200)-(d1e*100)-(d50c*50)-(d20c*20)-(d10c*10))/5;
	d1c = (devolver-(d2e*200)-(d1e*100)-(d50c*50)-(d20c*20)-(d10c*10)-(d5c*5))/1;
	
	printf("%d monedas de 2 euros\n", d2e);
	printf("%d monedas de 1 euro\n",d1e);
	printf("%d monedas de 50 céntimos\n",d50c);
	printf("%d monedas de 20 céntimos\n", d20c);
	printf("%d monedas de 10 céntimos\n", d10c);
	printf("%d monedas de 5 céntimos\n", d5c);
	printf("%d monedas de 1 céntimo\n", d1c);
	
	return 0;
	
	
}
