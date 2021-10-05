#include<stdio.h>

float Area(float x,float y,float z)
{
     float s,a;

     s=(x+y+z)/2;

     a=sqrt(s*(s-x)*(s-y)*(s-z));
     return a;


}


int main()
{
     float a,b,c;

     printf("Enter the value of side 'a': ");
      scanf("%f",&a);
      printf("Enter the value of side 'b': ");
      scanf("%f",&b);
      printf("Enter the value of side 'c': ");
     scanf("%f",&c);

     printf("Area of the triangle is : %f",Area(a,b,c));

     return 0;

}


