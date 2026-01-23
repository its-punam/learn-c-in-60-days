/*
 * Program Name : Factorial of a Number
 * Day          : Day 11
 * Description  : This program calculates the factorial of a given
 *                number using a for loop.
 * Author       : Punam
 *  */

#include <stdio.h>

int main()
{

    int num, i;
    long long factorial = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Factorial is not defined for negative numbers
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Calculate factorial
    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    // Display result
    printf("Factorial of %d is %lld\n", num, factorial);

    return 0;
}
