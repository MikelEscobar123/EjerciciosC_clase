/*Esta función dados un día, mes y año, visualiza la fecha en formato dd-mm-aa*/

#include<stdio.h>

void diaMesAnyo(int dia, int mes, int anyo);

int main(void){
	diaMesAnyo(22,9,2006);
	return 0;
}

void diaMesAnyo(int dia, int mes, int anyo){
	printf("%d-%d-%d", dia, mes, anyo);
}
