#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,i=1,sum=1;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);

while(i<=b)
{
  sum=sum*a;
  i++;

}

printf("%d",sum);
return 0;
}
