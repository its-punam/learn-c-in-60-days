/*
 * Program Name : Copy String Using Pointers
 * Day          : Day 29
 * Description  : This program copies one string to another
 *                using pointers without using strcpy().
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    char source[100];
    char destination[100];
    char *s;
    char *d;

    printf("Enter a string: ");
    scanf("%s", source);

    s = source;
    d = destination;

    while (*s != '\0')
    {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';   /* Add null terminator */

    printf("Copied string: %s\n", destination);

    return 0;
}
