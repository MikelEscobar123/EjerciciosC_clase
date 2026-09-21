/*Este programa recibe unha lonxitude polo teclado e xera un contrasinal
desa lonxitude*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int lonxitude;
    int i;
    printf("Lonxitude do contrasinal: ");
    scanf("%d", &lonxitude);

    int contrasinal[lonxitude]; 
    for ( i = 0; i < lonxitude; i++) {
        contrasinal[i] = rand() % 10;
	}
    printf("Contrasinal: ");
    for ( i = 0; i < lonxitude; i++) {
        printf("%d", contrasinal[i]);
    }
    return 0;
}

