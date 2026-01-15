/*
 * Program Name : Aggregate and Percentage Calculation
 * Day          : Day 03
 * Description  : This program calculates the aggregate marks and
 *                percentage of a student based on marks in 5 subjects.
 *                Each subject is assumed to be out of 100.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    // Declare variables
    float m1, m2, m3, m4, m5; // Marks of 5 subjects
    float aggregate;
    float percentage;

    // Input marks
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate aggregate
    aggregate = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    percentage = (aggregate / 500) * 100;

    // Display results
    printf("Aggregate Marks = %.2f\n", aggregate);
    printf("Percentage      = %.2f%%\n", percentage);

    return 0;
}
