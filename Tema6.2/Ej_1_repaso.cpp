/**/
#include<stdio.h>

void mayorMenor(int *mayor, int *menor);

int main(void){
	int max, min;
	mayorMenor(&max, &min);
	
	printf("El mayor número es: %d\n", max);
	printf("El menor número es: %d\n", min);
	return 0;
}


void mayorMenor(int *mayor, int *menor){
	int n[3], i = 0;
	printf("Introduce el primer número: ");
	scanf("%d", &n[i]);
	i++;
	printf("Introduce el segundo número: ");
	scanf("%d", &n[i]);
	i++;
	printf("Introduce el tercer número: ");
	scanf("%d", &n[i]);
	
	*mayor = -1000;
	*menor = 1000;
	for(i=0; i < 3; i++){
		if(*mayor < n[i]){
			*mayor = n[i];
		}
		if(*menor > n[i]){
			*menor = n[i];
		}
	}
}
