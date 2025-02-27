/*Este programa recoge los lados a, b y c de un triángulo, y calcula su área
usando la fórmula de Herón*/

#include<stdio.h>
#include<math.h>

int main(void){
	float l1, l2, l3, s, area;
	
	printf("Introduce el primer lado: ");
	scanf("%f",&l1);
	printf("Introduce el segundo lado: ");
	scanf("\n%f",&l2);
	printf("Introduce el tercer lado: ");
	scanf("\n%f",&l3);
	
	s = ((l1 + l2 + l3)/2.0);
	area = sqrt(s*(s-l1)*(s-l2)*(s-l3));
	
	printf("Un triángulo con lados de %.2f, %.2f y %.2f tiene %.2f m^2", l1, l2, l3, area);
	return 0;
	
}
