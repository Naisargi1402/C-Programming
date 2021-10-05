#include<stdio.h>

int Binary(int num)
{
     if (num==0)
     {
          return 0;
     }

     else
     {
          return ((num%2)+10*Binary(num/2));
     }

}
void main()
{
     int n;

     printf("Enter the number: ");
     scanf("%d",&n);

     printf("%d",Binary(n));

}
