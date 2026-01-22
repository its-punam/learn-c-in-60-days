/*
 * Program Name : Check Prime Number (using loop)
 * Day          : Day 10
 * Description  : This program checks whether a given number
 *                is a prime number or not using a loop.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int num;
    int isPrime = 1; // Flag variable
    int i;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1)
    {
        isPrime = 0;
    }

    // Check divisibility
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    // Display result
    if (isPrime)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }

    return 0;
}
