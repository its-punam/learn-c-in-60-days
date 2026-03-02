/*
 * Program Name : Print Each Character of String on New Line
 * Day          : Day 46
 * Description  : This program prints each character of a string
 *                on a new line using recursion.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to print characters */
void printChar(char str[], int i)
{
    if (str[i] == '\0')
    {
        return;     /* Base condition */
    }

    printf("%c\n", str[i]);

    printChar(str, i + 1);
}

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);   /* Limit input to avoid overflow */

    printChar(str, 0);

    return 0;
}