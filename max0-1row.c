#include <stdio.h>
int main()
{

    // Print maximum number of 1's in a row:

    int r, c;

    printf("Enter number of rows of matrix: ");
    scanf("%d", &r);

    printf("Enter number of columns of matrix: ");
    scanf("%d", &c);

    int mat[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element mat[%d][%d], (0 or 1): ", i, j);

            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int maxcount = 0;
    int maxindex = -1;

    for (int i = 0; i < r; i++)
    {
        int count = 0;

        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == 1)
                count++;
        }

        if (maxcount < count)
        {
            maxcount = count;

            maxindex = i;
        }
        printf("\n");
    }

    printf("Row having maximum number of 1 = %d.\n", maxindex + 1);

    printf("\nNumber of 1's in a Row = %d.\n", maxcount);
}