#include<stdio.h>
int main()
{
  int x=5, y=0, z=15;
  if(x&&y)
  {
      printf("Logical and:True\n");
  }
  else
  {
      printf("Logical and: False\n");
  }

  if(x||y)
  {
      printf("Logical OR:True\n");
  }
  else
  {
      printf("Logical OR: False\n");
  }
  return 0;
}
