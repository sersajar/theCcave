#include <stdio.h>

/* function declaration */
unsigned int factorial(unsigned int x);

int main()
{
    unsigned int i = 3;     /* declare an int and assign it the value of 3 */
    printf("%d! = %d\n", i, factorial(i));  /* print factorial of i */
    return 0;
}

/* function body */
unsigned int factorial(unsigned int x)
{
    /* 0! is one */
    unsigned int result = 1;    /* declare a var to hold the return val */
    /* loop while x is greater than 0 */
    while(x > 0)
    {
        result *= x;    /* multiply x by result and assign to result */
        x--;            /* decrement x by one */
    }
    return result;      /* return x! when x is not zero */
}

