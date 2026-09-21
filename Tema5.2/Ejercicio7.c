/*Este programa es el juego del ahorcado*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char palabra[] = "teclados";
    char letra;
    int longitud = strlen(palabra);
    int i = 0;
    int acertado = 0;
    char enterosNoAcertados[longitud];
    
    strcpy(enterosNoAcertados, palabra);
    // Sustituimos todas las letras por "-"
    for(i = 0; i < longitud; i++){
        enterosNoAcertados[i] = '-';
    }
  	// Iniciamos el juego    
    while(acertado == 0){
        printf("\nIntroduce una letra: ");
        scanf("\n%c", &letra);

        // Sustituye "-" por la letra acertada
        for(i = 0; i < longitud; i++){
            if(palabra[i] == letra){
                enterosNoAcertados[i] = letra;
            }
        }

        // Muestra la palabra con las letras acertadas
        printf("\n%s", enterosNoAcertados);
        
        // Verificamos si se ha acertado toda la palabra
        acertado = 1;  
        for(i = 0; i < longitud; i++){
            if(palabra[i] != enterosNoAcertados[i]){
                acertado = 0;  
                break;
            }
        }
		
        if(acertado == 1){
            printf("\nEnhorabuena, has acertado la palabra!\n");
            break;
        }
    }
    return 0;  
}

	
