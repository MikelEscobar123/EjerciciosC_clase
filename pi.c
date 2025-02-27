/*Este programa calcula dígitos de pi, utilizando la serie de
Leibniz correspondiente*/

#include <stdio.h>

int main() {
    double pi = 0.0;
    int signo = 1;
    long i;
    for (i = 0; i < 1000000000; i++) {  // Ajusta este valor para más precisión
        pi += signo * (4.0 / (2 * i + 1));
        signo = -signo;
        
        if (i % 1000 == 0) {  // Muestra pi cada 1000 iteraciones
            printf("Aproximación de pi en la iteración %ld: %.15f\n", i, pi);
        }
    }
    
    return 0;
}

