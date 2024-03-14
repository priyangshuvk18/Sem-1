#include<stdio.h>
int main()
{
     int sum=0, i, remainder, num;
     printf("Enter the number: \n");
     scanf("%d", &num); 

     for (i=1; i<num; i++)
     {
          remainder=num%i;
          if(remainder == 0)
          {
               sum=sum+i;
          }
     }
     if (sum == num )
     printf("The number is perfect number");
     else
     printf("The number is  not perfect");

     return 0;
}
