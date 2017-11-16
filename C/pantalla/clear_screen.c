#include <stdio.h>
#include <stdlib.h>

void prep_pantalla() {    // no se debe poner semicolon aquí
    system("clear");
    printf( "La pantalla is clean\n" );
    return;     // No hace falta, un a función void() no devuelve nada
}

int main() {
    prep_pantalla(); // llamamos a la funcion
}

