/*
 * Program Name : Find Common Elements Between Two Arrays
 * Day          : Day 22
 * Description  : This program finds and prints the common
 *                elements present in two arrays.
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int n1, n2, i, j;
    int found = 0;

    // Input sizes of arrays
    printf("Enter number of elements in first and second array: ");
    scanf("%d %d", &n1, &n2);

    int arr1[n1], arr2[n2];

    // Input first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find common elements
    printf("Common elements between the two arrays are:\n");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break;   // Avoid duplicate prints for same element
            }
        }
    }

    if (!found) {
        printf("No common elements found");
    }

    printf("\n");

    return 0;
}
