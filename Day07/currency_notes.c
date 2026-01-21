/* Program Name : Currency Notes Calculation
 * Day          : Day 07
 * Description  : This program calculates the minimum number of
 *                currency notes required for a given amount.
 *                Notes available: 100, 50, 10, 5, 2, and 1.
 * Author       : Punam    */
#include <stdio.h>
int main() {

    int amount;
    int n100, n50, n10, n5, n2, n1;

    // Input amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate number of notes
    n100 = amount / 100;
    amount %= 100;

    n50 = amount / 50;
    amount %= 50;

    n10 = amount / 10;
    amount %= 10;

    n5 = amount / 5;
    amount %= 5;

    n2 = amount / 2;
    amount %= 2;

    n1 = amount;   // remaining amount (1-rupee notes)

    // Display result
    printf("\nCurrency Notes Required:\n");
    printf("100 x %d\n", n100);
    printf("50  x %d\n", n50);
    printf("10  x %d\n", n10);
    printf("5   x %d\n", n5);
    printf("2   x %d\n", n2);
    printf("1   x %d\n", n1);

    return 0;
}
