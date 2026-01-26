/*
 * Program Name : Check Perfect Number
 * Day          : Day 14
 * Description  : This program checks whether a given number
 *                is a Perfect Number or not.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int num, i;
    int sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of proper divisors
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    // Check Perfect Number condition
    if (sum == num && num != 0)
    {
        printf("%d is a Perfect Number\n", num);
    }
    else
    {
        printf("%d is not a Perfect Number\n", num);
    }

    return 0;
}