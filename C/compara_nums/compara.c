#include <stdio.h>

void compara( int a, int b );     /* Definimos la cabecera de la función */

int main()
     {
     int num1, num2;
     int resultado;

     printf( "Introduzca dos números: " );
     scanf( "%i %i", num1, num2 );

     resultado = compara( num1, num2 );
     printf( "El mayor de los dos es %i\n", resultado );

     return 0;
     }

int compara( int a, int b )     /* Ahora podemos poner el cuerpo de la función donde queramos. */
               /* Incluso después de donde la llamamos (main) */
     {
     int mayor;
     if ( a>b )
     mayor = a;
     else mayor = b;

     return mayor;
     }
