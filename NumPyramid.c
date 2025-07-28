/*
    1
   121
  12321
 1234321
123454321   */

#include <stdio.h>
int main()
{
    int n, j;

    printf("Enter lines.");
    scanf("%d", &n);

    int nsp = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int q = 1; q <= nsp; q++)
        {
            printf(" ");
        }
        nsp--;
        for (int j = 1; j <= i; j++)
        {

            printf("%d", j);
        }
        int a = i - 1;
        for (int k = i - 1; k >= 1; k--)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
}