/*
 * Program Name : Simple Interest Calculation
 * Day          : Day 01 - S
 * Description  : This program calculates Simple Interest using the formula:
 *                SI = (Principal × Rate × Time) / 100
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    // Declare variables
    float principal; // Principal amount
    int time;        // Time in years
    float rate;      // Rate of interest
    float simpleInterest;

    // Assign values
    principal = 5000.44; // Principal amount in currency
    time = 3;            // Time in years
    rate = 8.5;          // Rate of interest in percentage

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Print the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}