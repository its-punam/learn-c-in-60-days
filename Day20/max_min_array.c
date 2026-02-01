/*
 * Program Name : Find Maximum and Minimum in an Array
 * Day          : Day 20
 * Description  : This program finds the maximum and minimum
 *                elements from a given array.
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int arr[100];
    int n, i;
    int max, min;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    max = min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Display result
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
