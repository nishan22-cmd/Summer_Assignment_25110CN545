#include <stdio.h>

int main()
{
    int id;
    char book[50];
    char author[50];

    printf("Enter Book ID: ");
    scanf("%d", &id);

    printf("Enter Book Name: ");
    scanf("%s", book);

    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("\nBook Issued Successfully\n");

    printf("Book ID : %d\n", id);
    printf("Book    : %s\n", book);
    printf("Author  : %s\n", author);

    return 0;
}