#include <stdio.h>
int main ()
{
    //Arthmetic operators: +,-,*,/,%

    //precedance:{*,/,%} > {+,-}

    //associative: left to right

    int result = 3+1 - 7 * 5 % 3 /2 * 4 % 5 +1 ;

    printf("%d",result);

}