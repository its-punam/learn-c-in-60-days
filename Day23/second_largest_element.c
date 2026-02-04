/*
 * Program Name : Find Second Largest Element in an Array
 * Day          : Day 23
 * Description  : This program finds the second largest
 *                element in an integer array.
 * Author       : Punam
 */

#include <stdio.h>
#include <limits.h>

int main() {

    int n, i;
    int largest, second;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Edge case: need at least 2 elements
    if (n < 2) {
        printf("Second largest element does not exist\n");
        return 0;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    largest = second = INT_MIN;

    // Find largest and second largest
    for (i = 0; i < n; i++) {

        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    // Check if second largest exists
    if (second == INT_MIN) {
        printf("Second largest element does not exist\n");
    } else {
        printf("Second largest element in the array is %d\n", second);
    }

    return 0;
}
