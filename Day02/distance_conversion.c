/*
 * Program Name : Distance Conversion
 * Day          : Day 02
 * Description  : This program converts distance between two cities
 *                from kilometers into meters, centimeters, and feet.
 * Author       : Punam
 */

#include <stdio.h>

int main()
{

    // Declare variables
    float distanceKm;
    float distanceMeters;
    float distanceCentimeters;
    float distanceFeet;

    // Input distance in kilometers
    printf("Enter distance between two cities (in km): ");
    scanf("%f", &distanceKm);

    // Convert distance
    distanceMeters = distanceKm * 1000;        // 1 km = 1000 meters
    distanceCentimeters = distanceKm * 100000; // 1 km = 100000 centimeters
    distanceFeet = distanceKm * 3280.84;       // 1 km = 3280.84 feet

    // Display results
    printf("\nDistance in meters       = %.2f m", distanceMeters);
    printf("\nDistance in centimeters  = %.2f cm", distanceCentimeters);
    printf("\nDistance in feet         = %.2f ft\n", distanceFeet);

    return 0;
}
