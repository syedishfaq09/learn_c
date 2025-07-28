// Find sum of series : 1 + 1/2 + 1/4 + 1/6 + ....

#include <stdio.h>

int main()
{
    int n;
    float sum = 1.0; // Start with the first term '1'

    printf("Enter the value of n (even number): ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        sum += 1.0 / i;
    }

    printf("Sum of the series is: %.2f\n", sum);

    return 0;
}