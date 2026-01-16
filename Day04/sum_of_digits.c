/*
 * Program Name : Sum of Digits of a Number
 * Day          : Day 04
 * Description  : This program calculates the sum of digits of a
 *                5-digit number entered by the user.
 *                It uses modulus (%) and division (/) operators.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    // Declare variables
    int num;
    int sum = 0;

    // Input number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Extract and add digits
    sum += num % 10; // last digit
    num /= 10;

    sum += num % 10;
    num /= 10;

    sum += num % 10;
    num /= 10;

    sum += num % 10;
    num /= 10;

    sum += num % 10; // first digit

    // Display result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
