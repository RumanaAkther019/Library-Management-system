
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library
{
char book_name[200];
char authors_name [50];
};


int main()
{
    struct library lib[100];
    char book_name[100];
    int i, j, count;
    i = 0;
    j = 0;
    count = 0;
    while(j!=6)
    {

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
