/*
 * Program Name : Count Zeros in a Number Using Recursion
 * Day          : Day 39
 * Description  : This program counts the number of zero digits
 *                present in a given number using recursion.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to count zeros */
int countZero(int n)
{
    if (n == 0)
    {
        return 0;   /* Base condition */
    }

    if (n % 10 == 0)
    {
        return 1 + countZero(n / 10);
    }

    return countZero(n / 10);
}

int main(void)
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x == 0)
    {
        printf("Number of zeros = 1\n");
    }
    else
    {
        printf("Number of zeros = %d\n", countZero(x));
    }

    return 0;
}
