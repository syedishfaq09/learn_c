// sum of two pair ao array element = x.

#include <stdio.h>
int main()
{
    int n;

    printf("Enter number of elements in Array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements %d.", i + 1);
        scanf("%d", &arr[i]);
    }

    int x = 12;
    int totalpair = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpair++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("Total pair = %d", totalpair);
}