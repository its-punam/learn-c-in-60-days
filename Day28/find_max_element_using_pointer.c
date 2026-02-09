/*
 * Program Name : Find Maximum Element Using Pointer
 * Day          : Day 28
 * Description  : This program finds the largest element in an array
 *                using pointers instead of array indexing.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    int i, n;
    int arr[100];
    int max;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    p = arr;        /* Pointer points to first element */
    max = *p;       /* Assume first element is maximum */

    for (i = 0; i < n; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    printf("The largest element in array is: %d\n", max);

    return 0;
}
