#include <stdio.h>
int main()
{
    // method 1
    int a, b;
    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("Before swaping\n a = %d and b = %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swaping\na = %d and b = %d", a, b);

    return 0;
}

// method 2 (using 3rd variable)
// int a, b, x;

// printf("Enter value of a:");
// scanf("%d", &a);

// printf("Enter the value of b:");
// scanf("%d", &b);

// printf("Before swaping\n a = %d and b = %d", a, b);
// x = a;
// a = b;
// b = x;
// printf("\nAfter swaping\na = %d and b = %d", a, b);
