#include<stdio.h>
int main()
{
 int Ram,Shyam,Ajay;

  printf("Enter the age of Ram, Shyam and Ajay: \n");
  scanf("%d %d %d",&Ram,&Shyam,&Ajay);
if (Ram==Shyam==Ajay)
{

printf("All three are equal.");
}
else if (Ram<0 || Shyam<0 || Ajay<0)
{
     printf("Enter valid input.");
}

else
{


  switch(Ram<Shyam)
  {
       case 1:
            switch(Ram<Ajay)
            {
            case 1:
               printf("Ram is Youngest.");
               break;
            case 0:
               printf("Ajay is Youngest.");
               break;
            }
            break;
      case 0:
          switch(Shyam<Ajay)
          {
           case 1:
                  printf("Shyam is Youngest.");
                  break;
          case 0:
               printf("Ajay is Youngest.");
               break;
          }
          break;

}

}
return 0;
}
