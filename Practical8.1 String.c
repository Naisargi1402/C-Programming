#include<stdio.h>

int main()
{
     int n,i,ni=0,nc=0,ns=0;
     printf("Enter the length of String: ");
     scanf("%d",&n);
     getchar();
     char a[n];
     printf("Enter the String: \n");
       scanf("%[^\n]s",a);

     for(i=0;a[i]!='\0';i++)
     {

          if(a[i]>=48 && a[i]<=57)
             ni++;

          else if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
             nc++;
          else
               ns++;
     }

     printf("Number of integers :%d\nNumber of characters: %d\nNumber of special characters: %d",ni,nc,ns);
     return 0;
}
