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
    int j=0,k=0,l = m+n;
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
    i=0;
    printf("Enter the merged Array:");
    while(i<l)
    {
        printf("%d ", x[i]);
        i++;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
