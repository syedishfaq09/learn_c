#include <stdio.h>
int main ()
{
    int a=5, b =10;
    printf("Before swap: \na = %d\n b = %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nAfter swap:\n a = %d\n b = %d\n",a,b);
    return 0;
}