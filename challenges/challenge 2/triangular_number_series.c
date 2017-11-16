#include <stdio.h>
/* program to calculate trianguar number series */
int main()
{
    int nterms, term = 0, i;
    printf("How many terms? ");  /* ask teh user for input */
    scanf("%d",&nterms);  /* read the whole number */
    for( i=1; i<=nterms; i++)
    {
        term += i;
        printf("%d ", term);
    }
    printf("\n");
    return 0;
}

