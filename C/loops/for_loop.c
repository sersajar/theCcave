#include <stdio.h>
/* for loop basico */

int main(){
    
    int i;
    for ( i=0 ; i<100 ; i++) {
        puts("Hola");    
    }

    //i=0; esta linea no hace nada, la i empieza en 1 por el bucle
    int j;
    for (i=1, j=5 ; i<10 ; i++, j=j+5) {
        printf( "hola " );
        printf( "Esta es la linea %i ", i );
        printf( " j vale = %i\n", j );
    }
}     
