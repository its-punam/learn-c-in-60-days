/*
 * Program Name : Remove Spaces from String Using Recursion
 * Day          : Day 40
 * Description  : This program removes all spaces from a string
 *                using recursion without creating a new string.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to remove spaces */
void removeSpaces(char str[], int i)
{
    if (str[i] == '\0')
    {
        return;    /* Base condition */
    }

    if (str[i] == ' ')
    {
        int j = i;

        /* Shift characters left */
        while (str[j] != '\0')
        {
            str[j] = str[j + 1];
            j++;
        }

        removeSpaces(str, i);  /* Re-check same index */
    }
    else
    {
        removeSpaces(str, i + 1);
    }
}

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeSpaces(str, 0);

    printf("String without spaces: %s\n", str);

    return 0;
}
