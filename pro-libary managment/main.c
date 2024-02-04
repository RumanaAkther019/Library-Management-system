
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct library {
    int id;
    char title[100];
    char author[100];
    int quantity;
    struct library*next;
} ;
struct library* head;
struct library* create_book( char *title,  char *author, int quantity) {
    struct library *new_book = (struct library *) malloc(sizeof(struct library));
    strcpy(new_book->title, title);
    strcpy(new_book->author, author);
    new_book->quantity = quantity;
    new_book->next = NULL;
    return new_book;
}


void add_book(struct library**head,  char *title,  char *author, int quantity) {
    struct library *new_book = create_book( title, author, quantity);
    new_book->next = *head;
    *head = new_book;
}


void display_books(struct library*head) {
    printf("List of Books:\n");
    struct library *current = head;
    while (current != NULL) {
        printf("Title: %s | Author: %s | Quantity: %d\n", current->title, current->author, current->quantity);
        current = current->next;
    }
}


struct library* search_book_by_title(struct library*head,  char *title) {
    struct library *current = head;
    while (current != NULL) {
        if (strcmp(current->title, title) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void main_menu(struct library **head) {
    int choice;
    while (1) {
        printf("\n--- LIBRARY MANAGEMENT SYSTEM ---\n");
        printf("1. Add New Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int  quantity;
                    char title[100], author[100];

                    printf("Enter Book Title: ");
                    scanf(" %s", title);
                    printf("Enter Book Author: ");
                    scanf(" %s", author);
                    printf("Enter Book Quantity: ");
                    scanf("%d", &quantity);
                    add_book(head,  title, author, quantity);
                }
                break;
            case 2:
                display_books(*head);
                break;
            case 3:
                {
                    char title[100];
                    printf("Enter Book Title to Search: ");
                    scanf(" %s", title);
                    struct library*book = search_book_by_title(*head, title);
                    if (book != NULL) {
                        printf(" Title: %s | Author: %s | Quantity: %d\n",  book->title, book->author, book->quantity);
                    } else {
                        printf("Book not found.\n");
                    }
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

int main() {
    struct library *head = NULL;
    main_menu(&head);
    return 0;
}
