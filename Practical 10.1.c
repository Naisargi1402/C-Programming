#include<stdio.h>

struct book
{
     char title[30], author[30];
     float price;
}b1;

void findbook(struct book);

void main()
{
     struct book b1,b2;
     printf("\nEnter Details of Book 1: ");
     printf("\nEnter Book title: ");
     gets(b1.title);
     fflush(stdin);

     printf("\nEnter author name: ");
     gets(b1.author);
     fflush(stdin);

     printf("\nEnter book price: ");
     scanf("%f",&b1.price);
     fflush(stdin);

     findbook(b1);
}

void findbook(struct book b2)
{

     printf("\nBook title :");
     puts(b2.title);

     printf("\nAuthor name :");
     puts(b2.author);

     printf("\nBook price: %f",b2.price);
}
