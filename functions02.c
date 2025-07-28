#include <stdio.h>

// Function to multiply two integers
int multiply(int a, int b)
{
    return a * b;
}

// Function to divide a by b
int divideAB(int a, int b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

// Function to divide b by a
int divideBA(int a, int b)
{
    if (a != 0)
        return b / a;
    else
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Multiplication (a × b): %d\n", multiply(a, b));
    printf("Division (a ÷ b): %d\n", divideAB(a, b));
    printf("Division (b ÷ a): %d\n", divideBA(a, b));

    return 0;
}