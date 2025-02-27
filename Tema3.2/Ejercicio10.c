/*Este programa recoge por pantalla el número de bits que ocupa un fichero
y calcula el numero de MegaBytes, KiloBytes, bytes y bits que ocupa*/

#include<stdio.h>

int main(void){
	int bits_recogidos, bits, bytes, kilobytes, megabytes, total;
	
	printf("Introduce el número de bits del fichero: ");
	scanf("%d",&bits_recogidos);
	printf("En %d bits hay: \n", bits_recogidos);
	
    bits = bits_recogidos % 8;                   
    bytes = bits_recogidos / 8;                  
    kilobytes = bytes / 1024;                    
    megabytes = kilobytes / 1024;                
    kilobytes = kilobytes % 1024;                
    bytes = bytes % 1024;
	
	printf("%d Bits\n", bits);
	printf("%d Bytes\n", bytes);
	printf("%d KiloBytes\n",kilobytes);
	printf("%d MegaBytes\n", megabytes);

	return 0;
}
