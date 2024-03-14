#include<stdio.h>
int main()
{
    int a, m, sum=0;
    printf("Enter the number :- ");
    scanf("%d", &a);
    while (a>0)
    {
     m=a%10;
     sum=sum+m;
     a=a/10;
    }
    {
    printf("The sum of the digit of yor number :- %d", sum);
    return 0;
    }
}
