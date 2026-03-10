/*
 * Program Name : Store Student Name and Marks in File
 * Day          : Day 53
 * Description  : This program takes student name and marks
 *                as input and stores them in a file using
 *                file handling functions in C.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int marks;
    char name[100];

    /* Open file in write mode */
    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter marks: ");
    scanf("%d", &marks);

    /* Write data to file */
    fprintf(fp, "Student Name: %s", name);
    fprintf(fp, "Marks: %d\n", marks);

    fclose(fp);

    printf("Data stored successfully in file.\n");

    return 0;
}