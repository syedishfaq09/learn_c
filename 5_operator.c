#include <stdio.h>
int main ()
{
    // arthmetic operators +,-,*,/,%

    int x = 10, y = 5,sum,sub,mul,div,mod;

    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    mod = x % y;
    printf("sum of x and y: %d\n",sum);
    printf("subtraction of x and y: %d\n",sub);
    printf("multiplication of x and y: %d\n",mul);
    printf("division of x and y: %d\n",div);
    printf("remainder when x is divided by y: %d\n",12 % 5);

    return 0;
}