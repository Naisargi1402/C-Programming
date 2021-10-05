#include<stdio.h>
int main()
{
int day;
printf("Enter the day number: ");
scanf("%d",&day);
switch(day)
{
case 1:
    printf("\n Sunday\n");
    break;
case 2:
    printf("\n Monday\n");
    break;
case 3:
    printf("\n Tuesday\n");
    break;
case 4:
    printf("\n Wednesday\n");
    break;
case 5:
    printf("\n Thursday\n");
    break;
case 6:
    printf("\n Friday\n");
    break;
case 7:
    printf("\n Saturday\n");
    break;
default:
    printf("Please enter a valid number.");


}

return 0;
}
