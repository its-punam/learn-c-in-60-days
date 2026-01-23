/*
 * Program Name : Power of a Number
 * Day          : Day 11
 * Description  : This program calculates the power of a number
 *                using a loop.
 *                Result = base ^ exponent
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int base, exponent, i;
    long long result = 1;

    // Input base
    printf("Enter base: ");
    scanf("%d", &base);

    // Input exponent
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power using loop
    for (i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    // Display result
    printf("%d ^ %d = %lld\n", base, exponent, result);

    return 0;
}
