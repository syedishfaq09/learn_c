#include <stdio.h>
int main ()
{

    // Relational operators
    // a conditions in returns either 0 or 1
    // 0 represents a false condition
    // 1 represents a true condition

    int x = 2;
    int y = 4;
    int z = 6;

    int r1 = x < y;    //true
    int r2 = x > y;    //false
    int r3 = x <= y;   //true
    int r4 = x >= y;   //false


    int r5 = x > z;    //false
    int r6 = x < z;    //true
    int r7 = x >= z;   //false
    int r8 = x <= z;   //true

    int r9 = y < z;    //true
    int r10 = y > z;   //false
    int r11 = y >= z;  //false
    int r12 = y <= z;   //true

    int r13 = x != y;    //true
    int r14 = y != z;    //true
    int r15 = x != z;    //true



    printf("value of r1: %d\n",r1);

    printf("value of r2: %d\n",r2);

    printf("value of r3: %d\n",r3);

    printf("value of r4: %d\n",r4);

    printf("value of r5: %d\n",r5);

    printf("value of r6: %d\n",r6);

    printf("value of r7: %d\n",r7);

    printf("value of r8: %d\n",r8);

    printf("vaslue of r9: %d\n",r9);

    printf("value of r10: %d\n",r10);

    printf("value of r11: %d\n",r11);

    printf("value of r12: %d\n",r12);

    printf("value of r13: %d\n",r13);

    printf("value of r14: %d\n",r14);

    printf("value of r15: %d\n",r15);


    return 0;
}