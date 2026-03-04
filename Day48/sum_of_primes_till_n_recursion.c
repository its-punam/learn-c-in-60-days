/*
 * Program Name : Find Sum of Prime Numbers Till N (Recursion)
 * Day          : Day 48
 * Description  : This program calculates the sum of all prime
 *                numbers up to N using recursive functions.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to check if number is prime */
int isPrime(int n, int i)
{
    if (n <= 1)
    {
        return 0;
    }

    if (i * i > n)
    {
        return 1;   /* No divisor found */
    }

    if (n % i == 0)
    {
        return 0;   /* Divisor found */
    }

    return isPrime(n, i + 1);
}

/* Recursive function to calculate sum of primes till n */
int sumOfPrime(int n)
{
    if (n < 2)
    {
        return 0;   /* Base condition */
    }

    if (isPrime(n, 2))
    {
        return n + sumOfPrime(n - 1);
    }

    return sumOfPrime(n - 1);
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of prime numbers till %d : %d\n", n, sumOfPrime(n));

    return 0;
}