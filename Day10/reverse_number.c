/*
 * Program Name : Reverse a Number (using loop)
 * Day          : Day 10
 * Description  : This program reverses a number entered by the user
 *                using a while loop, modulus (%) and division (/).
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int num;
    int reverse = 0;
    int remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using loop
    while (num != 0)
    {
        remainder = num % 10;               // Get last digit
        reverse = reverse * 10 + remainder; // Build reversed number
        num = num / 10;                     // Remove last digit
    }

    // Display result
    printf("Reversed number = %d\n", reverse);

    return 0;
}
