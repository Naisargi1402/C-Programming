#include<stdio.h>

void main()
{
int Ali,John=2,Steve=3;
Ali=John*2+Steve/Steve;
printf("Ali=%d\n",Ali);
Ali=John<<2+Steve;
printf("Ali=%d\n",Ali);
Ali=12/John*Steve;
printf("Ali=%d\n",Ali);
Ali=((-1^John)&7)|Steve;
printf("Ali=%d\n",Ali);
Ali=John++ + ++Steve;
printf("Ali=%d",Ali);
getch();
}
