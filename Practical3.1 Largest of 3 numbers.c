#include<stdio.h>
int main()
{
    int Var1,Var2,Var3;
    printf("Enter the first number: ");
    scanf("%d", &Var1);
    printf("Enter the second number: ");
    scanf("%d", &Var2);
     printf("Enter the third number: ");
    scanf("%d", &Var3);

    if(Var2>Var1)
    {
          if (Var2>Var3)
          {
               printf("Second number is the greatest.");goto L1;
          }
          if (Var3>Var2)
          {
               printf("Third number is the greatest.");goto L1;
          }

    }
     if(Var1>Var2)
     {

          if (Var1>Var3)
          {
               printf("First number is the greatest.");goto L1;
          }
          if (Var3>Var1)
          {
               printf("Third number is the greatest.");goto L1;
          }
    }
    if(Var1>Var3)
     {
          if (Var1>Var2)
          {
               printf("First number is the greatest.");goto L1;
          }
          if (Var2>Var1)
          {
               printf("Second number is the greatest.");goto L1;
          }
    }
    if (Var1==Var2 && Var2==Var3)
    {
         printf("All the numbers are equal."); goto L1;
    }

     L1:
    return 0;
}
