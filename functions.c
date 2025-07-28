#include <stdio.h>

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to subtract b from a
int subtractAB(int a, int b)
{
    return a - b;
}

// Function to subtract a from b
int subtractBA(int a, int b)
{
    return b - a;
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition (a + b): %d\n", add(a, b));
    printf("Subtraction (a - b): %d\n", subtractAB(a, b));
    printf("Subtraction (b - a): %d\n", subtractBA(a, b));

    return 0;
}