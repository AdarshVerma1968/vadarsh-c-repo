#include<stdio.h>
int main()
{
    char n[15];
    int a;
    printf("\n Enter your name:");
    gets(n);
    printf("\nEnter your age:");
    scanf("%d",&a);
    printf("\nThe name of User is:%s",n);
    printf("\nThe age of user is:%d",a);
}