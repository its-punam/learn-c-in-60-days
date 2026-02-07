/*
 * Program Name : Merge Two Sorted Arrays
 * Day          : Day 26
 * Description  : This program merges two sorted arrays
 *                into a single sorted array.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{
    int n, m, i, j, k = 0;

    printf("Enter number of elements in First and second array: ");
    scanf("%d %d", &n, &m);

    int a[n], b[m], new[n + m];

    printf("Enter elements of first sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second sorted array: ");
    for (j = 0; j < m; j++)
        scanf("%d", &b[j]);

    i = 0;
    j = 0;

    // Merge both arrays
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            new[k] = a[i];
            k++;
            i++;
        }
        else
        {
            new[k] = b[j];
            k++;
            j++;
        }
    }

    // Copy remaining elements of first array
    while (i < n)
    {
        new[k] = a[i];
        k++;
        i++;
    }

    // Copy remaining elements of second array
    while (j < m)
    {
        new[k] = b[j];
        k++;
        j++;
    }

    printf("Merged sorted array: ");
    for (i = 0; i < n + m; i++)
        printf("%d ", new[i]);

    printf("\n");

    return 0;
}
