/*
 * Program Name : Check Prime Number Using Recursion
 * Day          : Day 42
 * Description  : This program checks whether a number
 *                is a prime number using recursion.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to check prime */
int isPrime(int n, int i)
{
    if (n <= 1)
    {
        return 0;    /* Not prime */
    }

    if (i * i > n)
    {
        return 1;    /* No divisor found */
    }

    if (n % i == 0)
    {
        return 0;    /* Divisor found */
    }

    return isPrime(n, i + 1);
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n, 2))
    {
        printf("%d is a Prime number\n", n);
    }
    else
    {
        printf("%d is not a Prime number\n", n);
    }

    return 0;
}
