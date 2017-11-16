#include <stdio.h>

int main(void)
{
    char cadena[] = "Hola petardos!!"; //determina el tamaño de la cadena automaticamente
    char * cadena2 = "Me llamo nano";
    char cadena3[10] = "Hola cow!"; //la cadena no puede superar los 10 caracteres inlcusive el nulo

    puts(cadena2);
    puts(cadena);
    puts(cadena3);

    return 0;
}
