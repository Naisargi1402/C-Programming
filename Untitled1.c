#include<stdio.h>
int main()
{
  int Ram,Shyam,Ajay;

  printf("Enter the age of Ram : \n");
  scanf("%d",&Ram);
 printf("Enter the age of Shyam : \n");
  scanf("%d",&Shyam);
printf("Enter the age of Ajay : \n");
  scanf("%d",&Ajay);

 if (Ram<Shyam && Ram<Ajay)
{
     printf("Ram is the youngest.");
}
else if (Shyam<Ram && Shyam<Ajay)
{
     printf("Shyam is the youngest.");
}
else if (Ajay<Shyam && Ram>Ajay)
{
     printf("Ajay is the youngest.");
}
else if (Ram==Shyam==Ajay)
{
     printf("All are equal.");
}
else{
     printf("Enter valid input!");
}


return 0;
}
