/*
 * Program Name : Hollow Diamond Pattern
 * Day          : Day 18
 * Description  : This program prints a hollow diamond pattern
 *                using nested loops and conditional logic.
 *
 * Pattern:
 *    *
 *   * *
 *  *   *
 *   * *
 *    *
 *
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int i, j, space;
    int rows = 3;

    // Upper half of hollow diamond
    for (i = 1; i <= rows; i++) {

        // Print leading spaces
        for (space = 1; space <= rows - i + 1; space++) {
            printf(" ");
        }

        // Print stars and inner spaces
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // Lower half of hollow diamond
    for (i = rows - 1; i >= 1; i--) {

        // Print leading spaces
        for (space = 1; space <= rows - i + 1; space++) {
            printf(" ");
        }

        // Print stars and inner spaces
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
