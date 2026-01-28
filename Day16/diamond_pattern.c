/*
 * Program Name : Diamond Pattern
 * Day          : Day 16
 * Description  : This program prints a diamond-shaped star
 *                pattern using nested loops.
 *
 * Pattern:
 *    *
 *   ***
 *  *****
 *   ***
 *    *
 *
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int i, j, space;
    int rows = 3;

    // Upper half of diamond
    for (i = 1; i <= rows; i++) {

        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of diamond
    for (i = rows - 1; i >= 1; i--) {

        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
