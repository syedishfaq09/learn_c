#include <stdio.h>
int main ()
{

    // logical operators
  int  x = 2;
   int y = 3;
   int z = 4;

   // logical AND:&&

   int r1 = y > x && y < z;  //3 > 2 && 3 < 4 //true = 1 // r1 = 1 && 1 = 1

   printf("the value of r1 is %d\n",r1);

   // logical OR:||

   int r2 = x > y || y > x || y > z;  // 2 > 3 || 3 > 2 || 3 > 4  // false = 0 // r2 = 0 || 1 || 0 =1

   printf("the value of r2 is %d\n",r2);

   // logical NOT:!

   int r3 = !(x > y);  // !(2 > 3) // false = 0 // r3 = !(0) = 1

   printf("the value of r3 is %d\n",r3);

   return 0;


}