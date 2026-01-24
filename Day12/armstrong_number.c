/*
 * Program Name : Check Armstrong Number
 * Day          : Day 09 - Loops & Number Logic
 * Description  : This program checks whether a given number
 *                is an Armstrong number or not.
 * Author       : Punam
 */

#include <stdio.h>
#include <math.h>

int main()
{

    int num, temp, digit;
    int count = 0;
    double sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number
    temp = num;

    // Count number of digits
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to power of count
    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Check Armstrong condition
    if ((int)sum == num)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}
