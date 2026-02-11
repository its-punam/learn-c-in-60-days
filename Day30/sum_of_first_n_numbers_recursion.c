/*
 * Program Name : Sum of First N Natural Numbers Using Recursion
 * Day          : Day 30
 * Description  : This program calculates the sum of the first
 *                N natural numbers using recursion.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to calculate sum of first N numbers */
int sum(int n)
{
    if (n == 1)
    {
        return 1;     /* Base condition */
    }

    return n + sum(n - 1);
}

int main(void)
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The sum of first %d numbers is: %d\n", n, sum(n));

    return 0;
}
