#include<stdio.h>
union library
{
     char title[30], author[20];
     float price;
     long int accessionNo;
     int flag;
};

void main()
{
     union library b1;
     printf("\nEnter Details of Book 1: ");

     printf("\nEnter Book title: ");
     gets(b1.title);
     printf("Book title:");
     puts(b1.title);
     fflush(stdin);

     printf("\nEnter Book author: ");
     gets(b1.author);
     printf("Book author:");
     puts(b1.title);
     fflush(stdin);

     printf("\nEnter Book price: ");
     scanf("%f",&b1.price);
     printf("Book price: %f",b1.price);
     fflush(stdin);

     printf("\n\nEnter Book accession number: ");
     scanf("%ld",&b1.accessionNo);
     printf("Book accession number: %ld",b1.accessionNo);
     fflush(stdin);

     printf("\n\nflag = 1 if book is issued and \nflag = 0 if book is not issued \nEnter flag: ");
     scanf("%d",&b1.flag);
     printf("\nFlag = %d",b1.flag);

     if(b1.flag==0)
          printf("\nBook not issued.\n\n\n");

     if (b1.flag==1)
          printf("\nBook is issued.\n\n\n");

}
