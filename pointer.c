#include<stdio.h>

void main()
{

     int a,b;
     int *pt, *pt1;
     float f;
     float *fl;
     char c;
     char *ch;

     pt = &a;
     pt1 = &b;
     fl = &f;
     ch = &c;


     a=9,b=7,f=97.6,c='N';

     printf("\nA = %d", a);
     printf("\nvalue= %d",*pt);
     printf("\naddress= %u",pt);
     printf("\n&a= %d",&a);
     printf("\ncontents: %d",&pt);

     printf("\nb = %d", b);
     printf("\nvalue= %d",*pt1);
     printf("\naddresss: %u",pt1);

     printf("\nf = %f", f);
     printf("\nvalue= %f",*fl);
     printf("\naddresss: %u",fl);

     printf("\nc = %c", c);
     printf("\nvalue= %c",*ch);
     printf("\naddresss: %u",ch);

     printf("\nEnter b:");
     scanf("%d",&b);
     printf("Value of b is now: %d",b);
}
