#include <stdio.h>
int main()
{
    float f = 3.14159; /* assign approximate value of PI. */
    f += 0.0000001; /* add a very small number to it */
    printf("%f\nç", f); /* Print value stored in f */
    return 0; /* the addition will be lost */
}

