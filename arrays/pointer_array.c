#include <stdio.h>
int main()
{
    int i, *p, arr[4] = {6,2,4,7};
    p = &arr[0];    /* assign the address of the first element to p */
    for(i=0; i<(sizeof(arr)/sizeof(int)); i++) {
        printf("arr[%d] = %d \n", i, *p);
        p++;    /* increment the sddress by sizeof(int) */
    }
    return 0;
}

