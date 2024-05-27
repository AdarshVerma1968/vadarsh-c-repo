#include<stdio.h>
int main()
{
    char n[20];
    int a,b,c;
    printf("\nEnter the student name:");
    gets(n);
    printf("\nEnter the marks of 1st subject:");
    scanf("%d",&a);
    printf("\nEnter the marks of 2nd subject:");
    scanf("%d",&b);
    printf("\nEnter the marks of 3rd subject:");
    scanf("%d",&c);
    printf("\nThe name of student is:%s",n);
    printf("\nMarks of 1st subject:%d",a);
    printf("\nMarks of 2nd subject:%d",b);
    printf("\nMarks of 3rd subject:%d",c);
}