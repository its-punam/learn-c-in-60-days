/*
 * Program Name : Find GCD of Two Numbers Using Recursion
 * Day          : Day 35
 * Description  : This program calculates the Greatest Common Divisor (GCD)
 *                of two numbers using Euclid's recursive algorithm.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function using Euclid's Algorithm */
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;    /* Base condition */
    }

    return gcd(b, a % b);
}

int main(void)
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("GCD of %d and %d is: %d\n", x, y, gcd(x, y));

    return 0;
}
