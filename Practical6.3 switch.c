#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c=0,n,flag=0,x,sum=0;
    do
    {
         printf("1-Prime or not.\n2-Perfect or not.\n3-Factorial.\nEnter the number: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1: printf("Enter the value: ");
                    scanf("%d", &x);
                    flag=0;
                    for(int i=2; i<=x/2; i++)
                    {
                        if(x%i==0)
                        {
                            flag=1; break;
                        }

                    }
                    if(flag==0)
                    {
                        printf("PRIME\n");
                    }
                    else
                    {
                        printf("NOT PRIME\n");
                    }
                    break;
            case 2: printf("Enter the value: ");
                    scanf("%d", &x);
                    sum=0;
                    for(int i=1; i<x; i++)
                    {
                        if(x%i==0)
                        {
                            sum+=i;
                        }
                    }
                    if(sum==x)
                    {
                        printf("PERFECT\n");
                    }
                    else
                    {
                        printf("NOT PERFECT\n");
                    }
                    break;
            case 3: printf("Enter the value: ");
                    scanf("%d", &x);
                    sum=1;
                    for(int i=1; i<=x; i++)
                    {
                        sum*=i;
                    }
                    printf("%d\n", sum);
                    break;
            case 4: c=1; break;

        }
    }while(c==0);

    return 0;
}
