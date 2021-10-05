#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c;

printf("Enter the value: ");
scanf("%d",&a);

L1:
if (b<10)
{
     b++;
     c=a*b;
     printf("%d * %2d  = %d\n",a,b,c);
     goto L1;
}


return 0;
}
