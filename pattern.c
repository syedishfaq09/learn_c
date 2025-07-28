
/*
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *    */

#include <stdio.h>
int main()
{

    int n, m;

    printf("Enter number of Rows:");
    scanf("%d", &n);

    printf("Enter number of columns:");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    { // for Rows
        for (int i = 1; i <= m; i++)
        { // for columns

            printf("*  ");
        }
        printf("\n");
    }
}