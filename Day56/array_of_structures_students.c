/*
 * Program Name : Array of Structures (Student Records)
 * Day          : Day 56
 * Description  : This program demonstrates the use of an array of
 *                structures. It stores roll number, name, and marks
 *                of 3 students and displays their details.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    /* Define structure */
    struct Student
    {
        int roll_number;
        char name[50];
        int marks;
    };

    struct Student arr[3];

    printf("Enter details for 3 students\n");

    /* Input student details */
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &arr[i].roll_number);

        printf("Enter Name: ");
        scanf(" %[^\n]", arr[i].name);   // reads full name including spaces

        printf("Enter Marks: ");
        scanf("%d", &arr[i].marks);
    }

    /* Display student details */
    printf("\nStudent Details\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", arr[i].roll_number);
        printf("Name        : %s\n", arr[i].name);
        printf("Marks       : %d\n", arr[i].marks);
    }

    return 0;
}