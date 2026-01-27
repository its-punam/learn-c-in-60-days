/*
 * Program Name : Floyd's Triangle
 * Day          : Day 15
 * Description  : This program prints Floyd’s Triangle using
 *                nested loops.
 *
 * Pattern:
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 *
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int i, j;
    int num = 1;

    // Outer loop for rows
    for (i = 1; i <= 4; i++)
    {

        // Inner loop for columns
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }

        // New line after each row
        printf("\n");
    }

    return 0;
}
