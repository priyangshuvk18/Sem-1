#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int hour, minute, second;
    //Ask for the recent time
    printf("Enter the hour: ");
    scanf("%d", &hour);
    printf("Enter the minute: ");
    scanf("%d", &minute);
    printf("Enter the second: ");
    scanf("%d", &second); 

    while(1)
    {   
        system("cls");//clearscreen
        printf("Clock: ");
        printf("\n%02d:%02d:%02d", hour, minute, second);
        sleep(1);
        second++;
        if(second >= 60) // just gving a limit upto 60
        {    minute++;
            second = 0;
        }
        if(minute >= 60) // just gving a limit upto 60
        {    hour++;
            minute = 0;
        }
        if(hour >= 24) // just gving a limit upto 60
        {
            hour = 0;
        }
    }  
}