#include<stdio.h>

void main()
{

     int x[10], i, *p;
     int dis=0,fc=0,ps=0,fl=0;
     p=x;
     printf("Enter Marks of 10 students: \n");

     for( i=0;i<10;i++)
     {
          printf("Enter Marks of Student %d: ",i+1);
          scanf("%d",p);
          p++;
     }

     for(p=x; p<&x[10]; p++)
     {
          if(*p>=70)
               dis++;
          else if(*p>=60 && *p<70)
               fc++;
          else if(*p>=40 && *p<60)
               ps++;
          else
               fl++;
     }

     printf("\nNumber of students with DISTINCTION = %d",dis);
     printf("\nNumber of students with FIRST CLASS = %d",fc);
     printf("\nNumber of students PASSED = %d",ps);
     printf("\nNumber of students FAILED = %d",fl);
}

