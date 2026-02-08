/*
 * Program Name : Pass Array to Function and Print Elements
 * Day          : Day 27
 * Description  : This program demonstrates how to pass an array
 *                to a function and print its elements.
 * Author       : Punam
 */

#include <stdio.h>

/* Function to print array elements */
void printArray(int a[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

int main(void)
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are: ");
    printArray(a, n);

    printf("\n");

    return 0;
}
