#include<stdio.h>
#include<string.h>

int r;

int Palindrome(char *p, int si,int ri)
{
     int r=1;
     char ch1,ch2;
     ch1=*(p+si);
     ch2=*(p+ri);


     if(ch1==ch2)
     {
          if(ri>si)
          {
                Palindrome(p,si+1,ri-1);
                if(ch1!=ch2)
                {
                     r=0;

               }


          }
     }

 return r;

}

int main()
{
     int i,si,ri;


     char a[]="chocolate", *p;
     i=strlen(a);

     p = a;

     si=0;
     ri=i-1;
     printf("The word entered is: ");
     puts(a);
     printf("It is");
     r= Palindrome(p,si,ri);

     if(r==0)
          printf(" a Palindrome");
     else
          printf(" not a Palindrome");


return 0;
}
