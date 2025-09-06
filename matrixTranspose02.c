#include <stdio.h>
int main()
{
    // transpose of matrix without using extra matrix, (swapping mathod).

    int rows, columns;

    printf("Enter number of Rows of matrix. ");
    scanf("%d", &rows);

    printf("Enter number of columns of matrix. ");
    scanf("%d", &columns);

    int mat[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\nEnter element mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatrix = \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // transpose

    for (int i = 0; i < columns; i++)
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
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}