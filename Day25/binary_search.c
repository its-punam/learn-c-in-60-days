/*
 * Program Name : Implement Binary Search
 * Day          : Day 25
 * Description  : This program implements binary search on a
 *                sorted array to find a given element.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{
    int n, i, key, low = 0, mid, found = 0;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elemnets in ascending order\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int high = n - 1;

    printf("Enter the element to search:\n");
    scanf("%d", &key);

    // Binary search logic
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found == 0)
        printf("Element is not found.\n");

    return 0;
}
