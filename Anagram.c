#include<stdio.h>

int main()
{
     char a[100], b[100], flag=0;
     char *x=a, *y=b;

     printf("Enter the First Word: ");
     gets(a);
     printf("Enter the Second Word: ");
     gets(b);

     if(strlen(a)!= strlen(b))
          printf("The words are not Anagrams.");

     else if(strlen(a)== strlen(b))
          for(int i=0; a[i]!='\0';i++)
          {
               for(int j=0;b[j]!='\0';j++)
               {
                    if(a[i]==b[j])
                         break;
               }
               flag=1;
          }

     if(flag==1)
          printf("The words are Anagrams.");



     return 0;
}
