/*
 * Program Name : Binary Search Using Recursion
 * Day          : Day 41
 * Description  : This program searches for an element in a
 *                sorted array using recursive binary search.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive Binary Search Function */
int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
    {
        return -1;    /* Base condition: not found */
    }

    int mid = low + (high - low) / 2;   /* Safer mid calculation */

    if (arr[mid] == key)
    {
        return mid;   /* Element found */
    }

    if (key < arr[mid])
    {
        return binarySearch(arr, low, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, high, key);
    }
}

int main(void)
{
    int n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
