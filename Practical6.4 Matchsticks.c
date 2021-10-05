#include<stdio.h>


int main()
{
  int a,b,c=21;
 while(c!=1)
  {
  printf("Enter the number of matchsticks  you want to pick up: ");
  scanf("%d", &a);

  switch(a)
 {
 case 1:
      b=4;
      break;

case 2:
      b=3;
      break;

case 3:
      b=2;
      break;

 case 4:
      b=1;
      break;


 }
printf("No. of sticks computer will pick up:%d\n",b);
c=c-a-b;
printf("No. of sticks remaining:%d\n",c);

  }
printf("You have to pick up the remaining matchstick, so computer wins!!");
return 0;
}
