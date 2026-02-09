/*
 * Program Name : Swap Two Numbers Using Pointers
 * Day          : Day 28
 * Description  : This program swaps two numbers using pointers
 *                without using return values.
 * Author       : Punam
 */

#include <stdio.h>

/* Function to swap two numbers using pointers */
void swap(int *x, int *y);

int main(void)
{
    int a = 10;
    int b = 15;

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a, &b);

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

/* Swap logic */
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
