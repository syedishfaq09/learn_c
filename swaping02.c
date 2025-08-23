// swap using pointer.  (pass by reference)

#include<stdio.h>
void swap(int *x,int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main () {
    int a,b;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);


   swap(&a,&b);

    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}