#include<stdio.h>
int main()
{
int a=0;
/*goto l1;*/
while (a<20)

{

printf("%d\n",a);
a++;
if (a>20)
{
     break;
}
}
l1:
return 0;
}
