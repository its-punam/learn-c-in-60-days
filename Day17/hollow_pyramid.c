/*
 * Program Name : Hollow Pyramid Pattern
 * Day          : Day 17
 * Description  : This program prints a hollow pyramid pattern
 *                using nested loops and conditional logic.
 *
 * Pattern:
 *     *
 *    * *
 *   *   *
 *  *******
 *
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int i, j, space;
    int rows = 4;

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {

        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars and spaces inside pyramid
        for (j = 1; j <= (2 * i - 1); j++) {

            // Print stars at boundaries or base
            if (j == 1 || j == (2 * i - 1) || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
