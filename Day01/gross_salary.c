/*
 * Program Name : Gross Salary Calculation
 * Day          : Day 01
 * Description  : This program calculates the Gross Salary of an employee.
 *                Gross Salary = Basic Salary + DA (40%) + HRA (20%)
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    // Declare variables
    double basicSalary;
    double dearnessAllowance;
    double houseRentAllowance;
    double grossSalary;

    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%lf", &basicSalary);

    // Calculate allowances
    dearnessAllowance = basicSalary * 0.40;  // 40% DA
    houseRentAllowance = basicSalary * 0.20; // 20% HRA

    // Calculate gross salary
    grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;

    // Display result
    printf("Gross Salary = %.2lf\n", grossSalary);

    return 0;
}
