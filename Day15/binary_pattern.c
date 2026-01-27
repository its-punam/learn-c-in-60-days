/*
 * Program Name : Binary Pattern Printing
 * Day          : Day 15
 * Description  : This program prints a binary pattern using
 *                nested loops and conditional logic.
 *
 * Pattern:
 * 1
 * 01
 * 101
 * 0101
 * 10101
 *
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++)
    {

        // Inner loop for columns
        for (j = 1; j <= i; j++)
        {

            // Check parity of (row + column)
            if ((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
