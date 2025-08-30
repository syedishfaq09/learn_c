// sum of two Matrices.

#include <stdio.h>
int main()
{

    // first Matrix.
    
    int r1, c1;
    
    printf("Enter number of rows of 1st matrix: ");
    scanf("%d", &r1);
    
    printf("Enter number of columns of 1st matrix: ");
    scanf("%d", &c1);


    int r2, c2;

    printf("Enter number of rows of 2nd matrix: ");
    scanf("%d", &r2);

    printf("Enter number of columns of 2nd matrix: ");
    scanf("%d", &c2);


    if(r1 != r2  || c1 != c2) {

        printf("\nMatrices can't be added as dimensions are not same.");

        return 1;
    }

    int mat01[r1][c1];

    puts("\nFirst MAtrix:\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element mat01[%d][%d]: ", i, j);
            scanf("%d", &mat01[i][j]);
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", mat01[i][j]);
        }
        printf("\n");
    }

    // 2nd Matrix



    int mat02[r2][c2];

    puts("\nSecond Matrix:\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter element arr2[%d][%d]: ", i, j);
            scanf("%d", &mat02[i][j]);
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", mat02[i][j]);
        }
        printf("\n");
    }

    // sum

    printf("\nSum of Matrices = \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            int sum[i][j];
            sum[i][j] = mat01[i][j] + mat02[i][j];

            printf("%d  ",sum[i][j]);

        }
        printf("\n");
    }
    return 0;
}
