/*
 * Program Name : Check Strong Number
 * Day          : Day 13
 * Description  : This program checks whether a given number
 *                is a Strong number or not.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int num, temp, digit, i;
    int sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number
    temp = num;

    // Process each digit
    while (temp > 0)
    {
        int fact = 1;
        digit = temp % 10;

        // Calculate factorial of digit
        for (i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    // Check Strong number condition
    if (sum == num)
    {
        printf("Strong Number\n");
    }
    else
    {
        printf("Not a Strong Number\n");
    }

    return 0;
}
