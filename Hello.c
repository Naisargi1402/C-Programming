#include<stdio.h>

void main()
{
int Ali,j=2,s=3;
Ali=j*2+s/s;
printf("Ali=%d\n",Ali);
Ali=j<<2+s;
printf("Ali=%d\n",Ali);
Ali=12/j*s;
printf("Ali=%d\n",Ali);
Ali=((-1^j)&7)|s;
printf("Ali=%d\n",Ali);
Ali=j++ + ++s;
printf("Ali=%d",Ali);
getch();
}
