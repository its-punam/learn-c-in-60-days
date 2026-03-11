/*
 * Program Name : Accessing Structure Members (Book Details)
 * Day          : Day 54
 * Description  : This program creates a structure named Book
 *                containing title, author, and price. It takes
 *                input from the user and displays the details.
 * Author       : Punam
 */

#include <stdio.h>

int main(void)
{
    /* Define structure */
    struct Book
    {
        char title[50];
        char author[50];
        int price;
    };

    struct Book B1;

    printf("Enter book title: ");
    fgets(B1.title, sizeof(B1.title), stdin);

    printf("Enter author name: ");
    fgets(B1.author, sizeof(B1.author), stdin);

    printf("Enter price: ");
    scanf("%d", &B1.price);

    printf("\nBook Details\n");
    printf("Title  : %s", B1.title);
    printf("Author : %s", B1.author);
    printf("Price  : %d\n", B1.price);

    return 0;
}