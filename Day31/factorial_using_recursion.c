/*
 * Program Name : Factorial Using Recursion
 * Day          : Day 31
 * Description  : This program calculates the factorial of a number
 *                using a recursive function.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to calculate factorial */
int fact(int n)
{
    if (n <= 1)
    {
        return 1;    /* Base condition */
    }

    return n * fact(n - 1);
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d\n", n, fact(n));

    return 0;
}
