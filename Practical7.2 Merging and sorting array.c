#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n,i=0;
    printf("Enter the length of first Array:");
    scanf("%d", &m);
    int a[m];
    printf("Enter the first Array:");
    while(i<m)
    {
        scanf("%d", &a[i]);
        i++;
    }
    i=0;
    printf("Enter the length of second Array:");
    scanf("%d", &n);
    int b[n];
    printf("Enter the second Array:");
    while(i<n)
    {
        scanf("%d", &b[i]);
        i++;
    }
    i=0;
    int j=0,k=0,l = m+n,temp;
    int x[l];
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            x[k] = a[i];
            k++; i++;
        }
        else
        {
            x[k] = b[j];
            k++; j++;
        }
    }
    while(i<m)
    {
        x[k] = a[i];
        k++; i++;
    }
    while(j<n)
    {
        x[k] = b[j];
        k++; j++;
    }

    for(i=0;i<l-1;i++)
    {
         for(j=i;j<l;j++)
         {
         if(x[i]>x[j])
         {
              temp=x[i];
              x[i]=x[j];
              x[j]=temp;

         }
         }

    }
    i=0;
    printf("The merged Array is:");
    while(i<l)
    {
        printf("%d ", x[i]);
        i++;
    }

    return 0;
}
