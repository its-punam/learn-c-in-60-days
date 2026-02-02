/*
 * Program Name : Sort Array in Ascending Order
 * Day          : Day 21
 * Description  : This program sorts an array of integers
 *                in ascending order using a simple sorting logic.
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int arr[100];
    int n, i, j, temp;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting logic (Ascending order)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
