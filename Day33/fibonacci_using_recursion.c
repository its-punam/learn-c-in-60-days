/*
 * Program Name : Fibonacci Series Using Recursion
 * Day          : Day 33
 * Description  : This program prints the Fibonacci series
 *                up to n terms using a recursive function.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to calculate nth Fibonacci number */
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    printf("\n");

    return 0;
}
