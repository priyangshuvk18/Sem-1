#include<stdio.h>
int main()
{
    int a, bill=0, i, price;
    printf("Enter the number of items : \n");
    scanf("%d", &a);

        for (i=1; i<=a; i++)
    {
        printf("Enter the price of your number %d item\n", i);
        scanf("%d", &price);
        bill=bill+price;
        printf("Your bill is %d\n", bill);
    }
    if (bill>=499)
    {
        printf("Congratulation!!! Your are eligible for the coupon");
    }   
    else
    {
            printf("Sorry you are not eligible for the coupon");
    }
    return 0;
}