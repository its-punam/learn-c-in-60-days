/*
 * Program Name : Gross Salary Calculation using If-Else
 * Day          : Day 08
 * Description  : This program calculates the Gross Salary of an employee
 *                based on the following rules:
 *                - If Basic Salary < 1500:
 *                    HRA = 10% of Basic Salary
 *                    DA  = 90% of Basic Salary
 *                - Else:
 *                    HRA = Rs. 500
 *                    DA  = 98% of Basic Salary
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    float basicSalary;
    float grossSalary;
    float da, hra;

    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    // Apply salary rules using if-else
    if (basicSalary < 1500) {
        hra = basicSalary * 0.10;   // 10% HRA
        da  = basicSalary * 0.90;   // 90% DA
    } else {
        hra = 500;                  // Fixed HRA
        da  = basicSalary * 0.98;   // 98% DA
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Display result
    printf("Gross Salary = Rs. %.2f\n", grossSalary);

    return 0;
}
