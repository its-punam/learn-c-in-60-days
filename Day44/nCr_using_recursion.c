/*
 * Program Name : Calculate nCr (Combination) Using Recursion
 * Day          : Day 44
 * Description  : This program calculates the value of nCr
 *                (Combination) using recursive formula based
 *                on Pascal’s Triangle.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to compute nCr */
int nCr(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;   /* Base condition */
    }

    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main(void)
{
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    printf("%dC%d = %d\n", n, r, nCr(n, r));

    return 0;
}