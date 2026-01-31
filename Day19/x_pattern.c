/*
 * Program Name : X Pattern
 * Day          : Day 19
 * Description  : This program prints an X-shaped pattern
 *                using nested loops and conditional logic.
 *
 * Pattern:
 * *   *
 *  * *
 *   *
 *  * *
 * *   *
 *
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int i, j;
    int n = 5;

    // Outer loop for rows
    for (i = 1; i <= n; i++) {

        // Inner loop for columns
        for (j = 1; j <= n; j++) {

            // Print stars on both diagonals
            if (j == i || j == (n - i + 1))
                printf("*");
            else
                printf(" ");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
