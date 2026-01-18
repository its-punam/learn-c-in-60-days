/*
 * Program Name : Add 1 to Each Digit of a Number
 * Day          : Day 06
 * Description  : This program adds 1 to each digit of a
 *                5-digit number entered by the user.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{
    int num;
    int result = 0;
    int place = 1;
    int digit;

    // Input number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Process each digit
    while (num != 0)
    {
        digit = num % 10;  // Extract last digit
        digit = digit + 1; // Add 1 to digit
        result = result + (digit * place);
        place = place * 10;
        num = num / 10;
    }

    // Display result
    printf("Number after adding 1 to each digit = %d\n", result);

    return 0;
}
