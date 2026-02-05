/*
 * Program Name : Rotate Array Left by 1 Position
 * Day          : 24
 * Description  : This program rotates the elements of an array
 *                to the left by one position.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Store first element
    temp = a[0];

    // Shift elements to the left
    for (i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Place first element at the end
    a[n - 1] = temp;

    printf("Array rotated to left by 1 position\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
