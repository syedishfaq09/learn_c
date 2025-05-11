#include <stdio.h>

int main () 
{
const float PI = 3.14;
float radius,area;

printf("Enter the radius of the circle in centimeters:");
scanf("%f",&radius);
area = PI * radius * radius;

printf("the area of the circle is %.2f sq.cm.\n\n",area);

printf("***THANKYOU***");

return 0;
}