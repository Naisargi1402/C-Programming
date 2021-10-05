#include<stdio.h>
int main()
{
    float price,discount;
    printf("Enter the original price:");
    scanf("%f", &price);
    if(price>100)
    {
        price*=0.9;
        printf("price = %f",price);
    }

    return 0;
}
