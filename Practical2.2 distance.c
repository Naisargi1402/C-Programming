#include<stdio.h>
#include<conio.h>

void main()
{
 float D, DistanceInMeter, DistanceInFoot,DistanceInInch,DistanceInCentimeter;
 printf("Enter the distance between two cities in Kilometers: ");
 scanf("%f",&D);
 if (D>0)
 {


  DistanceInMeter=D*1000;
  printf(" The distance in meters is = %.1f\n",DistanceInMeter);
 DistanceInFoot=D*3280.84;
  printf(" The distance in foot is = %.1f\n",DistanceInFoot);
 DistanceInInch=D*39370.1;
  printf(" The distance in inches is = %.1f\n",DistanceInInch);

 DistanceInCentimeter=D*100000;
  printf(" The distance in centimeters is = %.1f\n",DistanceInCentimeter);

 }
else
{

printf("Enter appropriate value!");
}

getch();
}
