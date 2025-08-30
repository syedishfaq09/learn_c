#include <stdio.h>
#include <limits.h>
int main()
{

    int r, c;

    printf("Enter number of rows of Array: ");
    scanf("%d", &r);

    printf("Enter number of columns of Array: ");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element arr1[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int maxsumrow = INT_MIN, row = -1;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > maxsumrow)
        {
            maxsumrow = sum;
            row = i;
        }
    }
    printf("\nrow with max sum = %d", row + 1);

    printf("\nMaximum sum = %d", maxsumrow);

    return 0;
}