#include<stdio.h>
#include<math.h>

 int main()
 {
    double x=-3.4, y, z=3;

y=ceil(x); printf("\n ceil : %lf",y);
y=floor(x); printf("\n floor : %lf",y);
y=fabs(x); printf("\n fabs : %lf",y);
y=log(10); printf("\n log : %lf",y);
y=log10(55); printf("\n log10 : %lf",y);
y=fmod(10,z); printf("\n fmod : %lf",y);
y=sqrt(100); printf("\n sqrt: %lf",y);
y=pow(10,z); printf("\n pow : %lf",y);
y=exp(x); printf("\n exp : %lf",y);
y=cos(90); printf("\n cos : %lf",y);
y=acos(90); printf("\n acos : %lf",y);
y=tanh(60); printf("\n tanh : %lf",y);

    return 0;
     }
