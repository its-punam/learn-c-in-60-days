/*
 * Program Name : Basic Enum Declaration (Day Values)
 * Day          : Day 58
 * Description  : This program demonstrates basic enum declaration
 *                in C by creating an enum Day and printing all
 *                enum values using a loop.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    enum Day
    {
        MON,
        TUE,
        WED,
        THU,
        FRI,
        SAT,
        SUN
    };

    enum Day d;

    printf("Enum values of Day:\n");

    for (d = MON; d <= SUN; d++)
    {
        printf("Value: %d\n", d);
    }

    return 0;
}