#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20,c;
    int d=20,e=25,f;

printf("\n before execution a: %d and b: %d",a,b);
c = ++a + a++ + --a + ++b - --b - b--;
printf("\n c: %d",c);
printf("\n after execution a: %d and b: %d",a,b);

printf("\n before execution d: %d and e: %d",d,e);
f= ++d + d++ - --d + d-- - ++e + e++ - --e + e-- - ++d + ++e - ++e + ++d;
printf("\n f : %d",f);
printf("\n after execution d: %d and e: %d",d,e);
getch();
}
