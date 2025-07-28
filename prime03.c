// find sum of prime numbers between two numbers?

#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int lower, upper, sum = 0;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    for (int i = lower; i <= upper; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }

    printf("Sum of prime numbers between %d and %d = %d\n", lower, upper, sum);
    return 0;
}