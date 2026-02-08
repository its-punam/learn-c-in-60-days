/*
 * Program Name : Pass Array to Function and Find Sum
 * Day          : Day 27
 * Description  : This program demonstrates how to pass an array
 *                to a function and calculate the sum of its elements.
 * Author       : Punam
 */

#include <stdio.h>

/* Function to calculate sum of array elements */
int sumArray(int a[], int size)
{
    int i;
    int sum = 0;

    for (i = 0; i < size; i++)
    {
        sum += a[i];
    }

    return sum;
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

    printf("Sum of array is: %d\n", sumArray(a, n));

    return 0;
}
