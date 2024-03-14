#include<stdio.h>
int gcd(int a, int b);

int main()
{
    int m, n;
    printf("Enter the Two Digits :- \n ");
    scanf("%d %d",&m,&n);
    printf("%d", gcd(m,n));
}
int gcd(int a, int b)
{
    if(b!=0)
    {
        return gcd(b, a%b);
    } 
    else
    {
        return a;
    }
}