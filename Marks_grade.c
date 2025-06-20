#include <stdio.h>
int main ()
{

    char grade;

    puts("Please enter grade");

    scanf("%c", &grade);

    switch (grade)
    {

    case 'A':
    puts("Excellent! keep it up.");

    break;

    case 'B':
    puts("very good! keeep it up.");

    break;

    case 'C':
    puts("Good! Try improve in the next exam.");

    break;

    case 'D':
    puts("Average! Need to work hard.");

    break;

    case 'E':
    puts("Poor! Need a lot of hard work.");

    break;

    case 'F':
    puts("Failed! You neeed to attend special classes after school.");

    break;

    default:

    puts("Please enter a valid grade.");
    }

    return 0;
}
