#include<stdio.h>
#include<conio.h>

int main()
{
int DecimalNumber;
printf("Enter a decimal number: ");
scanf("%d",&DecimalNumber);

printf(" The Decimal number is : %d\n",DecimalNumber);
printf(" The Hexa Decimal Number of the number %d is : %X\n ",DecimalNumber,DecimalNumber);
printf(" The Octa Decimal Number of the  number %d is : %O\n",DecimalNumber,DecimalNumber);
return 0;
}
