#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    if (n1==n2)
    {
        printf("Both the number are equal.");
    }
    else if(n1>n2)
    {
        printf("First number is greater. ");
    }
     else
    {
        printf("Second number is greater. ");
    }
    return 0;
}
