/*
 * Program Name : Reverse a Number (Manual Logic)
 * Day          : Day 05
 * Description  : This program reverses a 5-digit number using
 *                arithmetic operations without loops.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int num;
    int rev = 0;

    // Input number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Reverse number step by step
    rev = rev * 10 + (num % 10);
    num /= 10;

    rev = rev * 10 + (num % 10);
    num /= 10;

    rev = rev * 10 + (num % 10);
    num /= 10;

    rev = rev * 10 + (num % 10);
    num /= 10;

    rev = rev * 10 + (num % 10);

    // Display result
    printf("Reversed number = %d\n", rev);

    return 0;
}
