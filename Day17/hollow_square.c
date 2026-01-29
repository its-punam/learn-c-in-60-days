/*
 * Program Name : Hollow Square Pattern
 * Day          : Day 17
 * Description  : This program prints a hollow square pattern
 *                using nested loops and conditional checks.
 *
 * Pattern:
 * *****
 * *   *
 * *   *
 * *   *
 * *****
 *
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int i, j;
    int size = 5;

    // Outer loop for rows
    for (i = 1; i <= size; i++) {

        // Inner loop for columns
        for (j = 1; j <= size; j++) {

            // Print stars on borders, spaces inside
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        // New line after each row
        printf("\n");
    }

    return 0;
}
