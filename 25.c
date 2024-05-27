#include<stdio.h>
int main()
{
    char n[20];
    int s,da,hra,np;
    printf("Enter the name of the employee:");
    gets(n);
    printf("\nEnter the basic salary:");
    scanf("%d",&s);
    da=(s*20)/100;
    hra=(s*10)/100;
    np=s+da+hra;
    printf("\nThe name of the employee is:%s",n);
    printf("\nThe net pay of the employee is :%d",np);
}