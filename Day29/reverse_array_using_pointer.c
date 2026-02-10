/*
 * Program Name : Reverse Array Using Pointers
 * Day          : Day 29
 * Description  : This program reverses an array in place
 *                using pointers without using any extra array.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    int i, n;
    int *start, *end;
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    start = arr;           /* Points to first element */
    end = &arr[n - 1];     /* Points to last element */

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
