#include<stdio.h>
#include<conio.h>
void main()
{
char Gender;
printf("Enter m if you are Male \nEnter f if you are Female, \nEnter o if you are other. ");
scanf("%c",&Gender);
switch(Gender)
{
case ('m'|| 'M'):
    printf("\n You are male.\n");
    break;
case 'f':
    printf("\n You are female\n");
    break;
case 'o':
    printf("\n You belong to other.\n");
    break;
default:
    printf("\n Enter appropriate value.\n");
    break;
}
getch();
}
