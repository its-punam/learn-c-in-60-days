/*
 * Program Name : Menu-Driven Calculator
 * Day          : Day 09
 * Description  : This program performs basic arithmetic operations
 *                (Addition, Subtraction, Multiplication, Division)
 *                based on the user's choice using switch-case.
 *
 *                1. Add
 *                2. Subtract
 *                3. Multiply
 *                4. Divide
 *
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    int choice;
    float num1, num2, result;

    // Display menu
    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    // Input choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation based on choice
    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Result = %.2f\n", result);
        break;

    case 2:
        result = num1 - num2;
        printf("Result = %.2f\n", result);
        break;

    case 3:
        result = num1 * num2;
        printf("Result = %.2f\n", result);
        break;

    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result = %.2f\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;

    default:
        printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}
