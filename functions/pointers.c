#include <stdio.h>

void fun(int, int *);   /* a function with no return value */

int main()
{
    int np = 1, p = 1;
    printf("&np = %p, p = %p \n", &np, &p);     /* print addresses */
    printf("Before fun(): np = %d, p = %d \n", np, p);  /* print values */
    fun(np, &p);     /* pass the value of np and address of p */
    return 0;
}

void fun(int np, int *p)
{
    np = 2;     /* assign 2 to local var np */
    *p = 2;     /* assign 2 to the memory of p defiend in main */
    printf("&np = %p, p = %p \n", &np, p);  /* print addresses */
}

