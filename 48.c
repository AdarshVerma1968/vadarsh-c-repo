#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%400==0)
    {
        // Leap year if perfectly divisible by 400
        printf("It is a leap year",year);
    }
     // Not a leap year if divisible by 100 but not divisible by 400
    else if(year%100==0)
    {
        
        printf("It is  not a leap year",year);
    }
     // Leap year if not divisible by 100 but divisible by 4
    else if(year%4==0)
    {
        
        printf("It is a leap year",year);
    }
    // All other years are not leap years
    else{
        printf("It is not a leap year");
    }
    return 0;
}