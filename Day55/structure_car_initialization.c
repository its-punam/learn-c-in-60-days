/*
 * Program Name : Structure Declaration and Initialization (Car Details)
 * Day          : Day 55
 * Description  : This program demonstrates how to declare a structure
 *                named Car, initialize its members, and display the
 *                car details.
 * Author       : Punam
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    /* Declare structure */
    struct Car
    {
        char brand[20];
        int year;
        int price;
    };

    /* Initialize structure variable */
    struct Car C1;

    strcpy(C1.brand, "BMW");
    C1.year = 2001;
    C1.price = 4500000;

    printf("Car Details\n");
    printf("Brand : %s\n", C1.brand);
    printf("Year  : %d\n", C1.year);
    printf("Price : %d\n", C1.price);

    return 0;
}