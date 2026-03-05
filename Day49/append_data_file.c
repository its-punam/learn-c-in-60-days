/*
 * Program Name : Append Data to File Without Deleting Old Data
 * Day          : Day 49
 * Description  : This program appends new data to an existing file
 *                without deleting the old content using file
 *                append mode ("a").
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char data[100];

    /* Open file in append mode */
    fp = fopen("student.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter data to append: ");
    fgets(data, sizeof(data), stdin);

    /* Write data to file */
    fputs(data, fp);

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}