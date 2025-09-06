#include <stdio.h>
int main()
{
    // 90° rotation of matrix.

    int n;

    printf("Enter number of Rows/Columns of matrix. "); // Rows and columns should be same.
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nEnter element mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatrix = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // transpose

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int temp;
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    printf("\nTanspose of matrix = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nRotation of matrix = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}