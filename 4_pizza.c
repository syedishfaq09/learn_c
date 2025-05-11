#include <stdio.h>
int main ()
{

    char name [20] = "chocolate";
    
    char size;
    int personItServes;
    float price;

    printf("Enter the size of the pizza as either S,M, or L:");

    scanf("%c", &size);

    printf("Enter the number of person it serves:");

    scanf("%d",personItServes);

        printf("Enter the price of pizza:");
        
        scanf("%.2f", price);

        printf("Yay! you have ordered a %s pizza of size %c that serves %d people please pay Rs %.2f to the delivery person.",name,size,personItServes,price);

        return 0;

}