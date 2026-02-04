/*
 * Program Name : Count Frequency of Each Element
 * Day          : Day 23
 * Description  : This program counts the frequency of each
 *                element in an array using an auxiliary array.
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int n, i, j, count;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    // Input array and initialize frequency array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;   // Mark all as unvisited
    }

    // Count frequency
    for (i = 0; i < n; i++) {
        if (freq[i] == -1) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;   // Mark duplicate as counted
                }
            }
            freq[i] = count;
        }
    }

    // Display result
    printf("\nElement   Frequency\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t   %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
