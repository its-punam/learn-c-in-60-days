/*
 * Program Name : Sum of Elements of an Array
 * Day          : Day 20
 * Description  : This program reads elements into an array
 *                and calculates the sum of all elements.
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int arr[100];
    int n, i;
    int sum = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display result
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
