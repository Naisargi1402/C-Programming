#include<stdio.h>

void main()
{
     char string[50],line[100], copy[100], abc[]="Naisargi";
     int i,a, len=0;

     /*for(i=0;abc[i]!='\0';i++)
     {
          a=i+1;
          printf("|%.-8%s|",abc);
     }*/

     printf("Input: ");
     gets(line);
     /*(i=0;line[i]!='\0';i++)
     {
          len++;
     }
      printf("Output: ");*/
     puts(line);
     //or
     printf("Output: %s\n",line);



     printf("Input: ");
     scanf("%s",&string);
     printf("Output: %s",string);


}
