#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   int n,i=0; char l;
   scanf("%d",&n);
   int c[n];
while(i<n)
{
    scanf("%c",&c[i]);
    i++;
}

  scanf("%c",&l);

  int sum=0;
    i=0;
    if(l=='b')
    {
       sum=sum+c[i];
       i=i+2;
       printf("%d",sum);
    }

    else if(l=='b')
    {
           i=1;
       sum=sum+c[i];
       i=i+2;
       printf("%d",sum);
    }

    return 0;
    }
