/*
 * Program Name : Linear Search Using Recursion
 * Day          : Day 37
 * Description  : This program searches for an element in an array
 *                using recursive linear search.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function for linear search */
int linearSearch(int a[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;      /* Base condition: element not found */
    }

    if (a[i] == key)
    {
        return i;       /* Element found */
    }

    return linearSearch(a, n, i + 1, key);
}

int main(void)
{
    int i, n, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = linearSearch(a, n, 0, key);

    if (pos == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found at index %d\n", pos);
    }

    return 0;
}
