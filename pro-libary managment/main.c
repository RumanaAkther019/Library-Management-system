
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library
{
char book_name[200];
char title[100];
char authors_name [50];
int quantity;
struct library *next;

};
struct library*head;
 struct library *create_book(char title[], char authors_name[], int quantity)

 {
    struct library *new_book = (struct library *)malloc(sizeof(struct library));
    new_book->quantity = quantity;
    new_book->next = NULL;
    return new_book;
 }
 void add_book(struct library **head, char title[], char authors_name[], int quantity)
{
    struct library *new_book = create_book(title, authors_name, quantity);
    new_book->next = *head;
    *head = new_book;
}
 void display_books(struct library *head,char title[],char authors_name[]) {
    printf("List of Books:\n");
    struct library*current = head;
    while (current != NULL)
    {
        printf("Title: %s\n", current->book_name);
        printf("Author: %s\n", current->authors_name);
        printf("Quantity: %d\n", current->quantity);
        current = current->next;
    }
}

int main( ) {
   struct library *head = NULL;
    int j;

    while (1)
    {
        printf("-------Library Management System--------\n");
        printf("1. Add Book details\n2. Display the list of books\n3. Display the total no. of books\n4. Exit\n");
        printf("Enter the number of your choice: ");
        scanf("%d", &j);

        switch (j)
        {
        case 1:
            printf("Add book details:\n");
            char title[200], authors_name[50];
            int quantity;
            printf("Enter the book name: ");
            scanf("%s", title);
            printf("Enter author name: ");
            scanf("%s", authors_name);
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            add_book(&head, title, authors_name, quantity);
            break;

        case 2:
            display_books(head,title,authors_name);
            break;

        case 3:
             printf("%d Total number of books in the library are \n:");
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid number entered\n");
        }
    }

    return 0;
}
