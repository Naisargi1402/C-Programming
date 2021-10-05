#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,i=0;
    scanf("%d", &n);
    int a[n];
    while(i<n)
    {
        scanf("%d", &a[i]);
        i++;
    }
    char c;
    scanf("%c", &c);
    getchar();
    int sum=0;
    if(c=='b')
    {
        i=0;
        while(i<n)
        {
            sum+=a[i];
            i+=2;
        }
    }
    else if(c=='g')
    {
        i=1;
        while(i<n)
        {
            sum+=a[i];
            i+=2;
        }
    }
    printf("%d", sum);

    return 0;
}
