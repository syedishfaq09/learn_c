// product of first n numbers?

#include <stdio.h>

int main()
{
    int n;
    unsigned long long product = 1; // To hold large values

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("Product of series 1 * 2 * ... * %d = %llu\n", n, product);

    return 0;
}