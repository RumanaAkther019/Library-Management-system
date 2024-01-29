
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library
{
char book_name[200];
char title[100];
char authors_name [50];
int quantity;
struct Book *next;

};
 Book*new_book(char authors_name, char title,int quantity )
 {
     AddBook *new_book = (Book *) malloc(sizeof(Book));
    new_book->quantity = quantity;
    new_book->next = NULL;
    return new_book;
 }
 void add_book(Book *head, char title, char authors_name, int quantity)
 {
    Book *new_book = create_book(title, author, quantity);
    new_book->next = *head;
    head = new_book;
}
 void display_books(Book *head) {
    printf("List of Books:\n");
    Book *current = head;
    while (current != NULL) {
        printf(" %s title: \n" , current->tille);
        printf("%s authors_name:\n ",current->authors_name);
        printf("%d quantity:\n",current->quantity);
        current = current->next;
    }
}


int main(Book *head) {
    int j=0;

    while(6)
{
    printf ("-------Libary Managment System--------\n");
     printf(" 1. Add Book details\n 2. Display the list of books \n 3. Display the total no. of books\n 4. Exit\n  ");
     printf(" Enter the number of your choice:  ");
    scanf(" %d", &j);
    switch(j)
        {
             case 1:
            printf (" Add book details\n : ");
            printf(" enter the book name\n : ");
            scanf("%s",lib[i].book_name);
            printf ("Enter author name \n: ");
           scanf ("%s",lib[i].authors_name);




                case 2:

                if (count==0)
                {
                    printf(" There are no books stored\n ");
                }
                else
                {

                    printf(" You can view the list of books \n");
                    printf(" The list of books are\n: ");
                    for(i=0; i < count; i++)
                    {
                        printf("%s The name of the book is\n: ", lib[i].book_name);
                        printf("%s The name of the author is\n:  ", lib[i].authors_name);

                    }
                      }
                break;

            case 3:

                 printf("%d Total number of books in the library are \n: ", count);
                break;

            case 4:
                exit(0);
                 default:

                printf(" Invalid number entered\n");
        }

    }


}
