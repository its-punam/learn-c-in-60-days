/*
 * Program Name : Print Numbers with Odd-Even Modification Using Mutual Recursion
 * Day          : Day 32
 * Description  : This program prints numbers from 1 to 10 such that:
 *                - If number is odd, print (number + 1)
 *                - If number is even, print (number - 1)
 *                It uses mutual recursion between two functions.
 * Author       : Punam
 */

#include <stdio.h>

/* Global variable */
int n = 1;

/* Function to handle odd numbers */
void odd(void);

/* Function to handle even numbers */
void even(void);

void odd(void)
{
    if (n <= 10)
    {
        printf("%d ", n + 1);
        n++;
        even();
    }
}

void even(void)
{
    if (n <= 10)
    {
        printf("%d ", n - 1);
        n++;
        odd();
    }
}

int main(void)
{
    odd();
    printf("\n");

    return 0;
}
