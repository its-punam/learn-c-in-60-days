/*
 * Program Name : Area of Triangle using Heron's Formula
 * Day          : Day 07
 * Description  : This program calculates the area of a triangle
 *                when the lengths of its three sides are given,
 *                using Heron's formula.
 * Author       : Punam
 */

#include <stdio.h>
#include <math.h>

int main() {

    // Declare variables
    float a, b, c;     // Sides of triangle
    float s;           // Semi-perimeter
    float area;        // Area of triangle

    // Input sides of triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display result
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
