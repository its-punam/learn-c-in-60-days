/*
 * Program Name : Calculate nPr (Permutation) Using Recursion
 * Day          : Day 45
 * Description  : This program calculates the value of nPr
 *                (Permutation) using recursive multiplication.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to compute nPr */
int nPr(int n, int r)
{
    if (r == 0)
    {
        return 1;   /* Base condition */
    }

    if (r > n)
    {
        return 0;   /* Invalid case */
    }

    return n * nPr(n - 1, r - 1);
}

int main(void)
{
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    printf("%dP%d = %d\n", n, r, nPr(n, r));

    return 0;
}