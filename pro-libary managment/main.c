
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library
{
char book_name[200];
char authors_name [50];
float price;
int page;
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
           printf ("Enter  the price of books \n: ");
         scanf ("%f",&lib[i].price);
          printf ("Enter pages \n: ");
          scanf ("%d",&lib[i].page);



                case 2:

                if (count==0)
                {
                    printf(" \nThere are no books stored ");
                }
                else
                {

                    printf(" \nYou can view the list of books ");
                    printf(" \nThe list of books are: ");
                    for(i=0; i < count; i++)
                    {
                        printf("%s \nThe name of the book is: ", lib[i].book_name);
                        printf("%s \nThe name of the author is:  ", lib[i].authors_name);
                        printf(" %d\nThe number of pages are:  ", lib[i].page);
                        printf(" %f\nThe price of the book is:  ", lib[i].price);
                    }
                      }
                break;

            case 3:

                 printf("%d \nTotal number of books in the library are: ", count);
                break;

            case 4:
                exit(0);
                 default:

                printf(" \nInvalid number entered");
        }

    }


}
