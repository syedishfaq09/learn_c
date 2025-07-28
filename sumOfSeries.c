  // sum of first n natural numbers?

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of series 1 + 2 + ... + %d = %d\n", n, sum);
return 0;
}