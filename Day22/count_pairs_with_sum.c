/*
 * Program Name : Count Pairs with Given Sum
 * Day          : Day 22
 * Description  : This program counts the number of pairs
 *                in an array whose sum is equal to a given value.
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int n, i, j, sum;
    int count = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input required sum
    printf("Enter the required sum: ");
    scanf("%d", &sum);

    // Count pairs with given sum
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                count++;
            }
        }
    }

    // Display result
    if (count == 0) {
        printf("No pair found with given sum\n");
    } else {
        printf("Number of pairs with sum %d = %d\n", sum, count);
    }

    return 0;
}
