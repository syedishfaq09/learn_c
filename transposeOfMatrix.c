#include <stdio.h>
int main()
{
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

    int trp[columns][rows];

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            trp[i][j] = mat[j][i];
        }
    }

    printf("\nTanspose of matrix = \n");
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", trp[i][j]);
        }
        printf("\n");
    }
}