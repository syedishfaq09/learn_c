#include <stdio.h>
int main ()
{

    // Arthmetic operators

    int x = 10, y = 5, sum , diff , mul , div , mod;

    sum = x  + y;
    diff = x - y;
    mul = x * y;
    div = x / y;
    mod = x % y;

    printf("sum of x and y: %d\n", sum);
    printf("difference of x and y: %d\n", diff);
    printf("multiplication of x and y: %d\n", mul);
    printf("division of x and y: %d\n", div);
    printf("modulus of x and y: %d\n", mod);

    return 0;
}