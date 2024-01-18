
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
     printf(" Enter the number of your choice: ");
    scanf(" %d", &j);

    }


}
