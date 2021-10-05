#include<stdio.h>
#include<string.h>

int main()
{
     int i;


          char name[3][20];

          printf("Enter First Name : \n");
          gets(name[0]);
          printf("Enter Middle Name : \n");
          gets(name[1]);
          printf("Enter Last Name : \n");
          gets(name[2]);
          printf("The Abbreviated Name is : \n");

          printf("%.1s. %.1s. ",name[0], name[1]);

          puts(name[2]);

     return 0;
}
