/*
 * Program Name : Move All Zeroes to the End
 * Day          : 24
 * Description  : This program moves all zero elements
 *                of an array to the end while maintaining
 *                the order of non-zero elements.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{
    int n, i, j = 0, count = 0;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    int a[n], newArr[n];

    printf("Enter elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Copy non-zero elements to new array
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            newArr[j] = a[i];
            j++;
        }
    }

    // Fill remaining positions with zero
    for (i = j; i < n; i++)
    {
        newArr[i] = 0;
    }

    printf("Array after moving all zero at end:\n");
    for (i = 0; i < n; i++)
        printf("%d ", newArr[i]);

    return 0;
}
