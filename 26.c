#include<stdio.h>
int main()
{
    int year,month,days;
    printf("Enter the days:");
    scanf("%d",&days);
    year=days/365;
    month=days/30;
    printf("\nThe number of days is:%d",days);
    printf("\nThe number of months is:%d",month);
    printf("\nThe number of years is:%d",year);
}