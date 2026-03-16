/*
 * Program Name : Enum with Custom Values
 * Day          : Day 59
 * Description  : This program demonstrates how to create an enum
 *                with custom integer values and print them.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    enum Status
    {
        SUCCESS = 1,
        ERROR = 404,
        NOT_FOUND = 500
    };

    printf("SUCCESS   = %d\n", SUCCESS);
    printf("ERROR     = %d\n", ERROR);
    printf("NOT_FOUND = %d\n", NOT_FOUND);

    return 0;
}