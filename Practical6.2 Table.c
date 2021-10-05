#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c;

printf("Enter the value: ");
scanf("%d",&a);

while(b<10)
{
     b++;
     c=a*b;
     printf("%d*%d=%d\n",a,b,c);
}


return 0;
}
