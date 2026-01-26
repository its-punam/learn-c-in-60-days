/*
 * Program Name : Fibonacci Series
 * Day          : Day 14
 * Description  : This program prints the first n Fibonacci numbers
 *                using a loop.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int n, i;
    int a = 0, b = 1, c;

    // Input how many Fibonacci numbers to print
    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    // Print Fibonacci series
    printf("Fibonacci Series:\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
