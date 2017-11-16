#include <stdio.h>
/* programa para contar el numero de digitos en un int */

int main() {
    
    long long number;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    while(number != 0) {
        
        number /= 10; //lo mismo que: number = number/10
        ++count;
    }

    printf("Number of digits: %d \n", count);
}
