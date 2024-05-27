#include<stdio.h>
int main()
{
    int a,b,sum,sub,mult,div;
    printf("\nEnter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    sum = a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    printf("\nSum of the two number is:%d",sum);  
    printf("\nSubtraction of the two numbers is:%d",sub);
    printf("\nMultiplication of the two numbers is:%d",mult);
    printf("\nDivision of the two numbers is:%d",div);
}