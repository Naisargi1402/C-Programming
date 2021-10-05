#include<stdio.h>
int main()
{
     int n,i,j,k=1;


     printf("Enter the value of n:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          for(j=n-1;j>=i/2;j--)
          {
               printf(" ");
          }

          for(j=0;j<=i;j++)
          {
               printf("*");
          }

          for(j=n-1;j>=i;j--)
          {
               printf(" ");
          }

          printf("\n");
     }



     printf("Enter the value of n:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          for(j=0;j<=i;j++)
          {
               printf("%2d",k);
               k++;
          }
          printf("\n");
     }
     printf("Enter the value of n:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          for(j=0,k=1;j<=i;j++)
          {
               printf("%3d",k);
               k++;
          }
          printf("\n");
     }


     printf("Enter the value of n:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          for(j=0;j<=i;j++)
          {
               printf("*");
          }
          printf("\n");
     }


     printf("Enter the value of n:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          for(j=n-1;j>=i;j--)
          {
               printf(" ");
          }

          for(j=0;j<=i;j++)
          {
               printf("*");
          }
          printf("\n");
     }


      printf("Enter the value of n:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          for(j=0;j<=i;j++)
          {
               printf("%d",i+1);
          }
          printf("\n");
     }




  return 0;
}
