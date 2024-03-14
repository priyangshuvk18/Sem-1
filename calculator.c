//Calculator
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter '+' for ADDITION\nEnter '-' for SUBSTRACTION\nEnter '*' for MULTIPLICATION\nEnter '/' for DIVISION\n");
    scanf("%c", &ch);
    if (ch == '+' ) // for addiition
    {
        int n1, n2, sum;
        printf("Enter the two digits: ");
        scanf("%d %d", &n1, &n2);
        sum=n1+n2;
        printf("The addition of your numbers :- %d+%d=%d", n1, n2,sum);
    }
    else if (ch == '-') //for substraction
    {
        int a1, a2, substraction;
        printf("Enter the two digits: ");
        scanf("%d %d", &a1, &a2);
        substraction=a1-a2;
        printf("The substraction of your numbers :- %d-%d=%d", a1, a2,substraction); 
    }
    else if (ch == '*') //for multiplication
    {
        int m1, m2, multiply;
        printf("Enter the two digits: ");
        scanf("%d %d", &m1, &m2);
        multiply=m1*m2;
        printf("The multiplication of your numbers :- %d*%d=%d", m1, m2,multiply);
    }
    else if (ch == '/') // for divison
    {
        int d1, d2, division;
        printf("Enter the two digits: ");
        scanf("%d %d", &d1, &d2);
        division = d1/d2;
        printf("The division of your numbers :- %d/%d=%d", d1, d2,division);
    }
    
    return 0;

}