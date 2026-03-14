/*
 * Program Name : Passing Structure to Function (Rectangle Area)
 * Day          : Day 57
 * Description  : This program demonstrates how to pass a structure
 *                to a function by value and calculate the area
 *                of a rectangle.
 * Author       : Punam
 */

#include <stdio.h>

/* Define structure */
struct Rectangle
{
    float length;
    float breadth;
};

/* Function to calculate area by passing structure by value */
float calculateArea(struct Rectangle r)
{
    return r.length * r.breadth;
}

int main(void)
{
    struct Rectangle rect;
    float area;

    printf("Enter length: ");
    scanf("%f", &rect.length);

    printf("Enter breadth: ");
    scanf("%f", &rect.breadth);

    area = calculateArea(rect);

    printf("Area of rectangle = %.2f\n", area);

    return 0;
}