/*
 * Program Name : Replace All Occurrences of a Character (Recursion)
 * Day          : Day 47
 * Description  : This program replaces all occurrences of a
 *                specific character in a string using recursion.
 * Author       : Punam
 */

#include <stdio.h>

/* Recursive function to replace characters */
void replaceChar(char str[], char oldChar, char newChar, int i)
{
    if (str[i] == '\0')
    {
        return;     /* Base condition */
    }

    if (str[i] == oldChar)
    {
        str[i] = newChar;
    }

    replaceChar(str, oldChar, newChar, i + 1);
}

int main(void)
{
    char str[100];
    char oldChar, newChar;

    printf("Enter a string: ");
    scanf("%99s", str);   /* Prevent overflow */

    printf("Enter character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter new character: ");
    scanf(" %c", &newChar);

    replaceChar(str, oldChar, newChar, 0);

    printf("Modified string: %s\n", str);

    return 0;
}