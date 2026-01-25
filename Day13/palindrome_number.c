/*
 * Program Name : Check Palindrome Number
 * Day          : Day 13
 * Description  : This program checks whether a given number
 *                is a palindrome or not.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int num;
    int reverse = 0;
    int original;
    int remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number
    original = num;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;               // Extract last digit
        reverse = reverse * 10 + remainder; // Build reversed number
        num /= 10;                          // Remove last digit
    }

    // Check palindrome condition
    if (reverse == original)
    {
        printf("Palindrome Number\n");
    }
    else
    {
        printf("Not a Palindrome Number\n");
    }

    return 0;
}
