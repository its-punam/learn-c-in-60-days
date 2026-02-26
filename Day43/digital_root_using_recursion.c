/*
 * Program Name : Find Digital Root of a Number Using Recursion
 * Day          : Day 43
 * Description  : This program calculates the digital root of a number
 *                by repeatedly summing its digits until a single digit
 *                number is obtained.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to sum digits */
int sumDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sumDigits(n / 10);
}

/* Recursive function to compute digital root */
int digitalRoot(int n)
{
    if (n < 10)
    {
        return n;   /* Base condition */
    }

    return digitalRoot(sumDigits(n));
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digital root of %d = %d\n", n, digitalRoot(n));

    return 0;
}