#include<stdio.h>
#include<conio.h>

int main()
{
     int i,Positive=0,Negetive=0,Even=0,Odd=0,Numbers[25];

     for(i=1;i<=25;i++)
     {
         printf("Enter the number %d: ",i);
         scanf("%d",&Numbers[i-1]);
     }

      for(i=0;i<25;i++)
      {

          if(Numbers[i]<0)
              Negetive++;

         if(Numbers[i]>=0)
              Positive++;

         if(Numbers[i]%2==0)
              Even++;

         if(Numbers[i]%2!=0)
              Odd++;

      }

     printf("Total positive Numbers are: %d\n",Positive);
     printf("Total negative Numbers are: %d\n",Negetive);
     printf("Total even Numbers are: %d\n",Even);
     printf("Total odd Numbers are: %d\n",Odd);

     return 0;
}
