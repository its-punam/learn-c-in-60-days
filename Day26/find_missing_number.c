/*
 * Program Name : Find Missing Number in Array (1 to n)
 * Day          : Day 26
 * Description  : This program finds the missing number in an array
 *                containing numbers from 1 to n with one number missing.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{
    int n, i, sum = 0, total;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    // Sum of numbers from 1 to n
    total = n * (n + 1) / 2;

    printf("Missing number is: %d\n", total - sum);

    return 0;
}
