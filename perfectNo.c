//check perfect number?
// Perfect number is a number whose sum of proper divisors (excluding itself) equals the number.
// example: 6 --> divisors = 1,2,3  and 1+2+3 = 6.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
return 0;
}