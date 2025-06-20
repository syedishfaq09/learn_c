// WAP to show net payable amount after discount is applied.

#include <stdio.h>

int main ()
{

    float bill,tax,totalBill,netPayableAmount;

    puts("Enter bill");

    scanf("%f", &bill);

    tax = bill * 0.05;

    totalBill = bill + tax;

    if ( totalBill >= 1000){

        netPayableAmount = totalBill * 0.90;

         printf("Discount applied: Rs %.2f\n", totalBill * 0.10);

        printf("Net payable amount after discount: Rs %.2f\n",netPayableAmount);

       
    } else {

    netPayableAmount = totalBill;

    printf("Net payable amount: Rs %.2f\n",totalBill);

    }

    return 0;
    }