#include <stdio.h>
int main()
{
    int i, j, k;
    i = 100;
    j = 9;
    i = i / 10;
    k = i - j;
    printf("Well done, this program compiles.\n");
    printf("%d - %d = %d\n", i, j, k);
    return 0;
}

