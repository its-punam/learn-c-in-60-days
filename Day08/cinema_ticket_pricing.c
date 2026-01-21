/*
 * Program Name : Cinema Ticket Pricing using Nested if-else.
 * Day          : Day 08
 * Description  : This program determines the ticket category
 *                based on the age of a person.
 *
 *                Age < 12        -> Child
 *                Age 12 to 59    -> Adult
 *                Age 60 or above -> Senior Citizen
 *
 * Author       : Punam
 */

#include <stdio.h>

int main() {

    int age;

    // Input age
    printf("Enter age: ");
    scanf("%d", &age);

    // Determine ticket category
    if (age < 12) {
        printf("Ticket Category: Child\n");
    }
    else if (age < 60) {
        printf("Ticket Category: Adult\n");
    }
    else {
        printf("Ticket Category: Senior Citizen\n");
    }

    return 0;
}
