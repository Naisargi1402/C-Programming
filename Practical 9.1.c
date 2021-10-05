#include<stdio.h>

/*void prime(void)
{
     int x,flag;
     printf("Enter the value: ");
     scanf("%d", &x);
     flag=0;
     for(int i=2; i<=x/2; i++)
     {
         if(x%i==0)
         {
             flag=1; break;
         }

     }
     if(flag==0)
     {
         printf("PRIME\n");
     }
     else
     {
         printf("NOT PRIME\n");
     }
}

int prime(void)
{
     int x,flag;
     printf("Enter the value: ");
     scanf("%d", &x);
     flag=0;
     for(int i=2; i<=x/2; i++)
     {
         if(x%i==0)
         {
             flag=1; break;
         }

     }
     return flag;

}*/

void prime(int x)
{
     int flag;

     for(int i=2; i<=x/2; i++)
     {
         if(x%i==0)
         {
             flag=1; break;
         }

     }
     if(flag==0)
     {
         printf("PRIME\n");
     }
     else
     {
         printf("NOT PRIME\n");

     }
}
/*
int prime(int x)
{
     int flag;
     flag=0;
     for(int i=2; i<=x/2; i++)
     {
         if(x%i==0)
         {
             flag=1; break;
         }

     }
     return flag;

}*/

int main()
{
     /*//1:
     prime();


2:
     int flag;
     flag=prime();

     if(flag==0)
     {
         printf("PRIME\n");
     }
     else
     {
         printf("NOT PRIME\n");
     }*/

     //3:
     int x;
     printf("Enter the value: ");
     scanf("%d", &x);
     prime(x);


     /*4:
     int x,flag;
     printf("Enter the value: ");
     scanf("%d", &x);
     flag=prime(x);

     if(flag==0)
     {
         printf("PRIME\n");
     }
     else
     {
         printf("NOT PRIME\n");
     }*/



}
