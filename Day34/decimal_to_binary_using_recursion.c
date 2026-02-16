/*
 * Program Name : Convert Decimal to Binary Using Recursion
 * Day          : Day 34
 * Description  : This program converts a decimal number
 *                into its binary equivalent using recursion.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to convert decimal to binary */
void decimalToBinary(int n)
{
    if (n == 0)
    {
        return;     /* Base condition */
    }

    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main(void)
{
    int x;

    printf("Enter a decimal number: ");
    scanf("%d", &x);

    printf("Binary equivalent: ");

    if (x == 0)
    {
        printf("0");
    }
    else
    {
        decimalToBinary(x);
    }

    printf("\n");

    return 0;
}
