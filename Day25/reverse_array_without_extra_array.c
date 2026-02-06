/*
 * Program Name : Reverse an Array Without Using Extra Array
 * Day          : Day 25
 * Description  : This program reverses the elements of an array
 *                in place without using any extra array.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Reverse array using swapping
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("Reverse array is\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
