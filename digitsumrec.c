#include<stdio.h>
int Sum_Of_Digit( int n)
{
    if (n == 0)
    return 0;
    return (n/10+Sum_Of_Digits(n/10));
    //Driven program to check above
    int main()
    {
        int num = 123456789;
        int result = Sum_Of_Digits(num);
        printf("Sum of digits in %d is %d\n", num , result); 
    }
return 0;
    
}