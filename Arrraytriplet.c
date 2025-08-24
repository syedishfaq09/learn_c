// sum of three pair of elments = x

#include <stdio.h>
int main()
{
int n;
printf("Enter number of elements: ");
scanf("%d",&n);

int arr[n];

for (int i=1;i<=n;i++) {
    printf("Enter element %d:",i);
    scanf("%d",&arr[i]); 
}

int x;
printf("\nEnter value of x: ");
scanf("%d",&x);

    int totalpair = 0;

   

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            for (int k = 0; k < 4; k++)
            {

                if (arr[i] + arr[j] + arr[k] == x)

                {
                    totalpair++;

                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("\nTotal pair whose sum = %d is %d",x, totalpair);

    return 0;
}