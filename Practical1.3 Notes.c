#include<stdio.h>
#include<conio.h>

void main()
{

int Amount, HundredNotes,FiftyNotes, TenNotes;

printf("Enter the Amount to be withdrawn: ");
scanf("%d", &Amount);
HundredNotes=Amount/100;
printf("No. of HundredNotes=%i\n",HundredNotes);
Amount=Amount%100;
FiftyNotes=Amount/50;
printf("No. of FiftyNotes=%i\n",FiftyNotes);
Amount=Amount%50;
TenNotes=Amount/10;
printf("No. of TenNotes=%i\n",TenNotes);
getch();
}



