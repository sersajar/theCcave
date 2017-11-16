#include <stdio.h>
int main()
{
    int apples;
    float cost, costPerApple = 0.20;
    printf("How many apples would you like to buy?\n");
    scanf("%d", &apples);  /* read the number of apples needed */
    if(apples > 20) {
        printf("Sorry we only have 20 apples.\n");
    }
    else {
        cost = costPerApple * apples;
        printf("That will be %.2f pounds please.\n", cost);
    }
    return 0;
}

