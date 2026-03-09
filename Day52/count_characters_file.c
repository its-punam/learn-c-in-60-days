/*
 * Program Name : Count Number of Characters in a File
 * Day          : Day 52
 * Description  : This program reads the contents of a file and
 *                counts the total number of characters using
 *                the fgetc() function.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char ch;
    int count = 0;

    /* Open file in read mode */
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    /* Read each character until EOF */
    while ((ch = fgetc(fp)) != EOF)
    {
        count++;
    }

    fclose(fp);

    printf("Total number of characters = %d\n", count);

    return 0;
}