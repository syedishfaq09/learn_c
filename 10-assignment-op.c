#include <stdio.h>
int main ()
{
    // Assignment operator
    // associativity: Right to Left

    //Example 1

    float bill = 200.0;
    float tax = 100.0;

    bill += tax;   //  bill = bill + tax;

    printf(" total bill is: %.1f\n",bill);

    // Example 2

    int number = 10;

    int x = 2;

    number *= x;   // number = number * x;

    printf("multiplication is: %d\n",number);

    // Example 3

    int y = 100;

    int z = 50;

    y /= z;    // y = y / z;

    printf("Division of two numbers is:%d\n",y);

    // Example 4

    int m = 10;

    int n = 15;


    // Example 5

    int a = 10;

    int b = 5;

    a -= b;    //a = a - b;

    printf("Difference of two numbers is: %d\n",a);


    return 0;
}