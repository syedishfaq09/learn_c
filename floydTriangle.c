/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */

#include <stdio.h>
int main()
{

    int n;

    printf("Enter rows:");
    scanf("%d", &n);

    int a = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++; // for only odd numbers put a = a+2
        }
        printf("\n");
    }
}