/*
 * Program Name : Sum of First and Last Digit
 * Day          : Day 04
 * Description  : This program calculates the sum of the first
 *                and last digit of a 4-digit number entered
 *                by the user.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    // Declare variables
    int num;
    int sum = 0;
    int firstDigit;
    int lastDigit;

    // Input number
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Extract last digit
    lastDigit = num % 10;

    // Extract first digit
    firstDigit = num / 1000;

    // Calculate sum
    sum = firstDigit + lastDigit;

    // Display result
    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}
