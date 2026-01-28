/*
 * Program Name : Center Star Pyramid
 * Day          : Day 16
 * Description  : This program prints a centered pyramid
 *                of stars using nested loops.
 *
 * Pattern:
 *       *
 *      ***
 *     *****
 *    *******
 *   *********
 *
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int i, j, space;
    int rows = 5;

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {

        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
