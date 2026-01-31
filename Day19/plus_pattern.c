/*
 * Program Name : Plus Pattern
 * Day          : Day 19
 * Description  : This program prints a plus (+) pattern
 *                using nested loops and conditional logic.
 *
 * Pattern:
 *   *
 *   *
 * *****
 *   *
 *   *
 *
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int i, j;
    int n = 5;
    int mid = n / 2 + 1;

    // Outer loop for rows
    for (i = 1; i <= n; i++) {

        // Inner loop for columns
        for (j = 1; j <= n; j++) {

            // Print star at middle row or middle column
            if (i == mid || j == mid)
                printf("*");
            else
                printf(" ");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
