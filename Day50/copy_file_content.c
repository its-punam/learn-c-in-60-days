/*
 * Program Name : Copy Content from One File to Another
 * Day          : Day 50
 * Description  : This program copies the contents of one file
 *                to another file using C file handling functions.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    FILE *source, *destination;
    char ch;

    /* Open source file in read mode */
    source = fopen("student.txt", "r");

    /* Open destination file in write mode */
    destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    /* Read characters from source and write to destination */
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}