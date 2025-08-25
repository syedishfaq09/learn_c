// sum of two Arrays.

#include <stdio.h>
int main()
{

    // first Array.

    int r1, c1;

    printf("Enter number of rows of 1st array: ");
    scanf("%d", &r1);

    printf("Enter number of columns of 1st array: ");
    scanf("%d", &c1);

    int arr1[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    // 2nd Array

    int r2, c2;

    printf("Enter number of rows of 1st array: ");
    scanf("%d", &r2);

    printf("Enter number of columns of 1st array: ");
    scanf("%d", &c2);

    int arr2[r2][c2];

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter element arr1[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // sum

    printf("\nSum of Array= \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            int sum[i][j];
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
