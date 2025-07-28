/*
1
AB
123
ABCD
12345  */

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of rows:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
        }
        else
        {

            for (j = 0; j < i; j++)
            {
                // char name = (char)j;
                printf("%c", 'A' + j);
            }
        }
        printf("\n");
    }
}