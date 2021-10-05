#include<stdio.h>
#include<conio.h>

void main()
{
     int Year;
     printf("Enter the Year: ");
     scanf("%d",&Year);
     if(Year%4==0 && Year%100==0 && Year%400==0)
     {
          printf("This year is a leap Year!");
     }
     else if(Year%4==0 && Year%100!=0)
     {
          printf("This year is a leap Year!");
     }
     else if(Year%4==0 && Year%100==0 && Year%400!=0)
     {
          printf("This year is not a leap Year!");
     }
     else
     {
          printf("This year is not a leap Year!");
     }
getch();
}
