/*
 * Program Name : Sum of Array Elements Using Recursion
 * Day          : Day 36
 * Description  : This program calculates the sum of array
 *                elements using recursion instead of loops.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to calculate sum of array */
int sumArray(int arr[], int n, int i)
{
    if (i == n)
    {
        return 0;      /* Base condition */
    }

    return arr[i] + sumArray(arr, n, i + 1);
}

int main(void)
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum of array elements is: %d\n", sumArray(arr, n, 0));

    return 0;
}
