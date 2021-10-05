#include<stdio.h>
#include<conio.h>

int main()
{
float Profit,SellingPrice,CostPrice,Loss,NetPrice;

printf("Enter the CostPrice: ");
scanf("%f",&CostPrice);
printf("Enter the SellingPrice: ");
scanf("%f",&SellingPrice);

if (SellingPrice<=0 || CostPrice<=0)
{
     printf("Enter appropriate value."); goto L1;
}

NetPrice=SellingPrice-CostPrice;

if (NetPrice>0)
{
     printf("You have made Profit!\nProfit = %.1f",NetPrice);
}
else if (NetPrice<0)
{
     Loss=CostPrice-SellingPrice;
     printf("You have made Loss!\nLoss = %.1f",Loss);
}
else
{
   printf("You have made no profit, no Loss!");
}
L1:
return 0;
}
