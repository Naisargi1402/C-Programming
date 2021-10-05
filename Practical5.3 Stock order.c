#include<stdio.h>
#include<conio.h>

int main()
{
 int order,credit;
 printf("Enter the order(more=0, Less=1): ");
 scanf("%d",&order);
 printf("Enter the credit(not ok=0, ok=1): ");
 scanf("%d",&credit);

if( order==1 && credit==1)
{
printf("We have given you your complete order.");
}
else if (order==0 && credit==1)
{
printf("We have given you a part of your order based on our stock and refunded you the remaining amount.");
}
else
{
  printf("Sorry we don't have any stock of the product you requested.");
}

return 0;
}
