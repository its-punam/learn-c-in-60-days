/*
 * Program Name : Find Duplicate Elements in an Array
 * Day          : Day 21
 * Description  : This program finds and prints duplicate
 *                elements in an integer array.
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int arr[100];
    int n, i, j;
    int foundDuplicate = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find duplicate elements
    printf("Duplicate elements are:\n");
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                foundDuplicate = 1;
                break;   // Avoid printing same duplicate multiple times
            }
        }
    }

    if (!foundDuplicate) {
        printf("No duplicate elements found\n");
    }

    return 0;
}
