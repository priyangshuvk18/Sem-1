#include<stdio.h>
int main()
{
    char op;
    double n1, n2;
    printf("What calculation do you want (+,-,*,/) : ");
    scanf("%c",  &op);
    printf("Enter two digits :- ");
    scanf("%lf %lf", &n1, &n2);

    
        switch (op)
    {
        case '+':           //FOR ADDITION
        printf("%.1lf+%.1lf=%.1lf", n1, n2, n1+n2);
        break;
        
        case '-':           //FOR SUBSTRACTION
        printf("%.1lf-%.1lf=%.1lf", n1, n2, n1-n2);
        break;

        case '*':           //FOR MULTIPLICATION
        printf("%.1lf*%.1lf=%.1lf", n1, n2, n1*n2);
        break;

        case '/':           //FOR DIVISION
        printf("%.1lf/%.1lf=%.1lf", n1, n2, n1/n2);
        break;
    }
    return 0;
}