/*
 * Program Name : Count Number of Lines in a File
 * Day          : Day 51
 * Description  : This program counts the total number of lines
 *                present in a file using fgets() function.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char buffer[100];
    int line = 0;

    /* Open file in read mode */
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    /* Read file line by line */
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        line++;
    }

    fclose(fp);

    printf("Total number of lines = %d\n", line);

    return 0;
}