/*
 * Program Name : Check if Array is Sorted Using Recursion
 * Day          : Day 38
 * Description  : This program checks whether an array
 *                is sorted in ascending order using recursion.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to check sorted order */
int isSorted(int a[], int n, int i)
{
    if (i == n - 1)
    {
        return 1;   /* Base condition: reached end */
    }

    if (a[i] > a[i + 1])
    {
        return 0;   /* Not sorted */
    }

    return isSorted(a, n, i + 1);
}

int main(void)
{
    int i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (isSorted(a, n, 0))
    {
        printf("Array is sorted.\n");
    }
    else
    {
        printf("Array is not sorted.\n");
    }

    return 0;
}
