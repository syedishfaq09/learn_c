/*
*****
*   *
*   *
*   *
*****   */

#include <stdio.h>
int main()
{

    int n, m;

    printf("Enter rows.");
    scanf("%d", &n);

    printf("Enter columns.");
    scanf("%d", &m);

    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {

            if (i == 1 || i == n || j == 1 || j == m)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}
