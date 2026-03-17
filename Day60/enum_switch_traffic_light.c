/*
 * Program Name : Enum with Switch Case (Traffic Light)
 * Day          : Day 60
 * Description  : This program demonstrates the use of enum with
 *                switch case. It takes user input for traffic light
 *                signal and prints the corresponding action.
 * Author       : Punam
 */

#include <stdio.h>

/* Define enum */
enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main(void)
{
    int input;

    printf("Enter 0 for RED, 1 for YELLOW, 2 for GREEN: ");
    scanf("%d", &input);

    switch (input)
    {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Ready\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid input\n");
    }

    return 0;
}